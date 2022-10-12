# Download base image ubuntu 14.04
FROM ubuntu:20.04

# LABEL about the custom image
LABEL maintainer="blesagr@technikum-wien.at"
LABEL version="2.0"
LABEL description="Docker Image for running the SAMYYCore"

ARG DEBIAN_FRONTEND=noninteractive

## installing dependencies
RUN apt update && apt upgrade -y \
&& apt install -y build-essential python3.8 python3.8-dev nano cmake git libffi-dev && apt-get clean \
&& mkdir /usr/src/samy

## clone correct versions, build, install and remove open62541, Catch2, yaml-cpp
RUN git clone --recursive https://github.com/open62541/open62541.git -b 1.2 --single-branch \
&& cd open62541 && mkdir build && cd build \
&& cmake -DUA_NAMESPACE_ZERO=FULL \
      -DUA_ENABLE_SUBSCRIPTIONS=ON \
      -DUA_ENABLE_SUBSCRIPTIONS_EVENTS=ON \
      -DUA_ENABLE_DA=ON \
      -DUA_ENABLE_METHODCALLS=ON \
      -DUA_ENABLE_NODEMANAGEMENT=ON \
      -DUA_ENABLE_ENCRYPTION=OFF \
      .. \
&& make -j7 && make install \
&& cd /usr/src/samy && rm -rf ./open62541 \
&& git clone https://github.com/catchorg/Catch2.git -b v2.13.4 --single-branch \
&& cd Catch2 && mkdir build && cd build \
&& cmake .. && make -j7 && make install \
&& cd /usr/src/samy && rm -rf ./Catch2 \
&& git clone --recursive https://github.com/jbeder/yaml-cpp.git -b yaml-cpp-0.6.2 --single-branch \
&& cd yaml-cpp && mkdir build && cd build \
&& cmake -DBUILD_SHARED_LIBS=ON .. && make -j7 && make install \
&& cd /usr/src/samy && rm -rf ./yaml-cpp


## copy files into image
WORKDIR /usr/src/samy
COPY . ./


## Build SAMYCore
RUN cd /usr/src/samy && rm -rf ./build;mkdir build && cd build && cmake .. && make -j7

# BUILDING SKILLS (just for testing, this will be automated) ";" means execute even if previous command fails
RUN cd /usr/src/samy/Skills/Skill_1 && mkdir build && cd build && cmake .. && make -j7 &&  mv libtestFunction2.so.1.0 ../libtestFunction2.so  \
&& cd /usr/src/samy/Skills/Test_skill && rm -rf build;mkdir build && cd build && cmake .. && make -j7 && mv libSkill_1.so.1.0 ../libtestFunction.so

EXPOSE 4840

## start core

#ENTRYPOINT ["tail"]
#CMD ["-f","/dev/null"]
CMD ["/usr/src/samy/build/SAMYCore", "/usr/src/samy/configFiles_examples/SAMYCoreConfig.yaml"]


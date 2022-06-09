# Download base image ubuntu 14.04
FROM ubuntu:20.04

# LABEL about the custom image
LABEL maintainer="leber@technikum-wien.at"
LABEL version="0.1"
LABEL description="This is custom Docker Image for \
running the SAMY Core"

ARG DEBIAN_FRONTEND=noninteractive

## installing dependencies
RUN apt update && apt upgrade -y
RUN apt install -y libboost-python1.71.0 build-essential \
 cmake nano libyaml-cpp-dev libboost-all-dev git libspdlog-dev

## copy files into image
RUN mkdir /usr/src/samy
WORKDIR /usr/src/samy
COPY . ./
## build and install open62541
#RUN rm -r open62541_v1.2_unions_fixed/build
RUN mkdir open62541_v1.2_unions_fixed/build
WORKDIR open62541_v1.2_unions_fixed/build
RUN cmake -DUA_NAMESPACE_ZERO=FULL \
      -DUA_ENABLE_SUBSCRIPTIONS=ON \
      -DUA_ENABLE_SUBSCRIPTIONS_EVENTS=ON \
      -DUA_ENABLE_DA=ON \
      -DUA_ENABLE_METHODCALLS=ON \
      -DUA_ENABLE_NODEMANAGEMENT=ON \
      ..
RUN make -j
RUN make install

## build and install catch2
WORKDIR /usr/src
RUN git clone https://github.com/catchorg/Catch2.git
WORKDIR Catch2
RUN git checkout tags/v2.13.4
RUN mkdir build
WORKDIR build
RUN cmake ..
RUN make -j
RUN make install

## build SAMY Core
WORKDIR /usr/src/samy
RUN rm -r build && mkdir build
WORKDIR build
RUN cmake ..
RUN make -j

EXPOSE 4840

## start core

#ENTRYPOINT ["tail"]
#CMD ["-f","/dev/null"]
CMD ["/usr/src/samy/build/SAMYCore", "/usr/src/samy/configFiles/SAMYCoreConfig.yaml"]

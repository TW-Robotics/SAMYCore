#!/bin/bash 

# Here I would rather use a loop or something!

cd   ./Skills/GetPoseSkill/ && mkdir -p build && cd build && cmake .. && make -j$((`nproc`-2)) &&  mv libgetPoseSkill.so.1.0 ../libgetPoseSkill.so && cd ../../.. && \
cd   ./Skills/MoveCylinderSkill/ && mkdir -p build && cd build && cmake .. && make -j$((`nproc`-2)) &&  mv libmoveCylinderSkill.so.1.0 ../libmoveCylinderSkill.so && cd ../../.. && \
cd   ./Skills/PickAndPlaceSkill/ && mkdir -p build && cd build && cmake .. && make -j$((`nproc`-2)) &&  mv libpickAndPlaceSkill.so.1.0 ../libpickAndPlaceSkill.so && cd ../../.. && \
cd   ./Skills/SetGripperSkill/ && mkdir -p build && cd build && cmake .. && make -j$((`nproc`-2)) &&  mv libsetGripperSkill.so.1.0 ../libsetGripperSkill.so && cd ../../.. && \
cd   ./Skills/PlaceSkill/ && mkdir -p build && cd build && cmake .. && make -j$((`nproc`-2)) &&  mv libplaceSkill.so.1.0 ../libplaceSkill.so && cd ../../.. && \
cd   ./Skills/PickSkill/ && mkdir -p build && cd build && cmake .. && make -j$((`nproc`-2)) &&  mv libpickSkill.so.1.0 ../libpickSkill.so && cd ../../.. && \
cd   ./Skills/CheckStorageSkill/ && mkdir -p build && cd build && cmake .. && make -j$((`nproc`-2)) &&  mv libcheckStorageSkill.so.1.0 ../libcheckStorageSkill.so && cd ../../.. && \
cd   ./Skills/PlaceGridSkill/ && mkdir -p build && cd build && cmake .. && make -j$((`nproc`-2)) &&  mv libplaceGridSkill.so.1.0 ../libplaceGridSkill.so && cd ../../.. && \
cd   ./Skills/MoveToSkill/ && mkdir -p build && cd build && cmake .. && make -j$((`nproc`-2)) &&  mv libmoveToSkill.so.1.0 ../libmoveToSkill.so && cd ../../.. && \
cd   ./Skills/MoveTo2Skill/ && mkdir -p build && cd build && cmake .. && make -j$((`nproc`-2)) &&  mv libmoveTo2Skill.so.1.0 ../libmoveTo2Skill.so && cd ../../.. && \
 ../build/SAMYCore   ./SAMYCoreConfig.yaml

#cd /usr/src/samy/configFiles/Skills/GetPoseSkill/ && make -p build && cd build && cmake .. && make -j$((`nproc`-2)) &&  mv libgetPoseSkill.so.1.0 ../libgetPoseSkill.so && \
#cd /usr/src/samy/configFiles/Skills/MoveCylinderSkill/ && make -p build && cd build && cmake .. && make -j$((`nproc`-2)) &&  mv libmoveCylinderSkill.so.1.0 ../libmoveCylinderSkill.so && \
#cd /usr/src/samy/configFiles/Skills/PickAndPlaceSkill/ && make -p build && cd build && cmake .. && make -j$((`nproc`-2)) &&  mv libpickAndPlaceSkill.so.1.0 ../libpickAndPlaceSkill.so && \
#cd /usr/src/samy/configFiles/Skills/SetGripperSkill/ && make -p build && cd build && cmake .. && make -j$((`nproc`-2)) &&  mv libsetGripperSkill.so.1.0 ../libsetGripperSkill.so && \
#cd /usr/src/samy/configFiles/Skills/PlaceSkill/ && make -p build && cd build && cmake .. && make -j$((`nproc`-2)) &&  mv libplaceSkill.so.1.0 ../libplaceSkill.so && \
#cd /usr/src/samy/configFiles/Skills/PickSkill/ && make -p build && cd build && cmake .. && make -j$((`nproc`-2)) &&  mv libpickSkill.so.1.0 ../libpickSkill.so && \
#cd /usr/src/samy/configFiles/Skills/CheckStorageSkill/ && make -p build && cd build && cmake .. && make -j$((`nproc`-2)) &&  mv libcheckStorageSkill.so.1.0 ../libcheckStorageSkill.so && \
#cd /usr/src/samy/configFiles/Skills/PlaceGridSkill/ && make -p build && cd build && cmake .. && make -j$((`nproc`-2)) &&  mv libplaceGridSkill.so.1.0 ../libplaceGridSkill.so && \
#/usr/src/samy/build/SAMYCore /usr/src/samy/configFiles/SAMYCoreConfig.yaml

#include <skillCallable.h>

//#include <ReflectedTypes.h>
#include <iostream> // DELETE
namespace SAMY {
namespace SkillScripting {

    void SkillCallable::call(UA_Server * const server, const std::vector<UA_NodeId> &paramNodes){
        caller->call( server, paramNodes );
    }
}
}

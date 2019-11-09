#ifndef ENGINE_CORE_UPDATABLE_INSTANCE_H__
#define ENGINE_CORE_UPDATABLE_INSTANCE_H__

#include "engine/core/status.h"

namespace engine {
namespace core {

class UpdatableInstance {
public:
  virtual const Status Init() = 0;
  //void Update() = virtual;
  //void Destroy() = virtual;
};

}  //  core
}  //  engine

#endif
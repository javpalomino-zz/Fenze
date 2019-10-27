#ifndef ENGINE_CORE_UPDATABLE_INSTANCE_H__
#define ENGINE_CORE_UPDATABLE_INSTANCE_H__

namespace engine {
namespace core {

class UpdatableInstance {
public:
  void Init() = virtual;
  void Update() = virtual;
  void Destroy() = virtual;
}

}
}
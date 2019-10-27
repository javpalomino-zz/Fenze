#ifndef ENGINE_CORE_GAME_APP_H__
#define ENGINE_CORE_GAME_APP_H__

#include "engine/graphics/window_handler.h"

// This class should be used as entry point of the framework
// It's responsibility is to initialize all subsystems

namespace engine {
namespace core {
namespace game {
  class GameApp : public UpdatableInstance {
  public:
    GameApp() {}
  private:
    std::unique_ptr<graphics::WindowHanlder> window_handler_ = nullptr;
  };
}
}
}

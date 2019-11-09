#ifndef ENGINE_CORE_GAME_APP_H__
#define ENGINE_CORE_GAME_APP_H__

#include <memory>

#include "engine/core/status.h"
#include "engine/core/updatable_instance.h"
#include "engine/core/game/proto/game_params.pb.h"
#include "engine/graphics/renderer.h"

// This class should be used as entry point of the framework
// It's responsibility is to initialize all subsystems

namespace engine {
namespace core {
namespace game {

class GameApp : public UpdatableInstance {
public:
  GameApp();
  const ::engine::core::Status
  Init();
  ~GameApp();
private:
  std::unique_ptr<::engine::graphics::Renderer> renderer_ = nullptr;
  ::engine::core::game::proto::GameParams game_params_;
};

}  //  namespace game
}  //  namespace core
}  //  namespace engine

#endif
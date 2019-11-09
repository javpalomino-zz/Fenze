#include "engine/core/game/game_app.h"

#include <memory>
#include <SDL.h>
#include <string>

#include "engine/core/status.h"
#include "engine/debug/debug.h"

namespace engine {
namespace core {
namespace game {
namespace {
using ::engine::graphics::Renderer;
}

GameApp::GameApp() {
  renderer_ = std::make_unique<Renderer>();
}

const Status GameApp::Init() {
  Status status;
  const auto& sdl_init = SDL_Init(SDL_INIT_VIDEO);

  if (sdl_init < 0) {
    DEBUG("sdl_init false");
    status.SetError("SDL could not initialize");
    return std::move(status);
  }

  // TODO(javier) - Change it to use parameters

  const auto& renderer_status = renderer_->Init(game_params_.renderer());

  if (renderer_status.error()) {
    DEBUG("renderer_status has errors");
    return std::move(renderer_status);
  }
  DEBUG("GameApp::Init completed!!");
  return std::move(status);
}

GameApp::~GameApp() {
  SDL_Quit();
}

}
}
}
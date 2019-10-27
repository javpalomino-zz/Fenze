#include "engine/core/game/game_app.h"

#include <SDL.h>

#include "engine/core/status_or_value.h"

namespace engine {
namespace core {
namespace game {

GameApp::GameApp() {
  window_handler_ = std::make_unique<graphics::WindowHanlder>();
}

Status GameApp::Init() {
  Status status;
  const auto& sdl_init = SDL_Init(SDL_INIT_VIDEO);

  if (sdl_init) {
    status.SetError(
      "SDL could not initialize! SDL_Error: %s\n",
      SDL_GetError());
    return status;
  }

  // TODO(javier) - Change it to use parameters
  window_handler_->CreateWindow("title", 800, 600);
  return status;
}

}
}
}
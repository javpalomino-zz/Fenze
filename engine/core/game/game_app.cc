#include "engine/core/game/game_app.h"

#include "engine/core/status_or_value.h"

namespace engine {
namespace core {
namespace game {

GameApp::GameApp() {
  window_handler_ = std::make_unique<graphics::WindowHanlder>();
}

bool GameApp::Init() {

  // TODO(javier) - Change it to use parameters
  window_handler_->CreateWindow("title", 800, 600);
}

}
}
}
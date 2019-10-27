#include "engine/graphics/window_handler.h"

namespace engine {
namespace graphics {
namespace {
using engine::core::Status;
}  //  namespace

Status
WindowHanlder::CreateWindow(std::string window_title, int width, int height) {
  Status status;
  // TODO(javier) - we should add a validation for the size of the screen
  // Maybe having an enum would help here ? - So, instead of having to set those
  // numbers we can provide in the API a set of valid w X h. This will also
  // allow us to let the play to pick the desired configuration
  sdl_window_ = SDL_CreateWindow(
    window_title, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);

  if (sdl_window_ == nullptr) {
    status.SetError(
      "Window could not be created! SDL_Error: %s\n", SDL_GetError());
  }

  return status;
}

void WindowHanlder::~WindowHanlder() {
  SDL_DestroyWindow(sdl_window_);
}

}  //  namespace graphics
}  //  namespace engine
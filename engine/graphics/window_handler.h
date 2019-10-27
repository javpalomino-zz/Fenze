#ifndef ENGINE_GRAPHICS_WINDOW_HANDLER_H__
#define ENGINE_GRAPHICS_WINDOW_HANDLER_H__

#include <SDL.h>

#include "engine/core/status.h"
#include "engine/graphics/window.pb.h"

namespace engine {
namespace graphics {

// I'm not really sure that WindowHandler is the right name.
// Think in a better name to update it later
class WindowHandler {
public:
  engine::core::Status
  WindowHanlder::CreateWindow(std::string window_title, int width, int height);
private:
  SDL_Window* sdl_window_ = nullptr;
};

}  //  namespace graphics
}  //  namespace engine

#endif
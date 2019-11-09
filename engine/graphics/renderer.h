#ifndef ENGINE_GRAPHICS_RENDERER_H__
#define ENGINE_GRAPHICS_RENDERER_H__

#include <SDL.h>

#include "engine/core/status.h"
#include "engine/graphics/proto/renderer_params.pb.h"
#include "engine/graphics/proto/window_params.pb.h"

namespace engine {
namespace graphics {

class Renderer {
public:
  Renderer();
  const ::engine::core::Status
  Init(const ::engine::graphics::proto::RendererParams& params);
  ~Renderer();
private:
  SDL_Renderer* sdl_renderer_ = nullptr;
  SDL_Window* sdl_window_ = nullptr;
};

}  //  namespace graphics
}  //  namespace engine

#endif
#include <iostream>
#include <SDL.h>
#include <stdio.h>

#include "engine/core/game/game_app.h"
#include "engine/debug/debug.h"
#include "fenze/config.pb.h"

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

/*int main( int argc, char* args[] )
{
  //The window we'll be rendering to
  SDL_Window* window = NULL;
  
  //The surface contained by the window
  SDL_Surface* screenSurface = NULL;

  //Initialize SDL
  if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
  {
    printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
  }

  else
  {
    //Create window
    window = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
    if( window == NULL )
    {
        printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
    }

    else
    {
        //Get window surface
        screenSurface = SDL_GetWindowSurface( window );

        //Fill the surface white
        SDL_FillRect( screenSurface, NULL, SDL_MapRGB( screenSurface->format, 0xFF, 0xFF, 0xFF ) );
        
        //Update the surface
        SDL_UpdateWindowSurface( window );

        //Wait two seconds
        SDL_Delay( 2000 );
    }
  }
  //Destroy window
  SDL_DestroyWindow( window );

  //Quit SDL subsystems
  SDL_Quit();

  config::Config test;

  return 0;
}*/

using ::engine::core::game::GameApp;

int main(int argc, char* args[]) {
  DEBUG("Start game!");
  GameApp game_app;
  const auto& status = game_app.Init();
  DEBUG("Initialized!!");
  if(status.error()) {
    DEBUG(status.GetErrorMessage());
    return 1;
  }

  return 0;
}
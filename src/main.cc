/* Following the tutorial @
 *    http://www.sdltutorials.com/sdl-tutorial-basics
 */

#include "c_app.h"

void open_new_window() {
  SDL_Init(SDL_INIT_VIDEO);
  SDL_Window* window = SDL_CreateWindow("~ The Germination Station Persuasion ~");
}

void Initialize() {
  CApp theApp;

  return theApp.on_execute();
}

int main(int argc, char* argv[]) {
  Initialize();

  while(true) {
    Events();
    Loop();
    Render();
  }

  Cleanup();
}

#include <iostream>
#include <SDL2/SDL.h>
#include "window.h"


int main(){

    // Window object
    Window window("SDL Tutorial", 800, 600);

    // look for events, while window is not closed
    while(!window.isClosed()){
        window.pollEvents();
        window.clear();
    }
 
    return 0;
}

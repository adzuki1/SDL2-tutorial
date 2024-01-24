#include <iostream>
#include <SDL2/SDL.h>
#include "window.h"


int main(){

    Window window("SDL Tutorial", 800, 600);

    while(!window.isClosed()){
        window.pollEvents();
    }
 
    return 0;
}

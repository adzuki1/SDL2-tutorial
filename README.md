## SDL2-tutorial
This repo is aimed to comport SDL2 library learning path, like window creation and event handling.


# SDL2 Library


    sudo apt-get install libsdl2-dev

    #include <SDL2/SDL.h>


# Window Class

The 'Window' class is designed to simplify SDL window creation and event handling, and to make the code snippet reusable.

- Window(string &, int, int): Constructor, for window initialization.

- ~Window(): Destructor, for resource cleanup.

- pollEvents(): Method for polling SDL events.

- isClosed(): Return logic state of the window: if it's closed, then true; if it's open, then false.


# File Structure

- 'window.h': Header file declaring the Window class and its methods.

- 'window.cpp': Implementation file containing the code for the Window class.

- 'main.cpp': Main function to create an instance of window.


# Compile and Run

Run this command on terminal to compile the file:

    g++ main.cpp window.cpp -o main -lSDL2

Then run the command bellow to execute the program:

    ./main
    

    

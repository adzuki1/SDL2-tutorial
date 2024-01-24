#include <iostream>
#include "window.h"

Window::Window(const std::string &title, int width, int height) :
    _title(title), _width(width), _height(height)
{
    // Initialize the window and check for initialization success
    if(!init()){
        _closed = true;
    }
}

// Destructor: responsible for cleaning up resources associated with the window
Window::~Window()
{
    SDL_DestroyWindow(_window);
    SDL_Quit();
}


bool Window::init(){

    // Initialize video subsystem and check for fails
    if(SDL_Init(SDL_INIT_VIDEO) != 0){
        std::cerr << "Failed to initialize SDL: " << SDL_GetError() << std::endl;
        return 0;
    }

    // Set window position
    int x = SDL_WINDOWPOS_CENTERED;
    int y = SDL_WINDOWPOS_CENTERED;

    // Create a SDL window
    _window = SDL_CreateWindow(
        _title.c_str(),
        x,
        y,
        _width, _height,
        0
    );

    // Run window and check for errors
    if (_window == nullptr){
        std::cerr << "Failed to create window: " << SDL_GetError() << std:: endl;
    }

    return true;
}


void Window::pollEvents(){

    SDL_Event event;

    if(SDL_PollEvent(&event)){
        switch (event.type){
            // Handle quit event (if window close button was clicked)
            case SDL_QUIT:
            _closed = true;
            break;
        
        default:
            break;
        }
    }
}
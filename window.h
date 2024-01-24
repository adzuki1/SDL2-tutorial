// Header file for the Window class, which encapsulates an SDL window

#pragma once

#include <string>
#include <SDL2/SDL.h>

class Window{
public:
    // constructor
    Window(const std::string &title, int width, int height);

    // destructor
    ~Window();

    void pollEvents();

    inline bool isClosed() const { return _closed; } 

private:
    bool init();

private:
    // class fields
    std::string _title;
    int _width = 800;
    int _height = 600;

    bool _closed = false;

    SDL_Window * _window = nullptr;
};

#pragma once
//Starts up SDL and creates window

#include <SDL.h>
#include <stdio.h>
#include <iostream>

class Window {
private:
	int screenWidth;
	int screenHeight;
	char* windowTitle;
	//The window we'll be rendering to
	
public:
	SDL_Window* gWindow = NULL;

	//The surface contained by the window
	SDL_Surface* gScreenSurface = NULL;

	//The image we will load and show on the screen
	SDL_Surface* gHelloWorld = NULL;
	Window(int screenWidth, int screenHeight, char* windowTitle);
	bool init();

	//Loads media
	bool loadMedia();

	//Frees media and shuts down SDL
	void close();


	/*This source code copyrighted by Lazy Foo' Productions (2004-2015)
	and may not be redistributed without written permission.*/

	//Using SDL and standard IO


	//Screen dimension constants

};


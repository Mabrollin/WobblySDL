/*This source code copyrighted by Lazy Foo' Productions (2004-2015)
and may not be redistributed without written permission.*/

//Using SDL and standard IO
#include <SDL.h>
#include <stdio.h>
#include "Window.h"

int main(int argc, char* args[])
{
	//Start up SDL and create window
	Window window = Window(640, 480, "hej");
	if (!window.init())
	{
		printf("Failed to initialize!\n");
	}
	else
	{
		//Load media
		if (!window.loadMedia())
		{
			printf("Failed to load media!\n");
		}
		else
		{
			//Apply the image
			SDL_BlitSurface(window.gHelloWorld, NULL, window.gScreenSurface, NULL);

			//Update the surface
			SDL_UpdateWindowSurface(window.gWindow);

			//Wait two seconds
			SDL_Delay(2000);
		}
	}

	//Free resources and close SDL
	window.close();
	getchar();
	return 0;
}
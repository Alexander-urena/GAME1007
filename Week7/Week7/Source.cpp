#include <iostream>
#include "SDL.h"
using namespace std;

int main(int argc, char* argv[])
{
	SDL_Window* p_window; // point to window that SDL manages
	SDL_Renderer* p_renderer; // back buffer/assembly area for objects
	
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) // 0 means fine
	{
		cout << "SDL initialized!" << endl;
	}
	else
	{
		cout << "Problem initalizing SDL.. aborting!" << endl;
		return 1; // exits program
	}
	p_window = SDL_CreateWindow("GAME1007 SDL Intro", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1024, 1024, NULL);
	p_renderer = SDL_CreateRenderer(p_window, -1, NULL);
	SDL_SetRenderDrawColor(p_renderer, 255, 0, 0, 255); // 0-255 for each colour
	SDL_RenderClear(p_renderer);
	SDL_RenderClear(p_renderer);
	SDL_RenderPresent(p_renderer);
	system("pause");
	SDL_DestroyRenderer(p_renderer);
	SDL_DestroyWindow(p_window);
	SDL_Quit();

	return 0;
}
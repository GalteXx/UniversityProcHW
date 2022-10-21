#define SDL_MAIN_HANDLED
#include <iostream>
#include <cmath>
#include <SDL.h> //I won't provide SLD2 lib here
using namespace std;


int main() {
	//Intialization
	SDL_Window* main_window = NULL;
	SDL_Renderer* main_renderer = NULL;
	const int axisLevel = 650, pi = 314;
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_CreateWindowAndRenderer(2*axisLevel, 2*axisLevel, 0, &main_window,
		&main_renderer);
	if (main_window == NULL || main_renderer == NULL)
		return -1;
	SDL_SetRenderDrawColor(main_renderer, 255, 255, 255, 255);	

	//Drawing asix
	SDL_RenderDrawLine(main_renderer, 0, axisLevel, 2*axisLevel, axisLevel);
	SDL_RenderDrawLine(main_renderer, axisLevel, 0, axisLevel, 2*axisLevel);
	//draw Pi related stuff on X axis
	SDL_RenderDrawLine(main_renderer, axisLevel + 2 * pi, axisLevel - 5, axisLevel + 2 * pi, axisLevel + 5);
	SDL_RenderDrawLine(main_renderer, axisLevel - 2 * pi, axisLevel - 5, axisLevel - 2 * pi, axisLevel + 5);
	SDL_RenderDrawLine(main_renderer, axisLevel + pi / 2, axisLevel - 5, axisLevel + pi / 2, axisLevel + 5);
	SDL_RenderDrawLine(main_renderer, axisLevel - pi / 2, axisLevel - 5, axisLevel - pi / 2, axisLevel + 5);
	SDL_RenderDrawLine(main_renderer, axisLevel - pi, axisLevel - 5, axisLevel - pi, axisLevel + 5);
	SDL_RenderDrawLine(main_renderer, axisLevel + pi, axisLevel - 5, axisLevel + pi, axisLevel + 5);
	//draw 1 on Y axis
	SDL_RenderDrawLine(main_renderer, axisLevel - 5, axisLevel + 100, axisLevel + 5, axisLevel + 100);
	SDL_RenderDrawLine(main_renderer, axisLevel - 5, axisLevel - 100, axisLevel + 5, axisLevel - 100);
	
	for (int i = -axisLevel; i < axisLevel; i++) {
		double ri = double(i) / 100;
		SDL_RenderDrawPoint(main_renderer, i + axisLevel, axisLevel - sin(ri) * 100);
	}

	//ending the program
	SDL_RenderPresent(main_renderer);
	system("pause");
	SDL_Quit();
	return 0;
}

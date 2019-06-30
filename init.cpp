#include "estados.h"
bool estados::Init() {

	if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
		return false;
	}

	if (TTF_Init() < 0) {
		return false;
	}

	if ((tela = SDL_CreateWindow(" RiDin !", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1280, 1024, 0)) == NULL) {
		return false;
	}
	if ((render = SDL_CreateRenderer(tela, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC)) == NULL){
		return false;
	}
	return true; 


}
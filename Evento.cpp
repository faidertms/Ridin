//Detec��o de Evento
#include "estados.h"
void estados::OnEvent(){
	
		while (SDL_PollEvent(&event))
		{
			if (tempoclass.calculartempo() >= 0){ // Verifica se o tempo de largada � maior ou igual a 0 para que possa movimentar o carro, por padr�o come�a como -3 o tempo
			switch (event.type)
			{
			case SDL_QUIT: //Caso o usu�rio pe�a para fechar o jogo
				running = false;
				break;
			case SDL_KEYUP: // tecla est� solta;
				switch (event.key.keysym.sym)
				{
				case SDLK_w:MoveUp = false; aceleracao = 1; break; // caso ocorra, as variaveis booleanas vao para false, onde n�o ocorre nenhuma rea��o
				case SDLK_s: MoveDown = false; break;
				case SDLK_a: MoveLeft = false; break;
				case SDLK_d: MoveRight = false; break;
				case SDLK_UP:MoveUp2 = false; acel = 1; break;
				case SDLK_DOWN: MoveDown2 = false; break;
				case SDLK_LEFT: MoveLeft2 = false; break;
				case SDLK_RIGHT: MoveRight2 = false; break;
				}
				break;
			case SDL_KEYDOWN: // tecla est� sendo pressionada
				switch (event.key.keysym.sym)
				{
				case SDLK_w: MoveUp = true; break; // caso ocorra, as variaveis vai assumir o valor true e consequentemente ativar os metodos movimento no loop.cpp
				case SDLK_s: MoveDown = true; break;
				case SDLK_a: MoveLeft = true; break;
				case SDLK_d: MoveRight = true; break;
				case SDLK_UP: MoveUp2 = true; break;
				case SDLK_DOWN: MoveDown2 = true; break;
				case SDLK_LEFT: MoveLeft2 = true; break;
				case SDLK_RIGHT: MoveRight2 = true; break;
				}
				break;
				}
			}
	}
}
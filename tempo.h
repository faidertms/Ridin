#ifndef __Tempo_H__
#define __Tempo_H__
#include <SDL.h>
// class para calcular o tempo do jogo
class tempo{
private:
	int temp = 0;
	int temp1 = 0;
	int temp2 = 0;
	int temp3 = 0;
public:

	void settemp1(){
		temp1 = SDL_GetTicks(); // guarda o tempo no qual foi chamado
	}
	void settemp2(){
		temp2 = SDL_GetTicks(); // guarda o tempo no qual foi chamado
	}
	void settemp3(){
		temp3 = SDL_GetTicks(); // guarda o tempo no qual foi chamado
	}

	int calculartempo(){
		temp = ((SDL_GetTicks() - (temp1 + temp2 + temp3))/1000)-3; // Nessa condição temp é 0 e será diminuido por -3 para que ocorra contagem regressiva para saida dos carro 
		return temp; 
	}
	void resetar(){
		temp1 = 0; temp2 = 0; temp3 = 0;
	}
};
#endif

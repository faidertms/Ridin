#ifndef __Carro3_H__
#define __Carro3_H__
#include <SDL.h>
#include <SDL_image.h>
#include <string>

class carrovermelho {
private:
	double frenagem3 = 0.02;
	double aceleracao3 = 0.06;
	double re3 = 0.2; // como a ré não foi implementado perfeitamente , ela assume um valor fixo pra cada carro
	char *nome[30];
public:
	double getacel3(){
		return aceleracao3;
	}
	double getfren3(){
		return frenagem3;
	}
	double getre3(){
		return re3;
	}
};
#endif
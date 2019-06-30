#ifndef __Carro_H__
#define __Carro_H__
#include <stdio.h>
class carroamarelo{
private:
	double frenagem1 = 0.06;
	double aceleracao1 = 0.02;
	double re1 = 0.6; // como a ré não foi implementado perfeitamente , ela assume um valor fixo pra cada carro
	char *nome[30];
public:
	double getacel1(){
		return aceleracao1;
	}
	double getfren1(){
		return frenagem1;
	}
	double getre1(){
		return re1;
	}
};

#endif
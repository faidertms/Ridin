#ifndef __Carro2_H__
#define __Carro2_H__
#include <stdio.h>
class carroazul {
private:
	double frenagem2 = 0.04;
	double aceleracao2 = 0.04;
	double re2 = 0.4; // como a ré não foi implementado perfeitamente , ela assume um valor fixo pra cada carro
public:
	double getacel2(){
		return aceleracao2;
	}
	double getfren2(){
		return frenagem2;
	}
	double getre2(){
		return re2;
	}
};
#endif
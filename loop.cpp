#include "estados.h"
#include <math.h>

void estados::Loop() {
	// Movimento carro 2
	//----------------------------------------------
	vely += sin(angulo2*M_PI / 180.0) * velocidade;
	velx += cos(angulo2*M_PI / 180.0) * velocidade;
	//----------------------------------------------
	// Momento frenagem
	//---------------------------------------------------------------------------------
	if (velocidade > 0){                              // para que ocorra a frenagem
		velocidade = velocidade - fren;
	}
	if (velocidade <= 0){            // para velocidade nao ficar negativa e bugar o movimento
		velocidade = 0;
	}


	if (MoveUp){                               // t é a constante de aceleraçao do carro
		aceleracao = (aceleracao + acc);
		velocidade =aceleracao;                 // velocidade = igual velocidade inicial
	}

	if (aceleracao >= 6){  // limite da aceleraçao que consequentemente da limite a velocidade
		aceleracao = 6;
	}
	if (MoveDown){
		aceleracao = 1;
		vely -= sin(angulo2*M_PI / 180.0) * re1;
		velx -= cos(angulo2*M_PI / 180.0) * re1;
	}

	if (MoveLeft){// angulo de rotaçao do sprite do carro
		angulo2 -= 3;
	}
	if (MoveRight){ // angulo de rotaçao do sprite do carro
		angulo2 += 3;
	}
	if (angulo2 >= 360){ // verifica se o angulo não passou de 360
		angulo2 -= 360;
	}
	if (angulo2 <= -360){ // verifica se o angulo não passou de 360
		angulo2 += 360;
	}


	//------------------------------Movimento carro 2---------------------------------------------------
	if (velo > 0){       // t é a constante de aceleraçao do carro
		velo = velo - fren2;
	}
	if (velo <= 0){     // para velocidade nao ficar negativa e bugar o movimento
		velo = 0;
	}
	//------------------------------------------------------------------------------------------------
	y2 += sin(angulo*M_PI / 180.0) * velo;
	x2 += cos(angulo*M_PI / 180.0) * velo;
	//------------------------------------------------------------------------------------------------
	if (MoveUp2){                            // acc2 é a constante de aceleraçao do carro
	acel = (acel + acc2);
	velo = acel;        // velocidade = igual velocidade inicial + acel
	}

	if (MoveDown2){
	y2 -= sin(angulo*M_PI / 180.0) * re2;
	x2 -= cos(angulo*M_PI / 180.0) * re2;
	}

	if (acel >= 6){ // limite da aceleraçao que consequentemente da limite a velocidade
		acel = 6;
	}

	if (MoveLeft2){ // angulo de rotaçao do sprite do carro
		angulo -= 3;
	}
	if (MoveRight2){// angulo de rotaçao do sprite do carro
	    angulo += 3;
	}
	if (angulo >= 360){ // verifica se o angulo não passou de 360
		angulo -= 360;
				}
	if (angulo <= -360){ // verifica se o angulo não passou de 360
		angulo += 360;
	}

}
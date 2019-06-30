#ifndef _estados_H_
#define _estados_H_

#include <SDL.h>
#include "Textura.h"
#include <iostream>
#include "Carro.h"
#include "Carro2.h"
#include "Carro3.h"
#include "Player.h"
#include "Player2.h"
#include "rects.h"
#include "tempo.h"

class estados : public rect{
private:
	SDL_Event event;
	SDL_Renderer* render;
	SDL_Window * tela;

	// objetos carro
	carroamarelo carro1;
	carroazul carro2;
	carrovermelho carro3;

	// objetos player
	player playerr;
	player22 playerr2;

	// objetos textura

	Texture Carro1; // textura carro 1
	Texture Carro2; // textura carro 2
	Texture Cenario;// textura cenario
	Texture nome; // textura do nome player1
	Texture nome2;// textura do nome player2
	Texture tempoh;// textura do tempo
	Texture lapa; // textura do Texto que contem o numero de voltas
	Texture lapa2;// textura do Texto que contem o numero de voltas

	// obejtos tempo
	tempo tempoclass;

	// string (la e lap indica o valor do numero de voltas)
	std::string tempo;// tempo em modo caracteres
	std::string lap;
	std::string la;
	std::string hud2 = "Lap: ";
	std::string hud3= "Lap: ";


	int l = 0, l1 = 0; // Variaveis para contabilidade do lap
	double x2 = 510, y2 = 71, velx = 510, vely = 133, velocidade = 0, aceleracao = 0, velo = 0, acel = 0; // variaveis posição , velocidade e "aceleraçao"
	double acc, acc2, fren, fren2,re2,re1;  // variaveis com valor da aceleraçao,frenagem e ré de cada carro 
	float angulo = 0, angulo2 = 0; // angulo da textura carro
	int w = 27, h = 19, w2 = 27, h2 = 19, carro, restart; // variavel com dimensao das textura carro e variaveis para os menu de opção

	// variavel de loop
	bool running = false;
	// variaveis de movimento
	bool MoveRight = false;
	bool MoveLeft = false;
	bool MoveUp = false;
	bool MoveDown = false;
	bool MoveRight2 = false;
	bool MoveLeft2 = false;
	bool MoveUp2 = false;
	bool MoveDown2 = false;
	// variaveis para controlar os laps, atraves de checkpoints
	bool checkpoint1=false;
	bool checkpoint0=false;
	bool checkpoint2=false;
	bool checkpoint3 = false;
	bool checkpoint4 = false;
	bool checkpoint5 = false;

public:

	estados(); // construtor

	int OnExecute(); // executa o jogo

	bool Init(); // inicia as bibliotecas, textura e etc

	void resetar(); // reseta os estatos utilizados

	void interface(); // interface com pedido de nome e escolher carro

	void OnEvent(); // evento do jogo

	void Loop(); // verifica o evento ocorrido e gera movimento

	void colisao(); // verifica se o rect carro 1 colide com rects do mapa

	void colisao2(); // verifica se o rect carro 2 colide com rects do mapa

	void Render(); // renderiza todo processo feito

};

#endif
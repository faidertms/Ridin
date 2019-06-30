#include "estados.h"
void estados::resetar(){
	// reseta todos os estatos do jogo para padrão
	// antes ele pergunta
	tempoclass.resetar(); // reseta as variaveis  do tempo
	std::cout << "Gostaria de jogar Denovo ? se sim digite 1 caso nao 0: \n";
	std::cin >> restart;
	switch (restart){
	case 1: MoveRight = false;  MoveLeft = false; MoveUp = false; MoveDown = false; MoveRight2 = false; MoveLeft2 = false; MoveUp2 = false; MoveDown2 = false; checkpoint0 = false;	checkpoint3 = false; checkpoint4 = false; checkpoint5 = false; checkpoint1 = false; checkpoint2 = false; l = 0, l1 = 0, x2 = 510, y2 = 71, velx = 510, vely = 133, velocidade = 0, velo = 0, angulo = 0, angulo2 = 0, aceleracao = 0, acel = 0; break; // zera tudo para o começo , criando uma nova partida
	case 0: running = false;  break; // caso não queria, jogo é fechado
	}
	tempoclass.settemp2(); // calcula o tempo perdido no restart
}
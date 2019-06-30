#include "estados.h"
#include "SDL_ttf.h"
void estados::Render() {

	//------------------------carregamento de textura lap-------------------------------------------------------
	
	lap = std::to_string(l);// Transforma int em string
	hud3.insert(5,lap); // insere o numero de voltas ao lado de Lap:
	hud3.erase(6);// para que não fique aparecendo mais de 1 numero direto , apartir da linha 6 tudo é apagado
	lapa.loadFromRenderedText(hud3, render);//cria textura do texto lap

	//----------------------------------------------------------------------------------------------------------

	la = std::to_string(l1);// Transforma int em string
	hud2.insert(5, la); // insere o numero de voltas ao lado de Lap:
	hud2.erase(6);// para que não fique aparecendo mais de 1 numero direto , apartir da linha 6 tudo é apagado
	lapa2.loadFromRenderedText(hud2, render);//cria textura do texto lap

	//--------------------------------------------- tempo-------------------------------------------------------
	 // calcula o tempo de inicio, diminui o tempo real do inicio da biblioteca sdl menos o tempo gasto com interface ,carregamento de textura e restart, que da o tempo certo no jogo
	tempo = std::to_string(tempoclass.calculartempo()); // transforma uma variavel int para string("char")
	tempoh.loadFromRenderedText(tempo, render); // cria textura do tempo

	//------------------------------------- renderizando tudo---------------------------------------------------

	Cenario.Render(0, 0, 1280, 1024);//x e y do destination é a origem e o w , h são redimensao
	nome.Render(2, 6);  // renderizando nome do player 1  na posicao x e y
	nome2.Render(1097, 6);// renderizando nome do player 2 na posicao x e y
	lapa2.Render(1200, 36);// renderizando o numero de voltas na posicao x e y
	lapa.Render(5, 38); // renderizando o numero de voltas na posicao x e y
	tempoh.Render(569, 6); // rederizando o tempo em segundos na posicao x e y

	Carro1.Render(x2, y2, w, h, NULL, NULL, 27, 19, angulo, SDL_FLIP_NONE); //x2 e y2 são os movimentos do carro, w e h tamanho da imagem
	Carro2.Render(velx, vely, w2, h2, NULL, NULL, 27, 19, angulo2, SDL_FLIP_NONE);//velx e vely são os movimentos do carro, w2 e h2 tamanho da imagem

	SDL_RenderPresent(render); // faz aparecer todas as imagem no windown

}
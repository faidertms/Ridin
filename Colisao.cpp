#include "estados.h"
void estados::colisao() {

	// Verifica os contato do rect carro 1 com o rects colisão, caso ocorra , aceleracao e velocidade é reduzida a 0.

	if (velx	<	col1.x + col1.w 	&& velx + w2	> 	col1.x 		&& vely		<	col1.y + col1.h 	&& vely + h2	>	col1.y){
		vely = (vely + 4);	aceleracao = 0; velocidade = 0;
	}
	if (velx	<	tego.x + tego.w 	&& velx + w2	> 	tego.x 		&& vely		<	tego.y + tego.h 	&& vely + h2	>	tego.y){
		vely = (vely + 4); aceleracao = 0; velocidade = 0;
	}
	if (velx	<	col2.x + col2.w 	&& velx + w2	> 	col2.x 		&& vely		<	col2.y + col2.h 	&& vely + h2	>	col2.y){
		vely = (vely - 4); velocidade = 0; aceleracao=0;
	}
	if (velx	<	col3.x + col3.w 	&& velx + w2	> 	col3.x 		&& vely		<	col3.y + col3.h 	&& vely + h2	>	col3.y){
		vely = (vely - 4); velocidade = 0; aceleracao=0;
	}
	if (velx	<	col4.x + col4.w 	&& velx + w2	> 	col4.x 		&& vely		<	col4.y + col4.h 	&& vely + h2	>	col4.y){
		vely = (vely - 4); velocidade = 0; aceleracao=0;
	}
	if (velx	<	col5.x + col5.w 	&& velx + w2	> 	col5.x 		&& vely		<	col5.y + col5.h 	&& vely + h2	>	col5.y){
		vely = (vely - 4); velocidade = 0; aceleracao=0;
	}
	if (velx	<	col6.x + col6.w 	&& velx + w2	> 	col6.x 		&& vely		<	col6.y + col6.h 	&& vely + h2	>	col6.y){
		vely = (vely + 8); velocidade = 0; aceleracao=0;
	}
	if (velx	<	col7.x + col7.w 	&& velx + w2	> 	col7.x 		&& vely		<	col7.y + col7.h 	&& vely + h2	>	col7.y){
		vely = (vely - 10); velocidade = 0; aceleracao=0;
	}
	if (velx	<	col8.x + col8.w 	&& velx + w2	> 	col8.x 		&& vely		<	col8.y + col8.h 	&& vely + h2	>	col8.y){
		vely = (vely + 4); velocidade = 0; aceleracao=0;
	}
	if (velx	<	col9.x + col9.w 	&& velx + w2	> 	col9.x 		&& vely		<	col9.y + col9.h 	&& vely + h2	>	col9.y){
		velx = (velx + 4); velocidade = 0; aceleracao=0;
	}
	if (velx	<	col10.x + col10.w 	&& velx + w2	> 	col10.x 		&& vely		<	col10.y + col10.h 	&& vely + h2	>	col10.y){
		velx = (velx + 4); velocidade = 0; aceleracao=0;
	}
	if (velx	<	col11.x + col11.w 	&& velx + w2	> 	col11.x 		&& vely		<	col11.y + col11.h 	&& vely + h2	>	col11.y){
		velx = (velx + 4); velocidade = 0; aceleracao=0;
	}
	if (velx	<	col12.x + col12.w 	&& velx + w2	> 	col12.x 		&& vely		<	col12.y + col12.h 	&& vely + h2	>	col12.y){
		velx = (velx + 4); velocidade = 0; aceleracao=0;
	}
	if (velx	<	col13.x + col13.w 	&& velx + w2	> 	col13.x 		&& vely		<	col13.y + col13.h 	&& vely + h2	>	col13.y){
		velx = (velx + 4); velocidade = 0; aceleracao=0;
	}
	if (velx	<	col14.x + col14.w 	&& velx + w2	> 	col14.x 		&& vely		<	col14.y + col14.h 	&& vely + h2	>	col14.y){
		velx = (velx - 4); velocidade = 0; aceleracao=0;
	}
	if (velx	<	col15.x + col15.w 	&& velx + w2	> 	col15.x 		&& vely		<	col15.y + col15.h 	&& vely + h2	>	col15.y){
		velx = (velx - 4); velocidade = 0; aceleracao=0;
	}
	if (velx	<	col16.x + col16.w 	&& velx + w2	> 	col16.x 		&& vely		<	col16.y + col16.h 	&& vely + h2	>	col16.y){
		velx = (velx - 4); velocidade = 0; aceleracao=0;
	}
	if (velx	<	col17.x + col17.w 	&& velx + w2	> 	col17.x 		&& vely		<	col17.y + col17.h 	&& vely + h2	>	col17.y){
		vely = (vely + 4); velocidade = 0; aceleracao = 0;
	}



	//----------------------------------------------Checkpoints----------------------------------------------------------------------------------------------
	// Criado 3 rect que são chamado checkpoint para que verifique o trajeto do carro e possa contabilizar o lap, consequentemente quem ganha


	if (velx	<	lap1.x + lap1.w 	&& velx + w2	> 	lap1.x 		&& vely		<	lap1.y + lap1.h 	&& vely + h2	>	lap1.y){
		checkpoint0 = true;
	}
	if (velx	<	lap2.x + lap2.w 	&& velx + w2	> 	lap2.x 		&& vely		<	lap2.y + lap2.h 	&& vely + h2	>	lap2.y){
		checkpoint2 = true;
	}
	if (velx	<	lap3.x + lap3.w 	&& velx + w2	> 	lap3.x 		&& vely		<	lap3.y + lap3.h 	&& vely + h2	>	lap3.y){
		checkpoint1 = true;
	}

	if (checkpoint0 && checkpoint1 && checkpoint2){           //caso as 3 variaveis sejam verdadeiras,será contabilizada a volta
		l = l + 1;
		checkpoint0 = false;
		checkpoint1 = false;
		checkpoint2 = false;
	
	}
	if (checkpoint0){                      //Verifica se a linha de chegada é false para que não haja contabilidade errada no numero de laps
		checkpoint0 = false;
	}
	}
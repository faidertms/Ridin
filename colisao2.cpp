#include "estados.h"
void estados::colisao2() {

	// Verifica os contato do rect carro 2 com o rects colis�o, caso ocorra , aceleracao � reduzida a 0.

	if (x2	<	col1.x + col1.w 	&& x2 + w	> 	col1.x 		&& y2		<	col1.y + col1.h 	&& y2 + h	>	col1.y){
		y2 = (y2 + 4);	acel = 0; velo = 0;
	}
	if (x2	<	tego.x + tego.w 	&& x2 + w	> 	tego.x 		&& y2		<	tego.y + tego.h 	&& y2 + h	>	tego.y){
		y2 = (y2 + 4); acel = 0; velo = 0;
	}
	if (x2	<	col2.x + col2.w 	&& x2 + w	> 	col2.x 		&& y2		<	col2.y + col2.h 	&& y2 + h	>	col2.y){
		y2 = (y2 - 4); velo = 0; acel = 0;
	}
	if (x2	<	col3.x + col3.w 	&& x2 + w	> 	col3.x 		&& y2		<	col3.y + col3.h 	&& y2 + h	>	col3.y){
		y2 = (y2 - 4); velo = 0; acel = 0;
	}
	if (x2	<	col4.x + col4.w 	&& x2 + w	> 	col4.x 		&& y2		<	col4.y + col4.h 	&& y2 + h	>	col4.y){
		y2 = (y2 - 4); velo = 0; acel = 0;
	}
	if (x2	<	col5.x + col5.w 	&& x2 + w	> 	col5.x 		&& y2		<	col5.y + col5.h 	&& y2 + h	>	col5.y){
		y2 = (y2 - 4); velo = 0; acel = 0;
	}
	if (x2	<	col6.x + col6.w 	&& x2 + w	> 	col6.x 		&& y2		<	col6.y + col6.h 	&& y2 + h	>	col6.y){
		y2 = (y2 + 8); velo = 0; acel = 0;
	}
	if (x2	<	col7.x + col7.w 	&& x2 + w	> 	col7.x 		&& y2		<	col7.y + col7.h 	&& y2 + h	>	col7.y){
		y2 = (y2 - 10); velo = 0; acel = 0;
	}
	if (x2	<	col8.x + col8.w 	&& x2 + w	> 	col8.x 		&& y2		<	col8.y + col8.h 	&& y2 + h	>	col8.y){
		y2 = (y2 + 4); velo = 0; acel = 0;
	}
	if (x2	<	col9.x + col9.w 	&& x2 + w	> 	col9.x 		&& y2		<	col9.y + col9.h 	&& y2 + h	>	col9.y){
		x2 = (x2 + 4); velo = 0; acel = 0;
	}
	if (x2	<	col10.x + col10.w 	&& x2 + w	> 	col10.x 		&& y2		<	col10.y + col10.h 	&& y2 + h	>	col10.y){
		x2 = (x2 + 4); velo = 0; acel = 0;
	}
	if (x2	<	col11.x + col11.w 	&& x2 + w	> 	col11.x 		&& y2		<	col11.y + col11.h 	&& y2 + h	>	col11.y){
		x2 = (x2 + 4); velo = 0; acel = 0;
	}
	if (x2	<	col12.x + col12.w 	&& x2 + w	> 	col12.x 		&& y2		<	col12.y + col12.h 	&& y2 + h	>	col12.y){
		x2 = (x2 + 4); velo = 0; acel = 0;
	}
	if (x2	<	col13.x + col13.w 	&& x2 + w	> 	col13.x 		&& y2		<	col13.y + col13.h 	&& y2 + h	>	col13.y){
		x2 = (x2 + 4); velo = 0; acel = 0;
	}
	if (x2	<	col14.x + col14.w 	&& x2 + w	> 	col14.x 		&& y2		<	col14.y + col14.h 	&& y2 + h	>	col14.y){
		x2 = (x2 - 4); velo = 0; acel = 0;
	}
	if (x2	<	col15.x + col15.w 	&& x2 + w	> 	col15.x 		&& y2		<	col15.y + col15.h 	&& y2 + h	>	col15.y){
		x2 = (x2 - 4); velo = 0; acel = 0;
	}
	if (x2	<	col16.x + col16.w 	&& x2 + w	> 	col16.x 		&& y2		<	col16.y + col16.h 	&& y2 + h	>	col16.y){
		x2 = (x2 - 4); velo = 0; acel = 0;
	}
	if (x2	<	col17.x + col17.w 	&& x2 + w	> 	col17.x 		&& y2		<	col17.y + col17.h 	&& y2 + h	>	col17.y){
		y2 = (y2 + 4); velo = 0; acel = 0;
	}



	//----------------------------------------------Checkpoints----------------------------------------------------------------------------------------------

	// Criado 3 rect que s�o chamado checkpoint para que verifique o trajeto do carro e possa contabilizar o lap, consequentemente quem ganha

	if (x2	<	lap4.x + lap4.w 	&& x2 + w	> 	lap4.x 		&& y2		<	lap4.y + lap4.h 	&& y2 + h	>	lap4.y){
		checkpoint3 = true;
	}
	if (x2	<	lap5.x + lap5.w 	&& x2 + w	> 	lap5.x 		&& y2		<	lap5.y + lap5.h 	&& y2 + h	>	lap5.y){
		checkpoint5 = true;
	}
	if (x2	<	lap6.x + lap6.w 	&& x2 + w	> 	lap6.x 		&& y2		<	lap6.y + lap6.h 	&& y2 + h	>	lap6.y){
		checkpoint4 = true;
	}

	if (checkpoint3 && checkpoint4 && checkpoint5){           //caso as 3 variaveis sejam verdadeiras,ser� contabilizada a volta
		l1 = l1 + 1;
		checkpoint3 = false;
		checkpoint4 = false;
		checkpoint5 = false;

	}
	if (checkpoint3){                      //Verifica se a linha de chegada � false para que n�o haja contabilidade errada no numero de laps
		checkpoint3 = false;
	}
}
#ifndef _rects_H_
#define _rects_H_

#include <SDL.h>
class rect {
protected:	

	//Colisao
	SDL_Rect tego ;
	SDL_Rect col1 ;
	SDL_Rect col2 ;
	SDL_Rect col3 ;
	SDL_Rect col4 ;
	SDL_Rect col5 ;
	SDL_Rect col6 ;
	SDL_Rect col7 ;
	SDL_Rect col8 ;
	SDL_Rect col9 ;
	SDL_Rect col10 ;
	SDL_Rect col11 ;
	SDL_Rect col12 ;
	SDL_Rect col13 ;
	SDL_Rect col14 ;
	SDL_Rect col15 ;
	SDL_Rect col16;
	SDL_Rect col17;



	//Checkpoints
	SDL_Rect lap1;
	SDL_Rect lap2;
	SDL_Rect lap3;
	SDL_Rect lap4;
	SDL_Rect lap5;
	SDL_Rect lap6;



public:
	rect(); //declarar os rects
};

#endif

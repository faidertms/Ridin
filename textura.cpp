#include "Textura.h"

//==============================================================================
Texture::Texture() {
}
//------------------------------------------------------------------------------
Texture::~Texture() {
	if (SDLTexture) {
		SDL_DestroyTexture(SDLTexture);
		SDLTexture = NULL;
	}
}
//==============================================================================
bool Texture::Load(SDL_Renderer* Renderer, std::string Filename) {
	// destruir antiga textura para não ocorrer Memory leak
	SDL_DestroyTexture(SDLTexture);
	SDLTexture = NULL;
	Width = 0;
	Height = 0;
    //---------------------------------------------------------
	if (Renderer == NULL) {
		printf("Render incorreto");
		return false;
	}
	this->Renderer = Renderer;
	this->Filename = Filename;
	SDL_Surface* TempSurface = IMG_Load(Filename.c_str());
	if (TempSurface == NULL) {
		printf("Imagem Nao carregada : %s : %s", Filename.c_str(), IMG_GetError());
		return false;
	}
	//criar textura apartir da surface
	if ((SDLTexture = SDL_CreateTextureFromSurface(Renderer, TempSurface)) == NULL) {
		printf("Nao foi possivel criar textura : %s : %s", Filename.c_str(), IMG_GetError());
		return false;
	}
	// adquirir as dimensões
	SDL_QueryTexture(SDLTexture, NULL, NULL, &Width, &Height);
	//deletar todo arquivo desnecessario utilizado
	SDL_FreeSurface(TempSurface);
	SDL_RenderClear(Renderer);
	return true;
}

bool Texture::loadFromRenderedText(std::string textureText, SDL_Renderer* Renderer){
	// destruir antiga textura para não ocorrer Memory leak
	SDL_DestroyTexture(SDLTexture);
	SDLTexture = NULL;
	Width = 0;
	Height = 0;
	//---------------------------------------------------------
	// declarando a cor utilizada(branca)
	SDL_Color textColor = { 255, 255, 255 };

	this->Renderer = Renderer;
	this->textureText = textureText;
	if (Renderer == NULL) {
		printf("Render incorreto");
		return false;
	}
	font = TTF_OpenFont("menu/menu.ttf", 18);
	if (font == NULL)
	{
		printf("Font TTF Nao carregada: %s\n %s", TTF_GetError(), textureText.c_str());

	}
		SDL_Surface* TempSurface = TTF_RenderText_Solid(font, textureText.c_str(), textColor);
		if (TempSurface == NULL)
		{
			printf("nao e possivel renderizar o texto: %s\n", TTF_GetError());
		}

			//criar textura apartir da surface
			SDLTexture = SDL_CreateTextureFromSurface(Renderer, TempSurface);
			if (SDLTexture == NULL)
			{
				printf("Nao foi possivel criar textura do texto : %s\n", SDL_GetError());
			}
			// adquirir as dimensões
			SDL_QueryTexture(SDLTexture, NULL, NULL, &Width, &Height);
			
			//deletar todo arquivo desnecessario utilizado
			SDL_FreeSurface(TempSurface);
			TTF_CloseFont(font);
			SDL_RenderClear(Renderer);
		
	return true;
}
//------------------------------------------------------------------------------
void Texture::Render(int X, int Y) {
	Render(X, Y, Width, Height);
}
//------------------------------------------------------------------------------
void Texture::Render(int X, int Y, int Width, int Height) {
	SDL_Rect Destination = { X, Y, Width, Height };
	SDL_RenderCopy(Renderer, SDLTexture, NULL, &Destination);
}
//------------------------------------------------------------------------------
void Texture::Render(double X, double Y, double Width, double Height, int SX, int SY, int SWidth, int SHeight, float angulo, SDL_RendererFlip flipa) {
	SDL_Rect Source = { SX, SY, SWidth, SHeight };
	SDL_Rect Destination = { X, Y, Width, Height };
	SDL_RenderCopyEx(Renderer, SDLTexture, &Source, &Destination,angulo,NULL,flipa);
}
//------------------------------------------------------------------------------

//-------------------------------------------------------------------------------
int Texture::GetWidth() { return Width; }
int Texture::GetHeight() { return Height; }
	
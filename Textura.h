#ifndef __TEXTURE_H__
#define __TEXTURE_H__
#include <SDL.h>
#include <SDL_image.h>
#include <string>
#include "SDL_ttf.h"
class Texture {
private:
	std::string Filename;
	int Width = 0;
	int Height = 0;
	SDL_Renderer* Renderer = NULL;
	SDL_Texture* SDLTexture = NULL;
	std::string textureText;
	TTF_Font *font = NULL;
public:
	Texture();
	~Texture();
	bool Load(SDL_Renderer* Renderer, std::string Filename);
	void Render(int X, int Y);
	void Render(int X, int Y, int Width, int Height);
	void Render(double X, double Y, double Width, double Height, int SX, int SY, int SWidth, int SHeight, float angulo, SDL_RendererFlip flipa);
	bool Texture::loadFromRenderedText(std::string textureText, SDL_Renderer* Renderer);
	int GetWidth();
	int GetHeight();
};

#endif
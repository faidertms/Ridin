#include "estados.h"

void estados::OnCleanup() {
	Carro1.~Texture();
	Carro2.~Texture();
}
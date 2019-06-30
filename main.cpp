#include "estados.h"


estados::estados() {
	running = true;
}

int estados::OnExecute() {
	if (Init() == false) {
		return -1;
	}
	interface();
	
		//Loop do jogo
		while (running)
		{
			if ((3>l)&&(l1<3)){ //condição criada para verificar quem ganha, e fazer o 
			//chamando os metodos da classe estado
			OnEvent();
			Loop();
			colisao();
			colisao2();
			Render();
		}
	else{
		resetar();
		}
	SDL_Delay(10);
	}
	return 0;
}

int main(int argc, char* argv[]) {
	estados theApp;
    return theApp.OnExecute();
}
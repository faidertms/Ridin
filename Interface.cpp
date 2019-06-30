#include "estados.h"
#include "SDL_ttf.h"
using namespace std;
void estados::interface(){
	int check=0; // checar as ocorrencia
	//------------------------Pedir e salvar os nomes dos jogadores--------------------------------------------
	    playerr.setnome();
	    playerr2.setnome();

    //------------------------------Pedir e salvar os carros escolhidos----------------------------------------
	// Foi feito um switch e condiçoes, para que não seja preciso criar linhas de carregamento de texture,colisão e eventos desnecessarios para um carro 3. Apartir daqui utilizo da iostream pois será preciso utilizar string.
	    
	    playerr.getnome();
		cout << "\n Carro Amarelo N-1  Aceleracao 5m/s  Frenagem 20m/s \n ";
		cout << "Carro Azul N-2     Aceleracao 10m/s  Frenagem 10m/s \n ";
		cout << "Carro Vermelho N-3  Aceleracao 20m/s  Frenagem 5m/s \n ";
		cout << "escolha o carro pelo numero: ";
		cin >> carro;

		switch (carro){
		case 1:Carro2.Load(render, "carroamarelo.png"); acc = carro1.getacel1(); fren = carro1.getfren1(); re1 = carro1.getre1(); check = 1; break;
		case 2:Carro2.Load(render, "carroazul.png"); acc = carro2.getacel2(); fren = carro2.getfren2(); re1 = carro2.getre2(); check = 2; break;
		case 3:Carro2.Load(render, "carrovermelho.png"); acc = carro3.getacel3(); fren = carro3.getfren3(); re1 = carro3.getre3(); check = 3;  break;
		default:cout << "Carro Errado \n"; Carro2.Load(render, "carroazul.png"); acc = carro2.getacel2(); fren = carro2.getfren2(); re1 = carro2.getre2(); check = 2; break; // caso erre o numero do carro de padrão será o carro azul
		}

		cout << check;

		if (check == 1){
			
			playerr2.getnome();
			cout << "\n Carro Azul N-2     Aceleracao 10m/s  Frenagem 10m/s \n ";
			cout << "Carro Vermelho N-3  Aceleracao 20m/s  Frenagem 5m/s \n ";
			cout << "escolha o carro pelo numero: ";
			cin >> carro;
			switch (carro){
			case 2:Carro1.Load(render, "carroazul.png"); acc2 = carro2.getacel2(); fren2 = carro2.getfren2(); re2 = carro2.getre2(); break;
			case 3:Carro1.Load(render, "carrovermelho.png"); acc2 = carro3.getacel3(); fren2 = carro3.getacel3(); re2 = carro3.getre3(); break;
			default:cout << "Carro Errado \n"; Carro1.Load(render, "carrozul.png"); acc2 = carro2.getacel2(); fren2 = carro2.getfren2(); re2 = carro2.getre2(); break; // caso erre o numero do carro de padrão será o carro azul
			}
		}else if (check == 2){
			
			playerr2.getnome();
			cout << "\n Carro Amarelo N-1  Aceleracao 5m/s  Frenagem 20m/s \n ";
			cout << "Carro Vermelho N-3  Aceleracao 20m/s  Frenagem 5m/s \n ";
			cout << "escolha o carro pelo numero: ";
			cin >> carro;
			switch (carro){
			case 1:Carro1.Load(render, "carroamarelo.png"); acc2 = carro1.getacel1();; fren2 = carro1.getfren1(); re2 = carro1.getre1(); break;
			case 3:Carro1.Load(render, "carrovermelho.png"); acc2 = carro3.getacel3(); fren2 = carro3.getacel3(); re2 = carro3.getre3(); break;
			default:cout << "Carro Errado \n"; Carro1.Load(render, "carroamarelo.png"); acc2 = carro1.getacel1();; fren2 = carro1.getfren1(); re2 = carro1.getre1(); break; // caso erre o carro padrão será o amarelo
			}
		}else{
			
			playerr2.getnome();
			cout << "\n Carro Amarelo N-1  Aceleracao 5m/s  Frenagem 20m/s \n ";
			cout << "Carro Azul N-2     Aceleracao 10m/s  Frenagem 10m/s \n ";
			cout << "escolha o carro pelo numero: ";
			cin >> carro;
			switch (carro){
			case 1:Carro1.Load(render, "carroamarelo.png"); acc2 = carro1.getacel1();; fren2 = carro1.getfren1(); re2 = carro1.getre1(); break;
			case 2:Carro1.Load(render, "carroazul.png"); acc2 = carro2.getacel2(); fren2 = carro2.getfren2(); re2 = carro2.getre2(); break;
			default:cout << "Carro Errado \n"; Carro1.Load(render, "carrozul.png");  acc2 = carro2.getacel2(); fren2 = carro2.getfren2(); re2 = carro2.getre2(); break; // caso erre o numero do carro de padrão será o carro azul
			}

	}
    // carregamento de texturas FIXAS, que não terá mudança
	Cenario.Load(render, "grid.png");
	nome.loadFromRenderedText(playerr.getnome1(), render);
	nome2.loadFromRenderedText(playerr2.getnome1(), render);
	tempoclass.settemp1();
}


#ifndef __Player2_H__
#define __Player2_H__
#include <iostream>
using namespace std;
class player22{
private:
	std::string player2;

public:
	void setnome(){ //modifica o nome
		cout << "Digite o Nome do 2 player: ";
		getline(cin, player2);
	}
	void getnome(){ // exibe o nome armazenado na tela
		cout << "\n\n\n Player 2:" << player2.c_str();
	}
	string getnome1(){ // tem como função retornar a string nome
		return player2;
	}
};
#endif
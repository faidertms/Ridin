#ifndef __Player_H__
#define __Player_H__
#include <iostream>
using namespace std;
class player{
private:
	std::string player1;
public:
	void setnome(){
		cout << "Digite o Nome do 1 player:  ";
		getline(cin, player1);
	}
	void getnome(){
		cout << "\n\n\n Player 1:" << player1.c_str();
	}
	string getnome1(){
		return player1;
	}
};

#endif
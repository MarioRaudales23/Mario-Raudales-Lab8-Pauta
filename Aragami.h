#pragma once
#include <string>
using std::string;
class Aragami{
	private:
		int vida;
		int niveldef;
		string tipo;
		int nivelataq;
	public:
		Aragami();
		Aragami(int,int,int);
		void setVida(int);
		int getVida();
		void setDefensa(int);
		int getDefensa();
		void setAtaque(int);
		int getAtaque();
		void setTipo();
		string getTipo();

};
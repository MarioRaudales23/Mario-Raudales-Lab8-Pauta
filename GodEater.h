#pragma once
#include "GodArc.h"
class GodEater{
	private:
		int nivel;
		int vida;
		int niveldef;
		GodArc* arma;
	public:
		GodEater();
		GodEater(int,GodArc*);
		void setVida();
		int getVida();
		void setDefensa();
		int getDefensa();
		void setNivel(int);
		int getNivel();
		GodArc* getArma();

};
#pragma once
#include "GodArc.h"
class GodEater{
	private:
		int nivel;
		int vida;
		string nombre;
		int niveldef;
		GodArc* arma;
	public:
		GodEater();
		~GodEater();
		GodEater(string,int,GodArc*);
		void setVida();
		int getVida();
		void setDefensa();
		int getDefensa();
		void setNivel(int);
		int getNivel();
		GodArc* getArma();
		string toString()const;
		void setNombre(string);
		string getNombre();

};
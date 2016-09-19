#pragma once
#include <string>
using std::string;
class GodArc{
	private:
		int ataque;
		string tipo;
	public:
		GodArc(int);
		GodArc();
		~GodArc();
		void setAtaque(int);
		int getAtaque();
		void setTipo();
		string getTipo();
		virtual string toString()const;
};
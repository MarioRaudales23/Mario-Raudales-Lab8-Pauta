#include "GodArc.h"
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

GodArc::GodArc(){
	
}

GodArc::GodArc(int atack){
	ataque = atack;
	setTipo();
}

void GodArc::setAtaque(int atack){
	ataque = atack;
}

int GodArc::getAtaque(){
	return ataque;
}

void GodArc::setTipo(){
	int elec;
	cout<<"1-Divine\n2-Blaze\n3-Freeze\n....";
	cin>>elec;
	switch(elec){
		case 1:{
			tipo = "Divine";
			break;
		}
		case 2:{
			tipo = "Blaze";
			break;
		}
		case 3:{
			tipo = "Freeze";
			break;
		}
	}
}
string GodArc::getTipo(){
	return tipo;
}
string GodArc::toString()const{
	stringstream ss;
	return ss.str();
}
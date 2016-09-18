#include "Aragami.h"
#include <string>
#include <iostream>
#include <sstream>
#include <string>
using std::stringstream;
using std::string;
using namespace std;

Aragami::Aragami(){

}

Aragami::Aragami(string nom,int life,int defense,int ataque){
	nombre = nom;
	vida = life;
	niveldef = defense;
	nivelataq = ataque;
	setTipo();
}

void Aragami::setVida(int atack){
	vida = atack;
}

int Aragami::getVida(){
	return vida;
}
void Aragami::setDefensa(int defen){
	niveldef = defen;
}

int Aragami::getDefensa(){
	return niveldef;
}
void Aragami::setAtaque(int atack){
	nivelataq = atack;
}

int Aragami::getAtaque(){
	return nivelataq;
}
void Aragami::setTipo(){
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
string Aragami::getTipo(){
	return tipo;
}
void Aragami::setNombre(string nombress){
	nombre = nombress;
}

string Aragami::getNombre(){
	return nombre;
}
string Aragami::toString()const{
	stringstream ss;
	ss<<"Aragami Nombre:"<<nombre<<" Vida: "<<vida<<" Ataque: "<<nivelataq<<" Defensa: "<<niveldef<<" Tipo: "<<tipo;
	return ss.str();
}
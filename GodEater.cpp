#include "GodArc.h"
#include "GodEater.h"
#include <string>
#include <sstream>
using std::stringstream;
#include <iostream>
using namespace std;

GodEater::GodEater(){

}
GodEater::~GodEater(){
	delete arma;
}
GodEater::GodEater(string nom,int niv,GodArc* nueva){
	nombre = nom;
	nivel = niv;
	arma = nueva;
	setVida();
	setDefensa();
}

void GodEater::setVida(){
	vida = nivel * 50;
}

int GodEater::getVida(){
	return vida;
}
void GodEater::setDefensa(){
	niveldef = nivel * 20;
}

int GodEater::getDefensa(){
	return niveldef;
}
void GodEater::setNivel(int atack){
	nivel = atack;
	setVida();
	setDefensa();
}

int GodEater::getNivel(){
	return nivel;
}

GodArc* GodEater::getArma(){
	return arma;
}
void GodEater::setNombre(string nombress){
	nombre = nombress;
}

string GodEater::getNombre(){
	return nombre;
}
string GodEater::toString()const{
	stringstream ss;
	ss<<"GodEater: Nombre: "<<nombre<<"Vida: "<<vida<<" Defensa: "<<niveldef<<" GodArc: "<<arma->toString();
	return ss.str();
}

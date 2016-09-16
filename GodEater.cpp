#include "GodArc.h"
#include "GodEater.h"
#include <string>
#include <iostream>
using namespace std;

GodEater::GodEater(){

}

GodEater::GodEater(int niv,GodArc* nueva){
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
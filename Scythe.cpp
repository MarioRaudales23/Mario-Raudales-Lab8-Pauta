#include "GodArc.h"
#include "Scythe.h"
#include <sstream>
#include <string>
using std::stringstream;
using std::string;

Scythe::Scythe():GodArc(){
	
}

Scythe::Scythe(int atack,int slach,int pspeed):GodArc(atack),slash(slach),poderspeedcut(pspeed){
	
}
void Scythe::setSlash(int atack){
	slash = atack;
}

int Scythe::getSlash(){
	return slash;
}

void Scythe::setPoderS(int atack){
	poderspeedcut = atack;
}

int Scythe::getPoderS(){
	return poderspeedcut;
}
string Scythe::toString()const{
	stringstream ss;
	ss<<"Scythe "<<GodArc::toString()<<" Nivel Slash: "<<slash<<" Poder Corte: "<<poderspeedcut;
	return ss.str();
}
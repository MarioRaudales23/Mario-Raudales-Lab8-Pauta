#include "GodArc.h"
#include "Scythe.h"

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
	
}
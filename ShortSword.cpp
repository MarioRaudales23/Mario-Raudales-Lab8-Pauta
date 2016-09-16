#include "ShortSword.h"
#include "GodArc.h"
#include <string>

ShortSword::ShortSword():GodArc(){

}

ShortSword::ShortSword(int atack,int poder,int nivel):GodArc(atack),nivelpierce(poder),poderSC(nivel){

}

void ShortSword::setPierce(int atack){
	nivelpierce = atack;
}

int ShortSword::getPierce(){
	return nivelpierce;
}

void ShortSword::setPoderSC(int atack){
	poderSC = atack;
}

int ShortSword::getPoderSC(){
	return poderSC;
}
string ShortSword::toString()const{
	
}
#include "BusterSword.h"
#include "GodArc.h"
#include <sstream>
#include <string>
using std::stringstream;
using std::string;

BusterSword::BusterSword(int atack,int cruch,int poderr):GodArc(atack),crush(cruch),poderexpl(poderr){

}
BusterSword::BusterSword():GodArc(){

}

void BusterSword::setCrush(int atack){
	crush = atack;
}

int BusterSword::getCrush(){
	return crush;
}

void BusterSword::setPoder(int atack){
	poderexpl = atack;
}

int BusterSword::getPoder(){
	return poderexpl;
}

string BusterSword::toString()const{
	stringstream ss;
	ss<<"BusterSword "<<GodArc::toString()<<" Nivel Crush: "<<crush<<" Poder Explosivo: "<<poderexpl;
	return ss.str();
}
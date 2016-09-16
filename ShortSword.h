#pragma once
#include "GodArc.h"
class ShortSword:public GodArc{
	private:
		int poderSC;
		int nivelpierce;
	public:
		ShortSword();
		ShortSword(int,int,int);
		void setPierce(int);
		int getPierce();
		void setPoderSC(int);
		int getPoderSC();
		virtual string toString()const;	
};
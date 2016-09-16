#pragma once
#include "GodArc.h"
class Scythe:public GodArc{
	private:
		int slash;
		int poderspeedcut;
	public:
		Scythe();
		Scythe(int,int,int);
		int getSlash();
		void setSlash(int);
		int getPoderS();
		void setPoderS(int);
		virtual string toString()const;
};
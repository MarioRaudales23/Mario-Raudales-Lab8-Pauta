#pragma once
#include "GodArc.h"
class BusterSword: public GodArc{
	private:
		int crush;
		int poderexpl;
	public:
		BusterSword();
		BusterSword(int,int,int);
		void setCrush(int);
		int getCrush();
		void setPoder(int);
		int getPoder();
		virtual string toString()const;
};
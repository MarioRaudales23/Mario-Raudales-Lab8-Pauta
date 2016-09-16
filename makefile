tem: main.o Aragami.o GodArc.o GodEater.o Scythe.o BusterSword.o ShortSword.o
	g++ main.o Aragami.o GodArc.o GodEater.o Scythe.o BusterSword.o ShortSword.o -o tem

main.o:	main.cpp Aragami.h GodArc.h Scythe.h BusterSword.h GodEater.h ShortSword.h
	g++ -c main.cpp

Aragami.o:	Aragami.cpp Aragami.h
	g++ -c Aragami.cpp

GodArc.o:	GodArc.cpp GodArc.h
	g++ -c GodArc.cpp

BusterSword.o:	BusterSword.cpp BusterSword.h  GodArc.h
	g++ -c BusterSword.cpp

ShortSword.o:	ShortSword.cpp ShortSword.h  GodArc.h
	g++ -c ShortSword.cpp

Scythe.o:	Scythe.cpp Scythe.h  GodArc.h
	g++ -c Scythe.cpp

GodEater.o:	GodEater.cpp GodEater.h
	g++ -c GodEater.cpp
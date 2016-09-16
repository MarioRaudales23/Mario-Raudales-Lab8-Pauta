#include "GodArc.h"
#include "GodEater.h"
#include "Aragami.h"
#include "BusterSword.h"
#include "Scythe.h"
#include "ShortSword.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;
using std::string;

int main(int argc, char const *argv[])
{
	vector<GodEater*> peleadores;
	vector<GodArc*> armas;
	vector<Aragami*> aragamis;
	int opcion = 0;
	do
	{
		cout<<"1-Gestionar GodArc\n2-Gestionar GodEater\n3-Gestionar Aragami\n4-Simulacion\n....";
		cin>>opcion;
		switch(opcion){
			case 1:{
				int submenu;
				cout<<"1-Agregar\n2-Modificar\n3-Eliminar";
				cin>>submenu;
				switch(submenu){
					case 1:{
						int subbmenu;
						cout<<"1-BusterSword\n2-Scythe\n3-Short Sword";
						cin>>subbmenu;
						int ataque;
						cout<<"Ingrese el nivel de ataque";
						cin>>ataque;
						switch(subbmenu){
							case 1:{
								int poder,especial;
								cout<<"Ingrese el nivel de Crush";
								cin>>especial;
								cout<<"Ingrese el nivel de poder explosivo";
								cin>>poder;
								armas.push_back(new BusterSword(ataque,poder,especial));
								break;
							}
							case 2:{
								int poder,especial;
								cout<<"Ingrese el nivel de Crush";
								cin>>especial;
								cout<<"Ingrese el nivel de poder explosivo";
								cin>>poder;
								armas.push_back(new Scythe(ataque,poder,especial));
								break;
							}
							case 3:{
								int poder,especial;
								cout<<"Ingrese el nivel de Crush";
								cin>>especial;
								cout<<"Ingrese el nivel de poder explosivo";
								cin>>poder;
								armas.push_back(new ShortSword(ataque,poder,especial));
								break;
							}
						}
						break;
					}
					case 2:{
						int subbmenu;
						int ataque,pos,poder;
						cout<<"1-Ataque\n2-Tipo\n3-Poder";
						cin>>subbmenu;
						cout<<"Ingese la posicion del GodArc";
						cin>>pos;
						switch(subbmenu){
							case 1:{
								cout<<"Ingrese el nuevo nivel de ataque";
								cin>>ataque;
								armas.at(pos)->setAtaque(ataque);
								break;
							}
							case 2:{
								armas.at(pos)->setTipo();
								break;
							}
							case 3:{
								cout<<"Ingrese el nuevo nivel de poder";
								cin>>poder;
								if (dynamic_cast<BusterSword*>(armas.at(pos))!= NULL)
								{
									BusterSword* temp = dynamic_cast<BusterSword*>(armas.at(pos));
									temp->setPoder(poder);
								}
								if (dynamic_cast<Scythe*>(armas.at(pos))!= NULL)
								{
									Scythe* temp = dynamic_cast<Scythe*>(armas.at(pos));
									temp ->setPoderS(poder);
								}
								if (dynamic_cast<ShortSword*>(armas.at(pos))!= NULL)
								{
									ShortSword* temp = dynamic_cast<ShortSword*>(armas.at(pos));
									temp->setPoderSC(poder);
								}
								break;
							}
							case 4:{
								cout<<"Ingrese el nuevo nivel de poder";
								cin>>poder;
								if (dynamic_cast<BusterSword*>(armas.at(pos))!= NULL)
								{
									BusterSword* temp = dynamic_cast<BusterSword*>(armas.at(pos));
									temp->setCrush(poder);
								}
								if (dynamic_cast<Scythe*>(armas.at(pos))!= NULL)
								{
									Scythe* temp = dynamic_cast<Scythe*>(armas.at(pos));
									temp ->setSlash(poder);
								}
								if (dynamic_cast<ShortSword*>(armas.at(pos))!= NULL)
								{
									ShortSword* temp = dynamic_cast<ShortSword*>(armas.at(pos));
									temp->setPierce(poder);
								}
								break;
							}
						}
						break;
					}
					case 3:{
						int pos;
						cout<<"Ingrese la Posicion: ";
						cin>>pos;
						if (pos < armas.size() && pos >= 0)
						{
							armas.erase(armas.begin() + pos);
						}
						break;
					}
				}
				break;
			}
			case 2:{
				if (armas.size() > 0)
				{
					int submenu;
					cout<<"1-Agregar\n2-Modificar\n3-Eliminar";
					cin>>submenu;
					switch(submenu){
						case 1:{
							int nivel,pos;
							cout<<"Ingrese el nivel del peleador";
							cin>>nivel;
							cout<<"Ingrese la posicion de la GodArc";
							cin>>pos;
							if (pos < armas.size() && pos >= 0)
							{
								peleadores.push_back(new GodEater(nivel,armas.at(pos)));
							}else{
								cout<<"Posicion invalida";
							}
							break;
						}
						case 2:{
							int pos,nivel;
							if (pos < peleadores.size() && pos >= 0)
							{
								cout<<"Ingrese el nuevo nivel del peleador";
								cin>>nivel;
								peleadores.at(pos)->setNivel(nivel);
							}else{
								cout<<"Posicion invalida";
							}
							break;
						}
						case 3:{
							int pos;
							cout<<"Ingrese la Posicion: ";
							cin>>pos;
							if (pos < peleadores.size() && pos >= 0)
							{
								peleadores.erase(peleadores.begin() + pos);
							}else{
								cout<<"Posicion invalida";
							}
							break;
						}
					}
				}else{
					cout<<"Se Necesita al menos un GodArc para crear un GodEater";
				}

				break;
			}
			case 3:{
				int submenu;
				cout<<"1-Agregar\n2-Modificar\n3-Eliminar";
				cin>>submenu;
				switch(submenu){
					case 1:{
						int ataque,defensa,vida;
						cout<<"Ingrese el ataque";
						cin>>ataque;
						cout<<"Ingrese la defensa";
						cin>>defensa;
						cout<<"Ingrese la vida";
						cin>>vida;
						aragamis.push_back(new Aragami(vida,defensa,ataque));
						break;
					}
					case 2:{
						int subbmenu;
						cout<<"1-Ataque\n2-Defensa\n3-Vida\n4-Tipo\n.....";
						cin>>subbmenu;
						int todo;
						switch(subbmenu){
							case 1:{
								if (aragamis.size() > 0)
								{
									int pos;
									cout<<"Ingrese la Posicion: ";
									cin>>pos;
									cout<<"Ingrese el ataque";
									cin>>todo;
									if (pos < aragamis.size() && pos >= 0)
									{
										aragamis.at(pos)->setAtaque(todo);
									}else{
										cout<<"Posicion invalida";
									}
								}
								break;
							}
							case 2:{
								if (aragamis.size() > 0)
								{
									int pos;
									cout<<"Ingrese la Posicion: ";
									cin>>pos;
									cout<<"Ingrese la defensa";
									cin>>todo;
									if (pos < aragamis.size() && pos >= 0)
									{
										aragamis.at(pos)->setDefensa(todo);
									}else{
										cout<<"Posicion invalida";
									}
								}
								break;
							}
							case 3:{
								if (aragamis.size() > 0)
								{
									int pos;
									cout<<"Ingrese la Posicion: ";
									cin>>pos;
									cout<<"Ingrese la vida";
									cin>>todo;
									if (pos < aragamis.size() && pos >= 0)
									{
										aragamis.at(pos)->setVida(todo);
									}else{
										cout<<"Posicion invalida";
									}
								}
								break;
							}
							case 4:{
								if (aragamis.size() > 0)
								{
									int pos;
									cout<<"Ingrese la Posicion: ";
									cin>>pos;
									if (pos < aragamis.size() && pos >= 0)
									{
										aragamis.at(pos)->setTipo();
									}else{
										cout<<"Posicion invalida";
									}
								}
								break;
							}
						}
						break;
					}
					case 3:{
						if (aragamis.size() > 0)
						{
							int pos;
							cout<<"Ingrese la Posicion: ";
							cin>>pos;
							if (pos < aragamis.size() && pos >= 0)
							{
								aragamis.erase(aragamis.begin() + pos);
							}else{
								cout<<"Posicion invalida";
							}
						}
						
						break;
					}
				}
				break;
			}
			case 4:{
				if (aragamis.size() > 0 && peleadores.size() > 0)
				{
					
				}
				break;
			}
		}
	} while (opcion != 5);
	return 0;
}
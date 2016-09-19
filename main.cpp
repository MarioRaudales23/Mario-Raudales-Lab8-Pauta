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
		cout<<"1-Gestionar GodArc\n2-Gestionar GodEater\n3-Gestionar Aragami\n4-Simulacion\n5-Salir\n....";
		cin>>opcion;
		switch(opcion){
			case 1:{
				int submenu;
				cout<<"1-Agregar\n2-Modificar\n3-Eliminar\n.....";
				cin>>submenu;
				switch(submenu){
					case 1:{
						int subbmenu;
						cout<<"1-BusterSword\n2-Scythe\n3-Short Sword\n....";
						cin>>subbmenu;
						int ataque;
						cout<<"Ingrese el nivel de ataque: ";
						cin>>ataque;
						switch(subbmenu){
							case 1:{
								int poder,especial;
								cout<<"Ingrese el nivel de Crush: ";
								cin>>especial;
								cout<<"Ingrese el nivel de poder explosivo: ";
								cin>>poder;
								armas.push_back(new BusterSword(ataque,poder,especial));
								break;
							}
							case 2:{
								int poder,especial;
								cout<<"Ingrese el nivel de Slash: ";
								cin>>especial;
								cout<<"Ingrese el nivel de Poder Corte Largo: ";
								cin>>poder;
								armas.push_back(new Scythe(ataque,poder,especial));
								break;
							}
							case 3:{
								int poder,especial;
								cout<<"Ingrese el nivel de Pierce: ";
								cin>>especial;
								cout<<"Ingrese el nivel de poder Speed Cut: ";
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
						cout<<"1-Ataque\n2-Tipo\n3-Poder\n4-Nivel de Habilidad\n....";
						cin>>subbmenu;
						for (int i = 0; i < armas.size(); ++i)
						{
							cout<<i<<" "<<armas.at(i)->toString()<<endl;
						}
						cout<<"Ingrese la posicion del GodArc: ";
						cin>>pos;
						switch(subbmenu){
							case 1:{
								cout<<"Ingrese el nuevo nivel de ataque: ";
								cin>>ataque;
								armas.at(pos)->setAtaque(ataque);
								break;
							}
							case 2:{
								armas.at(pos)->setTipo();
								break;
							}
							case 3:{
								cout<<"Ingrese el nuevo nivel de poder: ";
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
								cout<<"Ingrese el nuevo nivel de poder: ";
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
						for (int i = 0; i < armas.size(); ++i)
						{
							cout<<i<<" "<<armas.at(i)->toString()<<endl;
						}
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
					int submenu1;
					cout<<"1-Agregar\n2-Modificar\n3-Eliminar\n....";
					cin>>submenu1;
					switch(submenu1){
						case 1:{
							int nivel,pos;
							string nombre;
							cout<<"Ingrese Nombre: ";
							cin>>nombre;
							cout<<"Ingrese el nivel del peleador: ";
							cin>>nivel;
							for (int i = 0; i < armas.size(); ++i)
							{
								cout<<i<<" "<<armas.at(i)->toString()<<endl;
							}
							cout<<"Ingrese la posicion de la GodArc: ";
							cin>>pos;
							if (pos < armas.size() && pos >= 0)
							{
								peleadores.push_back(new GodEater(nombre,nivel,armas.at(pos)));
							}else{
								cout<<"Posicion invalida";
							}
							break;
						}
						case 2:{
							int elecion;
							cout<<"1-Nombre\n2-Nivel\n....";
							cin>>elecion;
							switch(elecion){
								case 1:{
									if (peleadores.size() > 0)
									{
										string nom;
										int pos;
										for (int i = 0; i < peleadores.size(); ++i)
										{
											cout<<i<<" "<<peleadores.at(i)->toString()<<endl;
										}
										cout<<"Ingrese la Posicion: ";
										cin>>pos;
										cout<<"Ingrese el Nombre: ";
										cin>>nom;
										if (pos < peleadores.size() && pos >= 0)
										{
											peleadores.at(pos)->setNombre(nom);
										}else{
											cout<<"Posicion invalida";
										}
									}
									break;
								}
								case 2:{
									int pos,nivel;
									for (int i = 0; i < peleadores.size(); ++i)
									{
										cout<<i<<" "<<peleadores.at(i)->toString()<<endl;
									}
									cout<<"Ingrese la Posicion: ";
									cin>>pos;
									if (pos < peleadores.size() && pos >= 0)
									{
										cout<<"Ingrese el nuevo nivel del peleador: ";
										cin>>nivel;
										peleadores.at(pos)->setNivel(nivel);
									}else{
										cout<<"Posicion invalida";
									}
									break;
								}
							}
							break;
						}
						case 3:{
							int pos;
							for (int i = 0; i < peleadores.size(); ++i)
							{
								cout<<i<<" "<<peleadores.at(i)->toString()<<endl;
							}
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
				cout<<"1-Agregar\n2-Modificar\n3-Eliminar\n....";
				cin>>submenu;
				switch(submenu){
					case 1:{
						string nombre;
						int ataque,defensa,vida;
						cout<<"Ingrese Nombre: ";
						cin>>nombre;
						cout<<"Ingrese el ataque: ";
						cin>>ataque;
						cout<<"Ingrese la defensa: ";
						cin>>defensa;
						cout<<"Ingrese la vida: ";
						cin>>vida;
						aragamis.push_back(new Aragami(nombre,vida,defensa,ataque));
						break;
					}
					case 2:{
						int subbmenu;
						cout<<"1-Ataque\n2-Defensa\n3-Vida\n4-Tipo\n5-Nombre\n.....";
						cin>>subbmenu;
						int todo;
						switch(subbmenu){
							case 1:{
								if (aragamis.size() > 0)
								{
									int pos;
									for (int i = 0; i < aragamis.size(); ++i)
									{
										cout<<i<<" "<<aragamis.at(i)->toString()<<endl;
									}
									cout<<"Ingrese la Posicion: ";
									cin>>pos;
									cout<<"Ingrese el ataque: ";
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
									for (int i = 0; i < aragamis.size(); ++i)
									{
										cout<<i<<" "<<aragamis.at(i)->toString()<<endl;
									}
									cout<<"Ingrese la Posicion: ";
									cin>>pos;
									cout<<"Ingrese la defensa: ";
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
									for (int i = 0; i < aragamis.size(); ++i)
									{
										cout<<i<<" "<<aragamis.at(i)->toString()<<endl;
									}
									cout<<"Ingrese la Posicion: ";
									cin>>pos;
									cout<<"Ingrese la vida: ";
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
									for (int i = 0; i < aragamis.size(); ++i)
									{
										cout<<i<<" "<<aragamis.at(i)->toString()<<endl;
									}
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
							}case 5:{
								if (aragamis.size() > 0)
								{
									string nom;
									int pos;
									for (int i = 0; i < aragamis.size(); ++i)
									{
										cout<<i<<" "<<aragamis.at(i)->toString()<<endl;
									}
									cout<<"Ingrese la Posicion: ";
									cin>>pos;
									cout<<"Ingrese el Nombre: ";
									cin>>nom;
									if (pos < aragamis.size() && pos >= 0)
									{
										aragamis.at(pos)->setNombre(nom);
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
							for (int i = 0; i < aragamis.size(); ++i)
							{
								cout<<i<<" "<<aragamis.at(i)->toString()<<endl;
							}
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
					int enemigo,heroe;
					Aragami* destructor;
					GodEater* salvador;
					do
					{
						for (int i = 0; i < aragamis.size(); ++i)
						{
							cout<<i<<" "<<aragamis.at(i)->toString()<<endl;
						}
						cout<<"Ingrese la posicion del aragami";
						cin>>enemigo;
					} while (enemigo < aragamis.size() && enemigo < 0);
					do
					{
						for (int i = 0; i < peleadores.size(); ++i)
						{
							cout<<i<<" "<<peleadores.at(i)->toString()<<endl;
						}
						cout<<"Ingrese la posicion del GodEater";
						cin>>heroe;
					} while (heroe < peleadores.size() && heroe < 0);
					destructor = aragamis.at(enemigo);
					salvador = peleadores.at(heroe);
					int vidaheroe,vidaenemigo;
					vidaheroe = salvador->getVida();
					vidaenemigo = destructor->getVida();
					while(vidaheroe > 0 && vidaenemigo > 0){
						if (salvador->getDefensa() > destructor->getAtaque())
						{
							cout<<"Ganador Automatico GodEater";
							break;
						}else{
							vidaheroe -= (destructor->getAtaque()-salvador->getDefensa());
							cout<<"Aragami ataco y la vida restante del GodEater es: "<<vidaheroe<<endl;
							vidaenemigo -= salvador->getArma()->getAtaque();
							cout<<"GodEater ataco y la vida restante del Aragami es: "<<vidaenemigo<<endl;
						}
					}
					if (vidaheroe > 0)
					{
						cout<<"Ganador GodEater"<<endl;
						int nivelactual = peleadores.at(heroe)->getNivel();
						peleadores.at(heroe)->setNivel(nivelactual+1);

					}else{
						cout<<"Ganador Aragami"<<endl;
					}
					delete destructor;
					delete salvador;
				}
				break;
			}
		}
	} while (opcion != 5);
	aragamis.clear();
	peleadores.clear();
	return 0;
}
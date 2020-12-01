#ifndef COCHES_H
#define COCHES_H
#include <string>
#include <iostream>
#include <sstream>
#include "Servicios.h"

using namespace std;

class Coches:public Servicios{
  private:
    string jabones; //tipo de jabon a utilizar en la carroceria dependiendo del acabado que guste el cliente
    string abrillantador; //tamaño de coche
    string lanceta; //tipo de lanceta a utilizar en la k4
  public:
    //constructores
    Coches();
    Coches(int i, string s, string h, string m,int t, int c, string ts, string ta, string jp, string a, string l);
    //getters y setters
    string get_Jabones();
    string get_Abrillantador();
    string get_Lanceta();
    void set_Jabones(string jp);
    void set_Abrillantador(string t); 
    void set_Lanceta(string ts); 
    string to_String();
};

Coches::Coches(){  //default
  Servicios();
  jabones = " ";
  abrillantador = " ";
  lanceta = " ";
}

Coches::Coches(int i, string s, string h, string m,int t, int c, string ts, string ta, string jp, string a, string l):Servicios(i,s,h,m,t,c,ts,ta),jabones(jp), abrillantador(a), lanceta(l){}

string Coches::get_Jabones(){
  return jabones;
}

string Coches::get_Abrillantador(){
  return abrillantador;
}

string Coches::get_Lanceta(){
  return lanceta;
}

void Coches::set_Jabones(string jp){
  jabones = jp;
}

void Coches::set_Abrillantador(string a){
    abrillantador = a;
}
void Coches::set_Lanceta(string l){
  lanceta = l;
}
string Coches::to_String(){
  stringstream aux;
  // agregar letreros
  aux <<"\nID:"<<idS << "\nServicio:"<<servicio<<"\nHerramienta:"<<herramienta<<"\nMateriales:"<<materiales<<"\nTiempo:"<<tiempo<<"\nCosto:"<<costo<<"\nTipo de servicio:"<<tise<<"\nTamaño"<<tamanio<<"\nJabones"<<jabones<<"\nTipo de Abrillantador"<<abrillantador<<"\nTipo de Lanceta"<<lanceta <<endl;
  return aux.str();
}
#endif

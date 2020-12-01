#ifndef TAPICERIA_H
#define TAPICERIA_H
#include <string>
#include <iostream>
#include <sstream>
#include "Servicios.h"

using namespace std;

class Tapiceria: public Servicios{
    private:
    string ttela; //tipo de tela a lavar
    string tmancha; //tipo de mancha a quitar
    string tdetergente; //tipo de desmanchador o detergente para la tela/piel a lavar
    public:
    Tapiceria();
    Tapiceria(int i,string s, string h, string m, int t, int c, string ts, string ta, string tt, string tm, string td);
    string get_Ttela();
    string get_Tmancha();
    string get_Tdetergente();
    void set_Ttela(string tt);
    void set_Tmancha(string tm);
    void set_Tdetergente(string td);
    string to_String();
};

Tapiceria::Tapiceria(){
    Servicios();
    ttela = "";
    tmancha = "";
    tdetergente = "";
}

Tapiceria::Tapiceria(int i,string s, string h, string m, int t, int c, string ts, string ta, string tt, string tm, string td):Servicios(i,s,h,m,t,c,ts,ta), ttela(tt), tmancha(tm), tdetergente(td){}

string Tapiceria::get_Ttela(){
    return ttela;
}

string Tapiceria::get_Tmancha(){
    return tmancha;
}

string Tapiceria::get_Tdetergente(){
    return tdetergente;
}

void Tapiceria::set_Ttela(string tt){
    ttela=tt;
}

void Tapiceria::set_Tmancha(string tm){
    tmancha=tm;
}

void Tapiceria::set_Tdetergente(string td){
    tdetergente=td;
}

string Tapiceria::to_String(){
  stringstream aux;
  // agregar letreros
 aux <<"ID:"<<idS << "\nServicio:"<<servicio<<"\nHerramienta:"<<herramienta<<"\nMateriales:"<<materiales<<"\nTiempo:"<<tiempo<<"\nCosto:"<<costo<<"\nTipo de servicio:"<<tise<<"\nTamaño"<<tamanio<<"\nTipo de Tela/Piel:"<<ttela<<"\nTipo de mancha"<<tmancha<<"\nTipo de de desmanchador/detergente"<<tdetergente <<endl;
  return aux.str();
}

#endif
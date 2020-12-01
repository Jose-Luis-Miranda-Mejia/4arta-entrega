#ifndef SERVICIOS_H_
#define SERVICIOS_H_
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class Servicios{
  protected:// Visibles a las clases hijas sin getter
    int idS; //ID del servicio
    string servicio; //tipo de servicio si de tapiceria o coche
    string herramienta; //herramienta o maquinaria a utilizar en el servicio
    string materiales; //materiales a ulizar como trapos 
    int tiempo; //tiempo aprox del servicio
    int costo; //costo del servicio 
    string tise; //tipo de servicio si es tapcieria podria ser lavado de sillones
    string tamanio; //tamaño del servicio
  public:
    //constructores
    Servicios();
    Servicios(int i,string s, string h, string m, int t, int c, string ts, string ta);
    //getters y setters
    int get_Ids();
    string get_Servicio();
    string get_Herramienta();
    string get_Materiales();
    int get_Tiempo();
    int get_Costo();
    string get_Tamanio();
    string get_Tise();
    void set_Ids(int i);
    void set_Servicio(string s);
    void set_Herramienta(string h);
    void set_Materiles(string m);
    void set_Tiempo(int t);
    void set_Costo(int c);
    void set_Tamanio(string ta); 
    void set_Tise(string ts); 

};

Servicios::Servicios(){  //default
  idS = 0;
  servicio = "";
  herramienta = "";
  materiales = "";
  tiempo = 0;
  costo = 0;
  tise = "";
  tamanio = "";
}
Servicios::Servicios(int i,string s, string h, string m, int t, int c, string ts, string ta):idS(i), servicio(s), herramienta(h), materiales(m), tiempo(t), costo(c), tise(ts), tamanio(ta){};

int Servicios::get_Ids(){
  return idS;
}
string Servicios::get_Servicio(){
  return servicio;
}

string Servicios::get_Herramienta(){
  return herramienta;
}

string Servicios::get_Materiales(){
  return materiales;
}

int Servicios::get_Tiempo(){
  return tiempo;
}

int Servicios::get_Costo(){
  return costo;
}

string Servicios::get_Tise(){
  return tise;  
}

string Servicios::get_Tamanio(){
  return tamanio;  
}

void Servicios::set_Ids(int i){
  idS = i;
}

void Servicios::set_Servicio(string s){
  servicio = s;
}

void Servicios::set_Herramienta(string h){
  herramienta = h;
}
void Servicios::set_Materiles(string m){
  materiales = m;
}

void Servicios::set_Tiempo(int t){
  tiempo = t;
}

void Servicios::set_Costo(int c){
  costo = c;
}

void Servicios::set_Tise(string ts){
  tise = ts;
}

void Servicios::set_Tamanio(string ta){
  tamanio = ta;
}

#endif
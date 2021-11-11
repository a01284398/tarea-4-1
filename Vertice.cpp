#include <iostream>
using namespace std;

class Vertice{
  private:
  int id;
  int dato;
  static int counter;

  public:
  Vertice(){
    dato=0;
    id=0;
  }
  Vertice(int id, int dato){
    this->dato=dato;
    this->id=id;
  }

  Vertice(int dato){
    this->dato=dato;
    int id=0;
  }

  void setId(int id){
    this-> id = id;
  }
  int getId(){
    return id;
  }
  void setDato(int dat){
    dato = dat;
  }
  int getDato(){
    return dato;
  }
};


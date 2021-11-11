#include <iostream>
#include <bits/stdc++.h>
#include "Arista.h"
using namespace std;

int main() {
  string numeros;
  int idCounter = 0;
  vector<Vertice> v;
  Vertice vert;
  vector<Arista> ar;
  Arista aris;

  cout<<"Ingresa tus numeros delimitados por comas sin espacios: "<<endl;
  cin>> numeros ;
  stringstream ss(numeros);
  
  for(int i; ss >>i;){
    vert.setDato(i);
    vert.setId(idCounter);
    
    v.push_back(vert);
    idCounter++;

    if(ss.peek()== ','){
      ss.ignore();
    }
  };

  for (size_t i = 0; i < (v.size()-1); i++){
    aris.setVi(v[i]);
    aris.setVj(v[i+1]);
    ar.push_back(aris);
  };

  for (int i = 0; i < ar.size(); i++){
    cout<<"Arista vertice prev.: "<< ar[i].getVi().getDato()<<endl;
    cout<<"Arista vertice sig.: "<< ar[i].getVj().getDato()<<endl;
  };



} 


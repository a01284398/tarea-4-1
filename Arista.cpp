#include <iostream>
#include "Vertice.h"
using namespace std;

class Arista
{
  private:
    Vertice vi;
    Vertice vj;

  public:
    void setVi(Vertice vi)
    {
      this->vi = vi;
    }

   Vertice getVi()
    {
     return vi;
    }

    void setVj(Vertice vj)
    {
      this->vj = vj;
    }

    Vertice getVj()
    {
      return vj;
   }
};

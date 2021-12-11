//serie_manager.h

#include "series.h"
#include "peliculas.h"
#include <vector>


#pragma once
class Manager : public Series
{
  protected:
    vector<Series>caps;


  public:

    void agregarCap(Series s);
    
    void printPromedioGeneral();

};

void Manager::agregarCap(Series s)
{
  caps.push_back(s);
}



void Manager::printPromedioGeneral()
{   
  double promedio = 0.0;
  int contador = 1;
    for(vector<Series>::iterator it = caps.begin(); it != caps.end(); it++)
    {
       promedio += (*it).getCalif();
       contador += 1;


    }

    promedio = promedio/contador;

   cout << "el promedio de esta serie es: "<< promedio<<endl<<endl;
 

}
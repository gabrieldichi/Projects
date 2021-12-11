//peliculas.h

#include "calificacion.h"


#pragma once
class Peliculas : public virtual Calificacion
{
  protected:
  int id;
  string nombre;
  string duracion;
  string genero; 
  Peliculas(){}

public:


Peliculas( int id, string nombre, string duracion, string genero, double calif): Calificacion(calif), id(id),nombre(nombre),duracion(duracion),genero(genero){} 

virtual int getId(){return id ;}
virtual string getNombre(){return nombre;}
virtual string getDuracion(){return duracion;}
virtual string getGenero(){return genero;}
virtual double getCalif() {return calif;}


void infoGeneral();


};
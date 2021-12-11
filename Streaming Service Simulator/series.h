//series.h

#include "peliculas.h"
#include "calificacion.h"

#pragma once
class Series : public Peliculas , public virtual Calificacion
{
protected:
  int temporadas;
  int capitulos;
  string titulo_capitulo;

  Series(){}

  public:
  

  Series(int temporada, int capitulo, string nombre_capitulo ,int Id, string nombre, string duracion,string genero, double calif) : Peliculas(Id,  nombre, duracion, genero, calif),titulo_capitulo(nombre_capitulo), capitulos(capitulo), temporadas(temporada){}



  string getTituloCapitulo(){return titulo_capitulo;}
  int getTemporada(){return temporadas;}
  int getCapitulo(){return capitulos;} 
  virtual double getCalif() {return calif;}

  void infoGeneralSeries(){cout << "el id es: "<< getId()<< endl << "el titulo de la serie es: " << getNombre() << endl<<"el capitulo se llama: "<<getTituloCapitulo() << endl<< "de la temporada: "<< getTemporada()<< endl<< "capitulo: "<< getCapitulo()<< endl <<"dura: "<<  getDuracion() << endl << "es del genero: "<< getGenero() << endl<< "tiene una calificacion de: "<<getCalif()<< endl<< endl;}



};



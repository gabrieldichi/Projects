//main.cpp

#include <iostream>
#include "calificacion.h"
#include "peliculas.h"
#include "series.h"
#include "series_manager.h"





int main() {

  //peliculas ( int id, string nombre, string duracion, string genero, double calif)
  //series (temporada,capitulo,nombre_capitulo , Id,nombre serie, duracion, genero,calif)
  
 Peliculas batman (13, "batman dark knight", "2 horas 5 minutos", "accion", 4.2);
  batman.infoGeneral();
  batman.promedio_estrellas();

 Peliculas joker (133, "joker", "2 horas ", "accion", 4.9);
 joker.infoGeneral();
 joker.promedio_estrellas();

 Peliculas avengers (189, "Endgame", "3 horas ", "accion", 4.7);
 avengers.infoGeneral();
 avengers.promedio_estrellas();

 Peliculas shrek (197, "Shrek", "1 hora 15 minutos ", "accion", 4.1);
 shrek.infoGeneral();
 shrek.promedio_estrellas();

 Peliculas padrino (97, "El padrino II", "2 horas 34 minutos ", "accion", 4.6);
 padrino.infoGeneral();
 padrino.promedio_estrellas();
 
     
 Series peaky( 3, 5, "the wedding" ,53, "peaky blinders", "45 minutos", "Accion", 3.2);
  peaky.infoGeneralSeries();


 Series peaky2 ( 3, 6, "mob" ,563, "peaky blinders", "45 minutos", "Accion", 3.1);
  peaky2.infoGeneralSeries();
  

 Series peaky3( 4, 1, "ariel el profesor" ,543, "peaky blinders", "45 minutos", "Accion", 3.7);
  peaky3.infoGeneralSeries();
  

// agregamos los capitulos de series a un vector
  Manager peakyBlinders;
  peakyBlinders.agregarCap(peaky);
  peakyBlinders.agregarCap(peaky2);
  peakyBlinders.agregarCap(peaky3);

  peakyBlinders.printPromedioGeneral();

   
   Series himym( 1, 1, "inicio" ,573, "How i met your mother", "20 minutos", "comedia", 4.2);
   himym.infoGeneralSeries();
   

   Series himym2( 1, 2, "brotherhood" ,574, "How i met your mother", "20 minutos", "comedia", 4.1);
   himym2.infoGeneralSeries();
   

   Series himym3( 1, 3, "playbook" ,53, "How i met your mother", "20 minutos", "comedia", 3.9);
   himym3.infoGeneralSeries();
   

  Manager how;
    how.agregarCap(himym);
    how.agregarCap(himym2);
    how.agregarCap(himym3);

    how.printPromedioGeneral();


  

}
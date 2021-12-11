//netflix.cpp

#include "calificacion.h"
#include "series.h"
#include "peliculas.h"


double Calificacion::promedio_estrellas()
{
 char prom = 's';

cout << "prsione la tecla 'c' para califcar este titulo o presione 'p' para ver la calificacion "<< endl;

cin>>prom;
  int contador = 1;
  double promedio = calif;

  if (prom == 'p'){cout << promedio;}

  else if (prom == 'c')
 {  
 // while (prom == 'c')
  //{
    int estrellas = calif;

    cout<< "califica este titulo del 1 al 5"<< endl;

    cin>> estrellas;
    
     promedio += estrellas;

    contador += 1;

    cout << "prsione la tecla 'c' para califcar este titulo o presione 'p' para ver la calificacion "<< endl;
    cin >> prom;
 }
 //}


  double  r = promedio / contador;
   cout<< endl << "la calificacion de este titulo es de: "<< r << endl<<endl;

   return r;
}


void Peliculas::infoGeneral()
{
  cout << "el id es: "<< getId() << endl << "el titulo es: " << getNombre() << endl<< "dura: "<<  getDuracion() << endl << "es del genero: "<< getGenero() << endl<< "tiene una calificacion de: "<<getCalif()<< endl<< endl;

}



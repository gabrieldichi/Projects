//calificacion.h
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


#pragma once
class Calificacion 
{
protected:

double calif;

public:
Calificacion(){}

Calificacion(double calif):calif(calif){}

virtual double getCalif() = 0;

double promedio_estrellas();

};

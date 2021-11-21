#ifndef SYSTEM_VIEW_H
#define  SYSTEM_VIEW_H

//Incluimos las librerias
#include <iostream>
#include <stdlib.h>
#include "../Model/System.h"

using std::cin;
using std::cout;
using std::string;

//Definicion de la clase view
class View{ 
private:
	// Objeto de que se enlaza con la vista del sistema
	System recruitmentSystem;
	// Privado pues son de uso interno
	void mostrarMenu();
public:		
	View();
	~View();

};

#endif
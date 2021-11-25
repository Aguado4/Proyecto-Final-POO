#ifndef SYSTEM_VIEW_H
#define  SYSTEM_VIEW_H

//Incluimos las librerias
#include <iostream>
#include <stdlib.h>
#include "../Model/System.h"

using namespace std;
//Definicion de la clase view
class View{ 
    private:
        // Objeto de que se enlaza con la vista del sistema
        System recruitmentSystem;
    public:
        View();
        void mostrarMenu();
        ~View();
};

#endif
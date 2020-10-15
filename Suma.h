//#pragma once
#ifndef _SUMA
#define _SUMA

#include "Operacion.h"

class Suma: public Operacion {
//lo que estaba como privado o protegido en la clase superior
//sigue estando como estaba, lo más habitual es heredar lo público
//podría ser también protected o private

public:
    void operar();

};
#endif

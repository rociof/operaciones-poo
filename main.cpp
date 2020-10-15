#include <iostream>
#include "Suma.h"
#include "Resta.h"

int main() {
    //una vez que tenemos la clase podemos instanciar objetos
    //Una variable del tipo Suma
    //Cada uno de estos objetos tiene valor1, valor2 y resultado
    Suma s;
    std::cout << "Operación suma: " << std::endl;
    s.cargar1();
    s.cargar2();
    s.operar();
    s.mostrarResultado();

    Resta r;
    std::cout << "Operación resta: " << std::endl;
    r.cargar1();
    r.cargar2();
    r.operar();
    r.mostrarResultado();

    

    return 0;
}

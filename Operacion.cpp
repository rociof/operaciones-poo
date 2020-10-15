#include <iostream> // es del sistema
#include "Operacion.h" // se ponen las comillas porque es local

void Operacion::cargar1() {
    std::cout << "Introduzca valor 1: " << std::endl;
    //El valor1 está definido en la clase operación. 
    //Existe para los miembros de la clase
    std::cin >> valor1; 
}
void Operacion::cargar2() {
    std::cout << "Introduzca valor 2: " << std::endl;
    std::cin >> valor2;


}
void Operacion::mostrarResultado() {
    
    std::cout << "El resultado es: " << resultado << std::endl;
}

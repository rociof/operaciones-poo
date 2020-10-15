//#pragma once
//Es una directiva de preprocesador
//Es conveniente ponerlo en todos los h que creen una clase
//Se trata de evitar que sólo permita definirlo una vez
//no es la directiva estándar y puede dar problemas con otros compiladores
//estas siguientes directivas son estándar de C y C++
//y funcionan con todos los compiladores
#ifndef _OPERACION
#define _OPERACION
class Operacion {

protected:
//la definición de los atributos es igual en una clase
//las clases que hereden de esta pueden acceder
//si fuese modo privado no podrían
    int valor1;
    int valor2;
    int resultado;
    
public:
    void cargar1();
    void cargar2();
    void mostrarResultado();
};

#endif

/* Trabajo Practico N°3 - Tipos de datos
Franco Ortega
Fecha: 21-5-2020
Algoritmos y estructuras de datos */

#include <iostream>
#include <assert.h>
#include <ctype.h>
using namespace std; // Esto evita repetir "std::" //

int main() { 
    // 1° Defino las variables a utilizar //
    int entero = 2020 ; 
    bool booleano = true ;
    double pi = 3.141559 ;
    char letra = 'K' ;
    unsigned int entero2 = 1053 ;
    string cadena = "Cuarentena";

    //2° Mis variables a utilizar://
    cout << "Las variables definidas son: \n";
    cout << "entero(int)=";
    cout << entero ;cout << "\n" ; 
    cout << "booleano(bool)=";
    cout << booleano ; cout << "\n" ;
    cout << "pi(double)=";
    cout << pi ;cout << "\n" ;
    cout << "letra(char)=";
    cout << letra  ;cout << "\n" ;
    cout << "entero 2 (unsigned int)=";
    cout << entero2  ;cout << "\n" ;
    cout << "cadena(string)=";
    cout << cadena  ;cout << "\n" ;

    // 3° Prueba assert //
    assert (entero==2020);
    assert (booleano==true);
    assert(pi==3.141559);
    assert(letra=='K');
    assert(entero2 ==1053);
    assert(cadena=="Cuarentena");
    
 }
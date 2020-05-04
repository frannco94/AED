# 01-Adicion
## Etapa #1: Análisis del problema:
### Transcripción del problema:
• Mostrar la suma de 2 enteros, previamente ingresados por el usuario.
### Refinamiento del problema e Hipótesis de trabajo:
Refinamiento del problema: Realizar un programa que sea capaz de mostrar la suma de 2 numeros enteros ingresados por el usuario.
Hipotesis: 
- Valido solo para datos tipo 'int'.
### Modelo IPO.
![Modelo IPO](https://user-images.githubusercontent.com/63458655/80981129-e8cac080-8dff-11ea-8218-7bdc72f66dc1.jpg)

## Etapa #2 Diseño de la Solución:
### Léxico del Algoritmo:
-El léxico es un conjunto de símbolos que se pueden usar en un lenguaje.
En nuestro caso seran: a ; b ; suma ϵ ℤ

### Representación visual

### Representación textual

' #include <iostream>
int main (){
    int a,b,suma;
    std::cout << "Ingrese un numero entero\n";
    std::cin >> a;
    std::cout << "Ha ingresado el numero " << a << "\n"; 
    std::cout << "Ingrese un numero entero\n";
    std::cin >> b;
    std::cout << "Ha ingresado el numero " << b <<"\n";
    suma=a+b ;
    std::cout << "La suma es " << suma;
} '


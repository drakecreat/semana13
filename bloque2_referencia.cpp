#include <iostream>
using namespace std;
/*
int main() {
int stock = 250;
int* p = &stock;

cout << stock << endl; // (1) 250
cout << p << endl; // (2) 0x5ffe74
cout << *p << endl; // (3) 250

*p = 180; // se vendieron 70 unidades
cout << stock << endl; // (4) 180
return 0;
}


*/
/*
void aplicarIVA(double* precio, double iva) {
// TU CODIGO (1 linea):
*precio = *precio * (1 + iva);
}
int main() {
double precio = 100.00;
aplicarIVA(&precio, 0.12);
cout << "Precio con IVA: " << precio << endl; // 112.00
return 0;
}
*/
/*
void incrementar(int& val, int n){                        void incrementar(int* val, int n){
val += n;                                                 *val += n;
}                                                         }
// Como se llama:                                         // Como se llama:
int contador = 10;                                        int contador = 10;
incrementar(contador, 5);                                 incrementar(&contador, 5);
*/
/*

■ Pregunta 1: ¿Como se llama la funcion en cada caso? Escribe las dos lineas de llamada y senala la diferencia.7
inc rementar(contador, 5);                                 incrementar(&contador, 5);
la diferencia es que en la version solo contador , 5 lo que hace es una copia de todos los valores de contador
y en la version con &contador lo que hace es modificar el valor de contador directamente, porque se le esta pasando la direccion de memoria de contador
■ Pregunta 2: ¿Que operador aparece dentro del CUERPO de la version con puntero que no aparece en la version con
referencia?
el operador que aparece es el * que lo usa para acceder al valor que esta en la direccion de memoria que se le paso a la funcion, 
mientras que en la version con referencia no se necesita ese operador porque ya se esta trabajando con el valor directamente
■ Pregunta 3: Despues de ejecutar, ¿contador vale 15 en ambos casos? Escribe si o no y explica por que.
si vale porque al final ambos modifican una direccion de memoria que es la misma, aunque en la version con referencia se hace de forma directa 
y en la version con puntero se hace a traves de la direccion de memoria, pero al final el resultado es el mismo
*/
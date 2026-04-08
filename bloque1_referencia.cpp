/*

#include <iostream>
using namespace std;
int main() {
double saldo = 1500.00;
double& ref = saldo; // ref es otro nombre para saldo
ref = 2000.00;
cout << "saldo = " << saldo << endl; // ?
cout << "ref = " << ref << endl; // ?
return 0;
}
// saldo y ref son lo mismo, por eso ambos muestran 2000.00

*/
/*
#include <iostream>
using namespace std;
void aplicarDescuento(double& saldo, double porcentaje) {
saldo = saldo - (saldo * porcentaje);
}
int main() {
double cuenta = 500.00;
aplicarDescuento(cuenta, 0.10); // aplica 10% de descuento
cout << "Saldo final: " << cuenta << endl; // ?
return 0;
}
//450.00 porque se le aplica el descuento del 10% a los 500.00

*/

#include <iostream>
using namespace std;
void intercambiar(int& a, int& b) {
// ESCRIBE TU CODIGO AQUI (3 lineas):
int temp = a;
a = b;
b = temp;
}
int main() {
int x = 15, y = 42;
intercambiar(x, y);
cout << "x = " << x << ", y = " << y << endl;
// output correcto: x = 42, y = 15
return 0;
}


#include <iostream>
using namespace std;
void resetSensor(int& lectura) { // <-- nota el &
lectura = 0;
cout << "Dentro de la funcion: " << lectura << endl;
}
int main() {
int temperatura = 38;
resetSensor(temperatura);
cout << "En main, temperatura = " << temperatura << endl; // ?
return 0;
}
//la cambia a 0 porque modifica la referencia de temperatura

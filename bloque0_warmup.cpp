#include <iostream>
using namespace std;
void resetSensor(int lectura) {
lectura = 0;
cout << "Dentro de la funcion: " << lectura << endl;
}
int main() {
int temperatura = 38;
resetSensor(temperatura);
cout << "En main, temperatura = " << temperatura << endl; // ?
return 0;
}
//la mantiene 38

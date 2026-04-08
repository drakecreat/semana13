/*
6. En main(): (a) muestra la lista inicial, (b) aplica un bonus de 0.5 a notas[1] usando ajustarNota(), (c) calcula el
promedio usando normalizarNotas(), (d) muestra la lista final y el promedio
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <array>
using namespace std;

void mostrarestudiantes(string n[], double v[], int tam){
    for (int i = 0; i < tam; i++){
        cout<<n[i]<<" "<<fixed<<setprecision(2)<<v[i]<<endl;
    }
}
void ajustarnota(double* nota, double bonus){
   if(*nota + bonus > 10.0){
    *nota = 10.0;} else {
    *nota == *nota;}
}
void normalizarnotas(double notas[],int tam, double& promedio){
    double suma = 0;
    for (int i = 0; i < tam; i++){
        suma += notas[i];
    }
    promedio = suma / tam;
}
int main (){
 double promedio=0.0;
 array<string, 4> nombres = {"Alice", "Bob", "Charlie", "Diana"};
 array<double, 4> notas = {8.5, 9.0, 7.5, 6.0};

cout<<"Lista inicial:"<<endl;
mostrarestudiantes(nombres.data(), notas.data(), nombres.size());
cout<<endl<<"Bonus aplicado a Bob:"<<endl;
ajustarnota(&notas[1], 0.5);
normalizarnotas(notas.data(), notas.size(), promedio);
cout<<endl<<"Lista final:"<<endl;
mostrarestudiantes(nombres.data(), notas.data(), nombres.size());
cout<<endl<<"promedio: "<<fixed<<setprecision(2)<<promedio<<endl;
    return 0;
}
#include <iostream>
using namespace std;

string nombre(string nombre){
    return nombre;
}
void mejorararma(int& valor, string& arma){
    cout<<nombre(arma)<<" --- Mejorar el arma..."<<endl;
    valor = valor * 2;
}


int main(){
int daño ;
string arma;
cout<<"Ingrese el nombre del arma:"<<endl;
cin>>arma;
cout<<"Ingrese el daño del arma:"<<endl;
cin>>daño;
mejorararma(daño, arma);
cout<<nombre(arma)<<" --- El daño del arma mejorada es: "<<daño<<endl;

    return 0;
}
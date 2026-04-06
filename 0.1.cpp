#include <iostream>
using namespace std;

void presentarse(string nombre, string clase){
    cout<<"Soy "<<nombre<<" un "<<clase<<"del reino de Hyrule"<<endl;
}

int main(){
    string nombre, clase;
    cout<<"ingrese su nombre:"<<endl;   
    cin>>nombre;
    cout<<"ingrese su clase:"<<endl;
    cin>>clase;
    presentarse(nombre, clase);

    return 0;
}
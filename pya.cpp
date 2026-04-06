#include <iostream>
using namespace std;

int main(){

    int n = 0;
    int* p = &n;
    cout<<"Valor de n: "<<n<<endl;
    cout<<"Direccion de n: "<<&n<<endl;
    cout<<"Valor al que apunta p: "<<*p<<endl;
    cout<<"Direccion de p: "<<p<<endl;


}
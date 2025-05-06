#include <iostream>
#include <string>

using namespace std;

void ejericio1(){
  int size = 10;

  int numeros[size];


  for(int i = 0; i < size; i++){
    cout<<"Ingrese el numero "<<i+1<<": ";
    cin>>numeros[i];
  }

  for(int i = 0; i < size; i++){
    cout<<"Numero en la posicion "<<i+1<<": "<<numeros[i]<<endl;
  }
}


int main(){

  ejericio1();

  cout<<"Hacer un cambio nuevo";


  return 0;

}
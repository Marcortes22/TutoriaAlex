#include <iostream>
#include <string>

using namespace std;

int main(){

  int size;

  cout<<"Ingrese la cantidad de personas con las que vive en su casa: ";

  cin>>size;

  string nombres[size]; 

  for(int i = 0; i < size; i++){

    cout<<"Ingrese el nombre de la persona numero "<<i+1<<": ";
    
    cin>>nombres[i];

  }

  for(int i = 0; i < size; i++){

    cout<<"El nombre de la persona numero "<<i+1<<" es: "<<nombres[i]<<endl;

  }


  return 0;
}
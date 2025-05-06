#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre;
    string estadoCivil;
    bool tieneMascotas;

    cout<<"Dame tu nombre completo: ";
    getline(cin, nombre);

    cout<<"Dame tu estado civil: ";
    cin>>estadoCivil;

    cout<<"Tienes mascotas? (1: si, 0: no): ";
    cin>>tieneMascotas;

    cout<<"Hola "<<nombre<<endl;
    cout<<"Tu estado civil es: "<<estadoCivil<<endl;
    cout<<"Tienes mascotas: "<<tieneMascotas<<endl;
    return 0;
}
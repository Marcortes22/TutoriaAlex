#include <iostream>
#include <string>

using namespace std;

int main() {

  int cantidadDias = 0;
  int precioNoche= 10;
  float descuento = 0.0;
  float montoTotalPagar = 0.0;
  float montoConDescuento = 0.0;

  cout<<endl;
  cout<<"Bienvenido al sistema de hospedaje."<<endl;
  cout<<"Cuantos dias se hospedó? ";
  cin>>cantidadDias;

  if(cantidadDias < 5){
    
    montoTotalPagar = cantidadDias * precioNoche;

    montoConDescuento = montoTotalPagar;
    

  }else if(cantidadDias >= 5 && cantidadDias < 10){
  
  descuento = 0.10;

  montoTotalPagar = cantidadDias * precioNoche; 

  montoConDescuento = montoTotalPagar - (montoTotalPagar * descuento);
  

  }else{
    //Descuento del 15%
    descuento = 0.15;

    montoTotalPagar = cantidadDias * precioNoche; 

    montoConDescuento = montoTotalPagar - (montoTotalPagar * descuento);

  }


  cout<<endl;
  cout<<"Usted se hospedó por: " <<cantidadDias<<" dias"<<endl;
  cout<<"El precio por noche es: "<<precioNoche<<endl;
  cout<<"El monto total a pagar es: "<<montoTotalPagar<<endl;
  if(descuento != 0.0){
    cout<<"Se le aplica un descuento de: "<<descuento*100<<"% "<<endl;
    cout<<"El monto con descuento es: "<<montoConDescuento<<endl;
  }else{
    cout<<"No se aplica descuento"<<endl;
  }


    return 0;
}


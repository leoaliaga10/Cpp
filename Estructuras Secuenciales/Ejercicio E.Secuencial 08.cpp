//Ejercicio E.Secuencial 08
//Esta aplicación, vamos a calcular el interes generado por un capital, depositado durante una cantidad de periodos a una tasa de interes determinada.

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main(){
float cap,tasa,monto,interes;
int np;
cout<<"Ingrese Capital: ";
cin>>cap;
cout<<"Ingrese % de tasa de interes: ";
cin>>tasa;
cout<<"Ingrese numero de periodos: ";
cin>>np;
monto=cap*pow(1+tasa/100,np);
interes=monto-cap;
cout<<"\nEl interes es : "<<interes; //\n es una manera de hacer un salto de linea
getch(); //Para mostrar los resultados en pantalla
}
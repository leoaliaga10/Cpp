//Ejercicio Funciones 04
//Este ejemplo lee grados celcius mediante una función y los transforma a KELVIN y FARENHEIT.

#include<iostream.h>
#include<conio.h>

float leerdato(){
float x;
cout<<"Ingresar temperatura en grados CELSIUS: ";
cin>>x;
return x;
}

void main(){
float F,K,C;
clrscr();
cout<<"TRANSFORMACIONES DE TEMPERATURAS"<<endl;
cout<<"-------------------------------"<<endl;
cout<<"\n";
C=leerdato();

K=C+273;
F=(9*C+160)/5;

cout<<"\nTemperatura en grados KELVIN: "<<K<<endl;
cout<<"Temperatura en grados FARENHEIT: "<<F;
getch();
}
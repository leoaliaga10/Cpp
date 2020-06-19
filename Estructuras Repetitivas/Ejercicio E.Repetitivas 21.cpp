//Ejercicio E.Repetitivas 21
//Este programa permite leer una temperatura  en escala centígrada y nos calcula e imprime en las escalas Fahrenheit y Kelvin.

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
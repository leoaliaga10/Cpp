//Ejercicio Punteros 01
//Este programa crea una variable de tipo float y otra variable de tipo puntero, donde guardamos la dirección de la variable float y la mostramos por pantalla.

#include<iostream.h>
#include<conio.h>

void main(){
float pi=2.1614,*p;
p=&pi;
cout<<"Posicion de memoria de Pi: "<<p;
cout<<"\nValor de Pi: "<<*p;
getch();
}
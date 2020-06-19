//Ejercicio E.Secuencial 05
//En esta aplicación vamos a hallar la suma de los n primeros números naturales.

#include<iostream.h>
#include<conio.h>
void main(){
int n,s;
cout<<"Ingrese numero de terminos: ";
cin>>n;
s=n*(n+1)/2;
cout<<"La suma de los "<<n<<" primeros términos es : "<<s;
getch();
}
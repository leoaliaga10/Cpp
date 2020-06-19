//Ejercicio E.Secuencial 02
//Esta aplicación lee dos valores y los intercambia. 

#include<iostream.h>
#include<conio.h>
void main(){
int a,b,t;
cout<<"Ingresa a: ";
cin>>a;
cout<<"Ingresa b: ";
cin>>b;
t=a;
a=b;
b=t;
cout<<"Los valores intercambiados son: "<<endl;
cout<<"a = "<<a<<endl;
cout<<"b = "<<b;
getch();
}
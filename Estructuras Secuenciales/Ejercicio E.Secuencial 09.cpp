//Ejercicio E.Secuencial 09
//En este programa, distribuimos un numero real en su equivalente en horas, minutos, segundos y decimos de segundos.
#include<iostream.h>
#include<conio.h>
void main(){
float n;
int h,m,s,ds;
cout<<"Ingrese numero real: ";
cin>>n;
//Conversion
h=int(n);
n=(n-h)*60;
m=int(n);
n=(n-m)*60;
s=int(n);
n=(n-s)*60;
ds=int(n);
cout<<"<<<<<Resultados>>>>>"<<endl<<endl
<<"Horas : "<<h<<endl
<<"Minutos : "<<m<<endl
<<"Segundos : "<<s<<endl
<<"Decimas de segundos : "<<ds<<endl;
getch();
}
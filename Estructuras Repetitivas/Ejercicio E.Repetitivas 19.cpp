//Ejercicio E.Repetitivas 19
//Este programa lee N datos, y calcula e imprime el máximo y el mínimo.

#include<iostream.h>
#include<conio.h>

int leern(){
int x;
cout<<"Ingresa un numero: ";
cin>>x;
cout<<"\n";
return x;
}

int leerdato(){
int x;
cout<<"numero: ";
cin>>x;
return x;
}

void main()
{
int N,M,m,A;
clrscr();
cout<<"MINIMO Y MAXIMO DE N NUMEROS"<<endl;
cout<<"----------------------------"<<endl;
cout<<"\n";
N=leern();
M=m=leerdato();
for (int i=1;i<N;i++){
A=leerdato();
if (M<A){
M=A;
}
if (m>A){
m=A;
}
}
cout<<"\nMaximo= "<<M<<" y "<<"Minimo= "<<m;
getch();
}
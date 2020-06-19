//Ejercicio E.Repetitivas 20
//Esta aplicación lee una secuencia de números  y escribe el número de veces que se repite el primero de ellos.

#include<iostream.h>
#include<conio.h>

int leern(){
int x;
cout<<"Ingresa N: ";
cin>>x;
cout<<"\n";
return x;
}

int leerdato(){
int x;
cout<<"Ingresar numero: ";
cin>>x;
return x;
}

void main(){
clrscr();
cout<<"SECUENCIA DE NUMEROS"<<endl;
cout<<"--------------------"<<endl;
cout<<"\n";
int A,B,c=1,N;
N=leern();
A=leerdato();
for(int i=1;i<N;i++){
B=leerdato();
if (B==A){
c++;
}
}
cout<<"\nLas veces que se repite el primer numero es: "<<c;
getch();
}
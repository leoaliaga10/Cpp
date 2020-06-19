//Ejercicio E.Repetitivas 17
//Este programa determina si dos números enteros positivos son amigos. Dos números son amigos si la suma de los divisores del primero, excepto el mismo, es igual al segundo y viceversa.

#include<iostream.h>
#include<conio.h>

int leerdato(){
int x;

cout<<"Ingresar numero: ";
cin>>x;
return x;
}

int amigos(int S=0){
int A;
A=leerdato();
for (int i=1; i<A; i++){
if (A%i==0){
S=S+i;
}
}
return S;
}

void main(){
int B,S;
clrscr();
cout<<"NUMEROS AMIGOS"<<endl;
cout<<"--------------"<<endl;
B=leerdato();
S=amigos();

if (B==S){
cout<<"\nSON NUMEROS AMIGOS";
}
else{
cout<<"\nNO SON NUMEROS AMIGOS";
}
getch();
}
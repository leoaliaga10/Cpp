//Ejercicio E.Repetitivas 18
//Este programa permite leer un número entero y positivo N y escriba la lista de sus divisores.

#include<iostream.h>
#include<conio.h>

int leerdato(){
int x;
cout<<"Ingresar dato: ";
cin>>x;
cout<<"\n";
cout<<"Sus divisores son: ";
return x;
}

void divisores(){
int N;
N=leerdato();
for(int i=1;i<=N;i++){
if(N%i==0){
cout<<i<<" ";
}
}
}

void main(){

clrscr();
cout<<"DIVISORES DE UN NUMERO"<<endl;
cout<<"----------------------"<<endl;
cout<<"\n";
divisores();
getch();
}
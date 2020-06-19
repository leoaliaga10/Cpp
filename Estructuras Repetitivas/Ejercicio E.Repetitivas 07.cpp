//Ejercicio E.Repetitivas 07
//Este programa desarrolla un ejemplo que obtiene el mínimo común múltiplo (MCM) de dos números.

#include<iostream.h>
#include<conio.h>

int leerdato(){
int x;
cout<<"Ingresa numero: ";
cin>>x;
return x;
}

int producto(int x, int y){
x*y;
return x*y;
}

int minimo(){
int A,B,i=2,mcd=1,P,mcm;
A=leerdato();
B=leerdato();
P=producto(A,B);
while(i<=A && i<=B){
if (A%i==0 && B%i==0){
A=A/i;
B=B/i;
mcd=mcd*i;
}
else{
i++;
}
}
mcm=P/mcd;
return mcm;
}

void main(){
int mcm;
clrscr();
cout<<"MINIMO COMUN MULTIPLO DE DOS NUMEROS"<<endl;
cout<<"------------------------------------"<<endl;
cout<<"\n";
mcm=minimo();
cout<<"\nEl minimo comun multiplo es: "<<mcm;
getch();
}
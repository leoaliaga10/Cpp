//Ejercicio A.Unidimencional 03
//Este programa nos pide ingresar un numero de notas luego pide que ingresemos cada nota, para que al final nos muestre el promedio de notas y también la menor y mayor nota ingresada.

#include<iostream.h>
#include<conio.h>

void main(){

int nota[100];
int suma=0,N,M,m,A;
cout<<"\nINGRESAR N: ";
cin>>N;
cout<<"\n";

for(int i=0;i<N;i++){
cout<<"INGRESAR NOTA "<<(i+1)<<" : ";
cin>>nota[i];
}
for (int i=1;i<N;i++){
A=nota[i];
M=nota[i];
m=nota[0];
if (M<A){
M=A;
}
if (m>A){
m=A;
}
}
for(int i=0;i<N;i++){
suma=suma+nota[i];
}

cout<<"ELEMENTO"<<"\tNOTA"<<"\tHISTOGRAMA";

for(int i=1;i<=nota[i];i++){
cout<<"*";
}
cout<<"\nEL PROMEDIO DE NOTAS: "<<(float)suma/N<<endl;
cout<<"\nLA MENOR NOTA: "<<m<<endl;
cout<<"\nLA MAYOR NOTA: "<<M<<endl;
getch();
}
//Ejercicio A.Unidimencional 06
//Esta aplicación genera el resultado o los resultados de un determinado numero de lanzamientos de dados.

//Utilizacion de Rand (aleatorio)
//Con variable global

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
//Variable global
void main(){
int dado[6];
int numero,N; //Variable local
cout<<"Ingrese numero de jugadas: ";
cin>>N;
for(int i=0;i<6;i++){
dado[i]=0;
}
randomize(); //Chocolateada
for(int k=0;k<N;k++){
numero=1+(rand()%6);
dado[numero-1]=dado[numero-1]+1;
}
cout<<"\nValor\tJugadas: "<<endl;
for(int c=0;c<6;c++){

cout<<(c+1)<<"\t"<<dado[c]<<endl;
}
getch();
}

//Utilizacion de Rand (aleatorio)
//Con variable local

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

void main(){
int dado[6];
int numero,N; //Variable local
cout<<"Ingrese numero de jugadas: ";
cin>>N;
for(int i=0;i<6;i++){
dado[i]=0;
}
randomize(); //Chocolateada
for(int k=0;k<N;k++){
numero=1+(rand()%6);
dado[numero-1]=dado[numero-1]+1;
}
cout<<"\nValor\tJugadas: "<<endl;
for(int c=0;c<6;c++){

cout<<(c+1)<<"\t"<<dado[c]<<endl;
}
getch();
}
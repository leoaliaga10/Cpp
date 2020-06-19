//Ejercicio A.Unidimencional 07
//Esta aplicación genera un numero aleatorio menor que 10 y otro menor que 100 .

//Primera manera

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

void main(){
int numero1,numero2;
randomize(); //chocolateada
numero1=1+(rand()%10);
numero2=1+(rand()%100);

cout<<"NUMERO ALEATORIO MENOR DE 10 : "<<numero1<<endl
<<"NUMERO ALEATORIO MENOR DE 100 : "<<numero2;

getch();
}

//Segunda manera

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

void main(){
int numero1,numero2;
randomize(); //chocolateada
numero1=rand()%9;
numero2=rand()%99;

cout<<"NUMERO ALEATORIO: "<<numero1<<" - "<<numero2;

getch();
}
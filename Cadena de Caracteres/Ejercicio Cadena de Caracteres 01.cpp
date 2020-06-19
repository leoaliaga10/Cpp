//Ejercicio Cadena de Caracteres 01
//Este programa lee dos cadenas de caracteres y verifica si son iguales, y también las concatena.

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

typedef char cadena[30];

void main(){
cadena cad1,cad2,cad3;
cout<<"Ingresar nombre 1: ";
cin>>cad1;
cout<<"Ingresar nombre 2: ";
cin>>cad2;
if (strcmp(cad1,cad2)==0){
cout<<"Nombres iguales";
}
else {
cout<<"Nombres distintos";
}
strcpy(cad3,cad1);
cout<<"\n"<<cad3;
/*clrscr();
cout<<cad1<<endl;
cout<<cad2<<endl;*/
strcat(cad1,cad2);
cout<<"\n"<<cad1;
getch();
}
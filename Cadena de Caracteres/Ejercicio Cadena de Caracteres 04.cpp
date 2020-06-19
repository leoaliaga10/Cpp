//Ejercicio Cadena de Caracteres 04
//Este ejemplo lee una palabra en mayúsculas y la transforma en minúsculas.

#include<iostream.h>
#include<conio.h>

void mayuscula (char cadena[]){
int i=0;
while(cadena[i]!=NULL){
if (cadena[i]>=97 && cadena[i]<=122){
cadena[i]=cadena[i]-32;
}
i++;
}
}
void minusculas (char cadena[]){
int i=0;
while(cadena[i]!=NULL){
if (cadena[i]>=65 && cadena[i]<=90){
cadena[i]=cadena[i]+32;
}
i++;
}
}
int longcad(char cad[]){
int i=0;
while(cad[i] != NULL){
i++;
}
return i;
}
main(){
char palabra[20];
cout<<"INGRESE UNA PALABRA EN MAYUSCULA: ";
cin.getline(palabra,20);
mayuscula(palabra);
cout<<palabra<<endl;
minusculas(palabra);
cout<<palabra;
cout<<"\nLongitud: "<<longcad(palabra);
getch();
}
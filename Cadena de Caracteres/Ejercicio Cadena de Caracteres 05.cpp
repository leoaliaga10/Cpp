//Ejercicio Cadena de Caracteres 05
//Este programa lee una palabra y verifica si es palíndroma.

#include<iostream.h>
#include<conio.h>

int pali(char cadena [20]);
int longi(char cadena[20]);

void main(){
char palabra[20];
cout<<"Ingrese una palabra: ";
cin>>palabra;
if (pali(palabra)){
cout<<"Es PALINDROMA";
}
else{
cout<<"NO ES PALINDROMA";
}
getch();
}

int pali(char cadena [20]){
int lc;
lc=longi(cadena);
for (int i=0;i<=lc;i++){
if (cadena[i]!=cadena[lc-1-i]){
return 0;
}
}
return 1;

}

int longi(char cadena[20]){
int i=0;
while(cadena[i]){
i++;
}
return i;
}
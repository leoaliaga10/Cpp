//Ejercicio E.Bidimencional 03
//Este programa nos pide ingresar un numero de palabras para luego ordenarlas de forma ascendente.

#include<iostream.h>
#include<conio.h>
//#include<stdlib.h>
#include<string.h>

int leer(){
int x;
cout<<"Ingresar numero de palabras: ";
cin>>x;
return x;
}
void main(){
int x,valor;
char pal[10][20];
char tem[20];

x=leer();
for (int i=0;i<x;i++){
cout<<"Palabra: ";
cin>>pal[i];

}
for(int c=0;c<x;c++){
for(int d=c+1;d<x;d++){
valor=strcmp(pal[c],pal[d]);
if(valor>0){
strcpy(tem,pal[c]);
strcpy(pal[c],pal[d]);
strcpy(pal[d],tem);
}
}
}
clrscr();
cout<<"Palabras ordenadas"<<endl<<endl;

for(int i=0;i<x;i++){
cout<<"Palabra: "<<pal[i]<<endl;
}
getch();
}
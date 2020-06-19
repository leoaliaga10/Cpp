//Ejercicio A.Unidimencional 02
/*
Esta aplicación nos brinda un ejemplo de vectores con el siguiente menú:

[1] Leer numero de datos
[2] Leer vector
[3] Ver vector (Solo pares)
[4] Ver vector (Solo impares)
[5] Ver media de los pares
[6] Ver media de los números impares mayores que la media
[0] Salir
*/

#include<iostream.h>
#include<conio.h>
int vector[20];
char menu(){
char r;
clrscr();
cout<<"Menu principal"<<endl;
cout<<"[1] Leer numero de datos"<<endl;
cout<<"[2] Leer vector"<<endl;
cout<<"[3] Ver vector (Solo pares)"<<endl;
cout<<"[4] Ver vector (Solo impares)"<<endl;
cout<<"[5] Ver media de los pares"<<endl;
cout<<"[6] Ver media de los numeros impares mayores que la media"<<endl;
cout<<"[0] Salir";
cout<<"Elegir una opcion: ";
cin>>r;
return r;

}
int leerdato(char *s){
float x;
clrscr();
cout<<s;
cin>>x;
return x;
}
void leervector(int x){
clrscr();
for (int i=0;i<x;i++){
cout<<"Ingresa elemento: ";
cin>>vector[i];
}

}

void vervectorpar(int x){
clrscr();
for (int i=0;i<x;i++){
if (vector[i]%2==0){
cout<<vector[i]<<endl;
}
}
getch();
}

void vervectorimp(int x){
clrscr();
for (int i=0;i<x;i++){
if (vector[i]%2!=0){
cout<<vector[i]<<endl;
}
}
getch();
}

void vermediap(int x){
clrscr();
int s=0,j=0;
for (int i=0;i<x;i++){
if (vector[i]%2==0){
s=s+vector[i];
j++;
}
}
cout<<"La media de los pares es: "<<(float (s/j));
getch();
}
void vermediai(int x){
clrscr();
int s=0,p=0,j=0,m;
for (int i=0;i<x;i++){
s=s+vector[i];
}
m=s/x;
for (int i=0;i<x;i++){
if(vector[i]>m){
if(vector[i]%2!=0){
p=p+vector[i];
j++;
}
}
}
cout<<"La media de los numeros impares mayores que la media: "<<(float (p/j));
getch();
}
void main(){
char r;
float a;
do{
r=menu();
switch(r){
case '1':
a=leerdato("Ingrese numero de elementos para el vector: ");
break;
case '2':
leervector(a);
break;
case '3':
vervectorpar(a);
break;
case '4':
vervectorimp(a);
break;
case '5':
vermediap(a);
break;
case '6':
vermediai(a);
break;
}
}while(r!='0');
}
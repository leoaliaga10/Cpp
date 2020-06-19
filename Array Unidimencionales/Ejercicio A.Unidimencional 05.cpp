//Ejercicio A.Unidimencional 05
/*
Este es un programa que permite lo el siguiente menú:

[1] Leer numero de datos
[2] Leer vector
[3] Visualizar vector
[4] Encontrar la media
[5] Encontrar el valos medio
[6] Encontrar los números mayores o iguales que la media
[7] Encontrar la media de los números mayores que la media
[0] Salir
*/
#include<iostream.h>
#include<conio.h>

int vector[20]; //variable global

char menu(){
clrscr();
char res;
cout<<"MENU PRINCIPAL"<<endl;
cout<<"--------------"<<endl;
cout<<"1. Leer numero de datos"<<endl;
cout<<"2. Leer vector"<<endl;
cout<<"3. Visualizar vector"<<endl;
cout<<"4. Encontrar la media"<<endl;
cout<<"5. Encontrar el valor medio"<<endl;
cout<<"6. Valores mayores que la media"<<endl;
cout<<"7. Encontrar la media de los valores mayores que la media"<<endl;
cout<<"0. Salir"<<endl;
cout<<"Eliga una opcion: ";
cin>>res;
return res;
}

int leerdato(char *s){
clrscr();
int x;
cout<<s;
cin>>x;
return x;
}

void leervector(int x){
clrscr();
cout<<"Ingresar datos del vector"<<endl;
for(int i=0;i<x;i++){
cout<<"Vector ["<<(i+1)<<"] : ";
cin>>vector[i];
}
}

void vervector(int x){
clrscr();
for(int i=0;i<x;i++){
cout<<"Vector ["<<(i+1)<<"] : "<<vector[i]<<endl;
}
getch();
}

void media(int n){
clrscr();
int s=0;
for(int i=0;i<n;i++){
s=s+vector[i];
}
cout<<"La media es: "<<(s/n);
getch();
}

void valormedio(int y){
clrscr();
int vm=0;
vm=y/2;
cout<<"El valor medio es: "<<vector[vm];
getch();
}

void numerosmayores(int x){
clrscr();
float media=0;
for (int i=0;i<x;i++){
media=media+vector[i];
}
media=media/x;

for (int i=0;i<x;i++){
if(vector[i]>=media){
cout<<vector[i]<<" ";
}
}
getch();
}

void mediamedia(int x){
clrscr();
float media=0,acun=0;
int j=0;
for(int i=0;i<x;i++){
media=media+vector[i];
}
media=media/x;
for(int i=0;i<x;i++){
if (vector[i]>=media){
acun=acun+vector[i];
}
j++;
acun=acun/j;
}
cout<<"La media de los valores mayores que la media es: "<<acun;
getch();
}

void main(){
int n;
char opc;
do{
opc=menu();
switch(opc){
case '1':{
n=leerdato("Ingrese numero de datos: ");
break;
}
case '2':{
leervector(n);
break;
}
case '3':{
vervector(n);
break;
}
case '4':{
media(n);
break;
}
case '5':{
valormedio(n);
break;
}
case '6':{
numerosmayores(n);
break;
}
case '7':{
mediamedia(n);
break;
}
}
}while(opc!='0');
}
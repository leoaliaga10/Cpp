//Ejercicio Ordenacion 01
//Este programa lee un vector luego lo ordena por: Selección, Inserción o Intercambio, y también lo ordena descendentemente.

#include<iostream.h>
#include<conio.h>
char menu(){
clrscr();
char op;
cout<<"MENU PRINCIPAL";
cout<<"\n--------------";
cout<<"\n[1] Leer N";
cout<<"\n[2] Leer Vector";
cout<<"\n[3] Ver Vector";
cout<<"\n[4] Ordenar por Seleccion";
cout<<"\n[5] Ordenar por Insercion";
cout<<"\n[6] Ordenar por Intercambio";
cout<<"\n[7] Ordenar descendentemente";
cout<<"\n[0] Salir";
cout<<"\nEliga una opcion: ";
cin>>op;
return op;
}
void leerdato(int *i){
clrscr();
cout<<"Ingrese numero de datos: ";
cin>>*i;
}
void leernotas(float *v,int i){
clrscr();
for(int k=0;k<i;k++){
cout<<"Ingresar dato "<<(k+1)<<" : ";
cin>>*(v+k);
}
}
void vernotas(float *v,int n){
clrscr();
for(int i=0;i<n;i++){
cout<<"Dato "<<(i+1)<<" : "<<*(v+i)<<endl;
}
getch();

}
void ordxselecion(float *v,int n){
clrscr();
int k;
float T;
for(int i=0;i<n-1;i++){
k=i;
T=*(v+i);
for(int j=i+1;j<n;j++){
if(*(v+j)<T){
k=j;
T=*(v+j);
}
}
*(v+k)=*(v+i);
*(v+i)=T;
}
}
void ordxinsercion(float *v,int n){
clrscr();
int j;
float T;
for(int i=0;i<n;i++){
T=*(v+i);
j=i;
while(j>0 && T<*(v+j-1)){
*(v+j)=*(v+j-1);
j--;
}
*(v+j)=T;
}
}
void ordxintercambio(float *v,int n){
clrscr();
float T;
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(*(v+i)>*(v+j)){
T=*(v+i);
*(v+i)=*(v+j);
*(v+j)=T;
}
}
}
}
void descendente(float *v,int n){
clrscr();
//descendente metodo de insercion
int j;
float T;
for(int i=0;i<n;i++){
T=*(v+i);
j=i;
while(j>0 && T>*(v+j-1)){
*(v+j)=*(v+j-1);
j--;
}
*(v+j)=T;
}
}
void main(){
float vector[100]; // Las notas pueden ser con decimales
int i=0;
char op;
do{
switch(op=menu()){
case '1': leerdato(&i);
break;
case '2': leernotas(&vector[0],i);
break;
case '3': vernotas(&vector[0],i);
break;
case '4': ordxselecion(&vector[0],i);
break;
case '5': ordxinsercion(&vector[0],i);
break;
case '7': descendente(&vector[0],i);
break;
case '6': ordxintercambio(&vector[0],i);
break;
}
}while(op!='0');
}
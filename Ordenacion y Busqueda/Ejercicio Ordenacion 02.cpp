//Ejercicio Ordenacion 02
/*
Este programa genera números hasta 100 000 aleatoriamente y luego los ordena por los siguientes metodos de ordenación, calculando el tiempo que se demora dicho metodo escogido.

[1] Ordenar por Selección
[2] Ordenar por Inserción
[3] Ordenar por Intercambio
[4] Quicksort u Ordenación rapida
*/
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#define lim 100000
char menu(){
clrscr();
char op;
cout<<"MENU PRINCIPAL";
cout<<"\n--------------";
cout<<"\n[1] Escoger vector";
cout<<"\n[2] Generar Vector";
cout<<"\n[3] Ver Vector";
cout<<"\n[4] Ordenar por Seleccion";
cout<<"\n[5] Ordenar por Insercion";
cout<<"\n[6] Ordenar por Intercambio";
cout<<"\n[7] Ordenacion rapida";
cout<<"\n[0] Salir";
cout<<"\nEliga una opcion: ";
cin>>op;
return op;
}
void escogervector(long int *i){
clrscr();
cout<<"Ingresar tamaño del vector: ";
cin>>*i;
}
void generarvector(float *v,long int i){
clrscr();
randomize();
for(int k=0;k<i;k++){
*(v+k)=(1+rand()&i);
}
}
void vervector(float *v,long int n){
clrscr();
for(int i=0;i<n;i++){
cout<<"Dato "<<(i+1)<<" : "<<*(v+i)<<endl;
}
getch();

}
void ordxselecion(float *v,long int n){
clrscr();
time_t comienzo, final;
int k;
float T;
comienzo = time( NULL );
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
final = time( NULL );
cout<<"El tiempo transcurrido es: "<<difftime(final, comienzo);
getch();
}
void ordxinsercion(float *v,long int n){
clrscr();
time_t comienzo, final;
int j;
float T;
comienzo = time( NULL );
for(int i=0;i<n;i++){
T=*(v+i);
j=i;
while(j>0 && T<*(v+j-1)){
*(v+j)=*(v+j-1);
j--;
}
*(v+j)=T;
}
final = time( NULL );
cout<<"El tiempo transcurrido es: "<<difftime(final, comienzo);
getch();
}
void ordxintercambio(float *v,long int n){
clrscr();
time_t comienzo, final;
float T;
comienzo = time( NULL );
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(*(v+i)>*(v+j)){
T=*(v+i);
*(v+i)=*(v+j);
*(v+j)=T;
}
}
}
final = time( NULL );
cout<<"El tiempo transcurrido es: "<<difftime(final, comienzo);
getch();
}

void quicksort(float *a,int izq,int der){
clrscr();
time_t comienzo, final;
comienzo=time(NULL);
int i,j,centro;
float pivote,temp;
centro=(izq+der)/2;
if(*(a+izq)>*(a+centro)){
temp=*(a+centro);
*(a+centro)=*(a+izq);
*(a+centro)=temp;
}
if(*(a+centro)>*(a+der)){
temp=*(a+centro);
*(a+centro)=*(a+der);
*(a+der)=temp;
}
if(*(a+centro)>*(a+der)){
temp=*(a+centro);
*(a+centro)=*(a+izq);
*(a+izq)=temp;
}
i=izq;
j=der;
pivote=*(a+centro);

while(i<=j){
while(*(a+i)<pivote)i++;
while(*(a+j)>pivote)j--;
if(i<=j){
temp=*(a+i);
*(a+i)=*(a+j);
*(a+j)=temp;
i++;
j--;
}
}

final =time(NULL);
long int t=0;
t=t+difftime(final,comienzo);
cout<<"El tiempo empleado es: "<<t;
//getch();

if(izq<j)quicksort(a,izq,j);
if(i<der){quicksort(a,i,der);}

}

void main(){
float vector[lim];
long int i=0;
int izq=0;
char op;
do{
switch(op=menu()){
case '1': escogervector(&i);
break;
case '2': generarvector(&vector[0],i);
break;
case '3': vervector(&vector[0],i);
break;
case '4': ordxselecion(&vector[0],i);
break;
case '5': ordxinsercion(&vector[0],i);
break;
case '6': ordxintercambio(&vector[0],i);
break;
case '7': quicksort(&vector[0],izq,i-1);
getch();
break;
}
}while(op!='0');
}
//Ejercicio Punteros 05
/*
Este ejemplo realiza el siguiente menú:

[1] Insertar
[2] Eliminar
[3] Ver vector
[4] Modificar vector
[5] Media aritmética
[6] Ver elementos mayores a la media
[7] Promedio de los elementos menores de la media
[0] Salir
*/

//Vectores

#include<iostream.h>
#include<conio.h>

char menu(){
clrscr();
char op;
cout<<"MENU PRINCIPAL";
cout<<"\n--------------";
cout<<"\n[1] Insertar";
cout<<"\n[2] Eliminar";
cout<<"\n[3] Ver vector";
cout<<"\n[4] Modificar vector";
cout<<"\n[5] Media aritmetica";
cout<<"\n[6] Ver elementos mayores a la media";
cout<<"\n[7] Promedio de los elementos menores de la media";
cout<<"\n[0] Salir";
cout<<"\nEliga una opcion: ";
cin>>op;
return op;
}
void insertar(int *n,float *v){
clrscr();
float elemento;
int pos;
*n=*n+1;
do{
cout<<"Ingrese posicion del elemento a insertar: ";
cin>>pos;
}while(pos>*n || pos<=0);
cout<<"Ingrese valor del elemento a insertar: ";
cin>>elemento;
pos=pos-1; //para cuando use (pos<=0), sirve para q las posiciones comienzen desde 1,2,3

if(*n!=0){
for(int i=*n-1;i>pos;i--){
*(v+i)=*(v+i-1);
}
}
*(v+pos)=elemento;
}
void eliminar(int *n,float *v){
clrscr();
int pos;
do{
cout<<"Ingrese posicion del elemento a eliminar: ";
cin>>pos;
}while(pos<=0||pos>*n);
pos=pos-1; //para que q las posiciones comienzen desde 1,2,3
if(pos==*n-1){
*n=*n-1;
}
else{
for(int i=pos;i<*n-1;i++){
*(v+i)=*(v+i+1);
}
*n=*n-1;
}
}
void vervector(int n,float *v){
clrscr();
for(int i=0;i<n;i++){
cout<<"Elemento "<<(i+1)<<" : "<<*(v+i)<<endl;
}
getch();
}
void modificar(float *v,int n){
clrscr();
int pos;
float elemento;
do{
cout<<"Ingrese posicion del elemento a modificar: ";
cin>>pos;
}while(pos<=0||pos>n);
cout<<"Ingrese nuevo valor: ";
cin>>elemento;
*(v+pos-1)=elemento;

}
void media(int n, float *v){
clrscr();
float suma=0;
for(int i=0;i<n;i++){
suma=suma+*(v+i);
}
cout<<"La media aritmetica es: "<<(suma/n);
getch();
}
void mayoresmedia(int n, float *v){
clrscr();
float suma=0;
for(int i=0;i<n;i++){
suma=suma+*(v+i);
}
suma=suma/n;
for(int i=0;i<n;i++){
if(*(v+i)>suma){
cout<<"Elemento "<<(i+1)<<" : "<<*(v+i)<<endl;
}
}
getch();
}
void promedio(int n, float *v){
clrscr();
float suma=0,prom=0,c=0;
for(int i=0;i<n;i++){
suma=suma+*(v+i);
}
suma=suma/n;
for(int i=0;i<n;i++){
if(*(v+i)<suma){
prom=prom+*(v+i);
c++;
}
}
cout<<"El promedio de los elementos menores de la media: "<<(prom/c);
getch();
}
void main(){
int ne=0; //N° de elementos
float vector[100];
char op;
do{
switch(op=menu()){
case'1': insertar(&ne,&vector[0]);
break;
case'2': eliminar(&ne,&vector[0]);
break;
case'3': vervector(ne,&vector[0]);
break;
case'4': modificar(&vector[0],ne);
break;
case'5': media(ne,&vector[0]);
break;
case'6': mayoresmedia(ne,&vector[0]);
break;
case'7': promedio(ne,&vector[0]);
break;
}

}while(op!='0');
}
//Ejercicio Punteros 16
//Este programa permite sumar el número de elementos positivos y el de negativos de un vector.

//Vectores
#include<iostream.h>
#include<conio.h>

char menu(){
clrscr();
char op;
cout<<"MENU PRINCIPAL";
cout<<"\n--------------";
cout<<"\n[1] Insertar vector";
cout<<"\n[2] Suma de elementos positivos";
cout<<"\n[3] suma de elementos negativos";
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
clrscr();
}while(pos>*n || pos<=0);
clrscr();
cout<<"Ingrese valor del elemento a insertar: ";
cin>>elemento;
pos=pos-1; //para cuando use (pos<=0), sirve para q las posiciones comienzen desde 1,2,3

if(*n!=0){
for(int i=*n;i>pos;i--){
*(v+i)=*(v+i-1);
}
}
*(v+pos)=elemento;
}

void sumapos(int n,float *v){
clrscr();
float suma=0;
for(int i=0;i<n;i++){
if(*(v+i)>0){
suma=suma+*(v+i);
}
}
cout<<"La suma de los elementos positivos es: "<<suma;
getch();
}
void sumaneg(int n,float *v){
clrscr();
float suma=0;
for(int i=0;i<n;i++){
if(*(v+i)<0){
suma=suma+*(v+i);
}
}
cout<<"La suma de los elementos positivos es: "<<suma;
getch();
}
void main(){
int ne=0; //N° de elementos
float vector[100]; //los numeros pueden ser decimales
char op;
do{
switch(op=menu()){
case'1': insertar(&ne,&vector[0]);
break;
case'2': sumapos(ne,&vector[0]);
break;
case'3': sumaneg(ne,&vector[0]);
break;
}

}while(op!='0');
}
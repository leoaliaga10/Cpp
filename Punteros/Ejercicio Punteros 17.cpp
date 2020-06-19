//Ejercicio Punteros 17
//Una empresa que tiene 10 almacenes y necesita crear un algoritmo que lea las ventas mensuales de los 10 almacenes, calcule la media de ventas y obtenga un listado de los almacenes cuyas ventas mensuales son superiores a la media.

//Vectores
#include<iostream.h>
#include<conio.h>

char menu(){
char op;
clrscr();
cout<<"MENU PRINCIPAL"<<endl;
cout<<"--------------"<<endl;
cout<<"[1] Leer ventas"<<endl;
cout<<"[2] Media de las ventas"<<endl;
cout<<"[3] Ver ventas mayores que la media"<<endl;
cout<<"[0] Salir"<<endl;
cout<<"Elegir una opcion: ";
cin>>op;
return op;
}
void leerventas(float *v,int n){
clrscr();
for(int i=0;i<n;i++){
cout<<"Ventas de tienda "<<(i+1)<<" : ";
cin>>*(v+i);
}
}

void media(float *v,int n){
clrscr();
float media=0;
for(int i=0;i<n;i++){
media=media+*(v+i);
}
cout<<"Le media de las ventas es: "<<media/n;
getch();
}
void mayoresmedia(float *v,int n){
clrscr();
cout<<"VENTAS MAYORES QUE LA MEDIA "<<endl<<endl;
float media=0;
for(int i=0;i<n;i++){
media=media+*(v+i);
}
media=media/n;
for(int i=0;i<n;i++){
if(*(v+i)>media){
cout<<"Ventas de tienda "<<(i+1)<<" : "<<*(v+i)<<endl;
}
}
getch();
}

void main(){
char r;
const int a=10;
float vector[a]; //ventas decimales
do{
switch(r=menu()){
case '1':
leerventas(&vector[0],a);
break;
case '2':
media(&vector[0],a);
break;
case '3':
mayoresmedia(&vector[0],a);
break;
}
}while(r!='0');
}
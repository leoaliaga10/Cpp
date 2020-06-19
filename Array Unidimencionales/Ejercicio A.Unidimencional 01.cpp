//Ejercicio A.Unidimencional 01
//Esta aplicación nos brinda un ejemplo de vectores con el siguiente menú:
/*
[1] Leer numero de datos del vector A
[2] Leer numero de datos del vector B
[3] Leer el vector A
[4] Leer el vector B
[5] Visualizar vector A
[6] Visualizar vector B
[7] Insertar el vector B en el vector A
[0] Salir
*/

#include<iostream.h>
#include<conio.h>
float vectora[20],vectorb[5];
char menu(){
char r;
clrscr();
cout<<"Menu principal"<<endl;
cout<<"[1] Leer numero de datos del vector A"<<endl;
cout<<"[2] Leer numero de datos del vector B"<<endl;
cout<<"[3] Leer el vector A"<<endl;
cout<<"[4] Leer el vector B"<<endl;
cout<<"[5] Visualizar vector A"<<endl;
cout<<"[6] Visualizar vector B"<<endl;
cout<<"[7] Insertar el vector B en el vector A"<<endl;
cout<<"[0] Salir"<<endl;
cout<<"Elegir una opcion: ";
cin>>r;
return r;

}
float leerdato(char *s){
float x;
clrscr();
cout<<s;
cin>>x;
return x;
}
void leervectora(float x){
clrscr();
for (int i=0;i<x;i++){
cout<<"Ingresa elemento: ";
cin>>vectora[i];
}

}
void leervectorb(float x){
clrscr();
for (int i=0;i<x;i++){
cout<<"Ingresa elemento: ";
cin>>vectorb[i];
}

}
void vervectora(float x){
clrscr();
for (int i=0;i<x;i++){
cout<<vectora[i]<<endl;
}
getch();
}
void vervectorb(float x){
clrscr();
for (int i=0;i<x;i++){
cout<<vectorb[i]<<endl;
}
getch();
}

int insertar(int a,int b){
clrscr();
int x;
//float v[20];
x=leerdato("Ingrese posicion: ");
/*for(int i=0;i<a;i++){
v[i]=vectora[i];
} */
for(int i=a-1;i>=x-1;i--){
vectora[i+b]=vectora[i];
}
for(int i=b-1;i>=0;i--){
vectora[x+i-1]=vectorb[i];
}
for(int i=0;i<a+b;i++){
cout<<vectora[i]<<endl;
}
//for(int i=0;i<a+b;i++){
// vectora[i];
//}
/*for(int i=0;i<a;i++){
vectora[i]=v[i];
}*/
a=a+b;
getch();
return a;

}

void main(){
char r;
float a,b;
do{
r=menu();
switch(r){
case '1':
a=leerdato("Ingrese numero de elementos para el vector A: ");
break;
case '2':
b=leerdato("Ingrese numero de elementos para el vector B: ");
break;
case '3':
leervectora(a);
break;
case '4':
leervectorb(b);
break;
case '5':
vervectora(a);
break;
case '6':
vervectorb(b);
break;
case '7':
a=insertar(a,b);
break;
}
}while(r!='0');
}
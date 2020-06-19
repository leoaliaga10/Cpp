//Ejercicio Punteros 06
/*
Este programa es parecido al ejercicio 04, realiza el siguiente menú:

[1] Leer numero de datos del vector A
[2] Leer numero de datos del vector B
[3] Leer el vector A
[4] Leer el vector B
[5] Visualizar vector A
[6] Visualizar vector B
[7] Insertar el vector B en el vector A
[0] Salir


*/
//Vectores

#include<iostream.h>
#include<conio.h>

char menu(){
char op;
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
cin>>op;
return op;
}

void leerdato(char *s,int *n){
clrscr();
cout<<s;
cin>>*n;
}
void leervector(float *v,int n){
clrscr();
for(int i=0;i<n;i++){
cout<<"Elemento "<<(i+1)<<" : ";
cin>>*(v+i);
}
}

void vervector(float *v,int n){
clrscr();
for(int i=0;i<n;i++){
cout<<"Elemento "<<(i+1)<<" : "<<*(v+i)<<endl;
}
getch();
}
void insertar(float *va,float *vb,int *a,int *b){
clrscr();
int n;
leerdato("Ingrese posicion: ",&n);
for(int i=*a-1;i>=n-1;i--){
*(va+i+*b)=*(va+i);
}
for(int i=*b-1;i>=0;i--){
*(va+n+i-1)=*(vb+i);
}
for(int i=0;i<*a+*b;i++){
cout<<*(va+i)<<endl;
}
*a=*a+*b;
getch();
}
void main(){
char r;
float vectora[50],vectorb[10];
int a,b;
do{
r=menu();
switch(r){
case '1':
leerdato("Ingrese numero de elementos para el vector A: ",&a);
break;
case '2':
leerdato("Ingrese numero de elementos para el vector B: ",&b);
break;
case '3':
leervector(&vectora[0],a);
break;
case '4':
leervector(&vectorb[0],b);
break;
case '5':
vervector(&vectora[0],a);
break;
case '6':
vervector(&vectorb[0],b);
break;
case '7':
insertar(&vectora[0],&vectorb[0],&a,&b);
break;
}
}while(r!='0');
}
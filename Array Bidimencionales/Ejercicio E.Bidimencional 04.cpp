//Ejercicio E.Bidimencional 04
/*
En este programa leemos un vector A,y luego generamos una matriz cuadra con los elementos del vector, desarrollado con el siguiente menú:

[1] Leer numero A
[2] Leer vector
[3] Crear matriz
[4] Ver vector
[5] Ver matriz
[0] Salir
*/

#include<iostream.h>
#include<conio.h>

int matriz[1][20],vector[20][1],t[20][20];

char menu(){
clrscr();
char r;
cout<<"MENU PRINCIPAL"<<endl;
cout<<"[1] Leer numero A"<<endl;
cout<<"[2] Leer vector"<<endl;
cout<<"[3] Crear matriz"<<endl;
cout<<"[4] Ver vector"<<endl;
cout<<"[5] Ver matriz"<<endl;
cout<<"[0] Salir"<<endl;
cout<<"Elegir una opcion: ";
cin>>r;
return r;
}

int leerdato(char *s){
clrscr();
int x;
cout<<s;
cin>>x;
return x;
}

void leervector(int n){
clrscr();
for(int i=0;i<n;i++){
for(int j=0;j<1;j++){
cout<<"Elemento["<<(i+1)<<","<<(j+1)<<"]= ";
cin>>vector[i][j];
}
}
}

void crearmatriz(int n){
clrscr();
for(int i=0;i<1;i++){
cout<<endl;
for(int j=0;j<n;j++){
matriz[i][j]=vector[j][i];
}
}
for(int i=0;i<n;i++){
cout<<endl;
for(int j=0;j<n;j++){
t[i][j]=matriz[i][j];
}
}
//getch();
}

void vervector(int n){
clrscr();
for(int i=0;i<n;i++){
cout<<endl;
for(int j=0;j<1;j++){
cout<<"\t"<<vector[i][j];
}
}
getch();
}
void vermatriz(int n){
clrscr();
for(int i=0;i<n;i++){
cout<<endl;
for(int j=0;j<n;j++){
cout<<"\t"<<t[i][j];
}
}
getch();
}

void main(){
int n;
char r;
do{
r=menu();
switch(r){
case '1':
n=leerdato("Ingresar numero de elementos del vector A: ");
break;
case '2':
leervector(n);
break;
case '3':
crearmatriz(n);
break;
case '4':
vervector(n);
break;
case '5':
vermatriz(n);
break;
}
}while(r!='0');
}
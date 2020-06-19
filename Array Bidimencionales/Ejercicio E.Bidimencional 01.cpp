//Ejercicio E.Bidimencional 01
/*
Esta aplicación nos brinda un ejemplo sobre matrices en el siguiente menú:

[1]. Leer numero de filas
[2]. Leer numero de columnas
[3]. Leer matriz
[4]. Ver Matriz
[5]. Calcular la suma de la diagonal principal
[6]. Calcular la suma de la diagonal secundaria
[7]. Calcular suma de filas
[8]. Calcular suma de columnas
[0]. Salir
*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h> //para el uso de setw

int matriz[10][10];
int f=0,c=0;

char menu(){
clrscr();
char res;
cout<<"MENU PRINCIPAL"<<endl;
cout<<"--------------"<<endl;
cout<<"1. Leer numero de filas"<<endl;
cout<<"2. Leer numero de columnas"<<endl;
cout<<"3. Leer matriz"<<endl;
cout<<"4. Ver matriz"<<endl;
cout<<"5. Calcular la suma de la diagonal primcipal"<<endl;
cout<<"6. Calcular la suma de la diagonal secundaria"<<endl;
cout<<"7. Calcular la suma de filas"<<endl;
cout<<"8. Calcular la suma de columnas"<<endl;
cout<<"0. Salir"<<endl;
cout<<"Eliga una opcion: ";
cin>>res;
return res;
}

int leer(char *s){
clrscr();
int x;
cout<<s;
cin>>x;
return x;
}

void leermatriz(){
clrscr();
for(int i=0;i<f;i++){
for(int j=0;j<c;j++){
cout<<"Ingresar dato ["<<(i+1)<<"] ; ["<<(j+1)<<"] : ";
cin>>matriz[i][j];
}
}
}

/*void vermatriz(){
clrscr();
cout<<"Matriz"<<endl;
for(int i=0;i<f;i++){
for(int j=0;j<c;j++){
cout<<"["<<(i+1)<<"] ; ["<<(j+1)<<"] : "<<matriz[i][j]<<endl;
}
}
getch();
}*/

void vermatriz(){
clrscr();
cout<<"Matriz"<<endl;
for(int i=0;i<f;i++){
for(int j=0;j<c;j++){
cout<<setw(c)<<matriz[i][j]<<" ";
}
cout<<endl;
}
getch();
}

void diaprincipal(){
clrscr();
int s=0;
for(int i=0;i<f;i++){
s=s+matriz[i][i];
}
cout<<"Suma de la diagonal principal: "<<s;
getch();
}

void diasecundaria(){
clrscr();
int s=0;
int j=f-1;
for(int i=0;i<f;i++){
s=s+matriz[j][i];
j--;
}
cout<<"Suma de la diagonal secundaria: "<<s;
getch();
}

void sumafilas(){
clrscr();
int s=0;
for(int i=0;i<f;i++){
for(int j=0;j<c;j++){
s=s+matriz[i][j];
}
cout<<"La suma de las fila "<<(i+1)<<" es: "<<s<<endl;
s=0;
getch();
}

}

void sumacolumnas(){
clrscr();
int s=0;
for(int i=0;i<f;i++){
for(int j=0;j<c;j++){
s=s+matriz[j][i];
}
cout<<"La suma de las columna "<<(i+1)<<" es: "<<s<<endl;
s=0;
getch();
}
}

void main(){
char opc;
do{
opc=menu();
switch(opc){
case '1':{
f=leer("Ingrese numero de filas: ");
break;
}
case '2':{
c=leer("Ingrese numero de columnas: ");
break;
}
case '3':{
leermatriz();
break;
}
case '4':{
vermatriz();
break;
}
case '5':{
diaprincipal();
break;
}
case '6':{
diasecundaria();
break;
}
case '7':{
sumafilas();
break;
}
case '8':{
sumacolumnas();
break;
}
}
}while(opc!='0');
}
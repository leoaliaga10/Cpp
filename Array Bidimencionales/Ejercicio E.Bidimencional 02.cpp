//Ejercicio E.Bidimencional 02
/*
Esta aplicación nos brinda un ejemplo sobre matrices transpuesta con el siguiente menú:

[1] Leer numero de filas;
[2] Leer numero de columnas
[3] Leer matriz
[4] Ver matriz
[5] Transpuesta de la matriz
[0] Salir
*/
#include<iostream.h>
#include<conio.h>

int matriz[20][20],t[20][20];

char menu(){
clrscr();
char r;
cout<<"MENU PRINCIPAL"<<endl;
cout<<"[1] Leer numero de filas"<<endl;
cout<<"[2] Leer numero de columnas"<<endl;
cout<<"[3] Leer matriz"<<endl;
cout<<"[4] Ver matriz"<<endl;
cout<<"[5] Transpuesta de la matriz"<<endl;
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

void leermatriz(int f,int c){
clrscr();
for(int i=0;i<f;i++){
for(int j=0;j<c;j++){
cout<<"Elemento["<<(i+1)<<","<<(j+1)<<"]= ";
cin>>matriz[i][j];
}
}
}

void vermatriz(int f,int c){
clrscr();
for(int i=0;i<f;i++){
cout<<endl;
for(int j=0;j<c;j++){
cout<<"\t"<<matriz[i][j];
}
}
getch();
}

void tran(int f,int c){
clrscr();
for(int i=0;i<f;i++){
cout<<endl;
for(int j=0;j<c;j++){
t[i][j]=matriz[j][i];
cout<<"\t"<<t[i][j];
}
}
getch();
}

void main(){
int f,c;
char r;
do{
r=menu();
switch(r){
case '1':
f=leerdato("Ingresar filas: ");
break;
case '2':
c=leerdato("Ingresar columnas: ");
break;
case '3':
leermatriz(f,c);
break;
case '4':
vermatriz(f,c);
break;
case '5':
tran(f,c);
break;
}
}while(r!='0');
}
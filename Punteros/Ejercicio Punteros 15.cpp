//Ejercicio Punteros 15
/*
Esta aplicación genera un cuadrado latino de orden N. Un cuadrado latino de orden N es una matriz cuadrada en la que su primera fila contiene los N primeros números naturales y cada una de las siguientes N-1 filas contiene la rotación de la fila anterior un lugar a la derecha.

Ejemplo: Cuadrado latino de orden 4

1          2          3          4          
4          1          2          3          
3          4          1          2
2          3          4          1
*/

//Matrices
#include<iostream.h>
#include<conio.h>

char menu(){
clrscr();
char op;
cout<<"MENU PRINCIPAL";
cout<<"\n--------------";
cout<<"\n[1] Leer numero N";
cout<<"\n[2] Generar cuadrado latino";
cout<<"\n[0] Salir";
cout<<"\nEliga una opcion: ";
cin>>op;
return op;
}
void leerdato(char*s,int *n){
clrscr();
cout<<s;
cin>>*n;
}
void cuadrado(int *m,int n){
clrscr();
int k=1;
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(k>n){
k=1;
}
*(m+i*n+j)=k;
k++;
}
k=k-1;
}
for(int i=0;i<n;i++){
cout<<"\n";
for(int j=0;j<n;j++){
cout<<" "<<*(m+i*n+j);
}
}
getch();
}
void main(){
int n=0;
int matriz[100][100];
char op;
do{
switch(op=menu()){
case'1': leerdato("Ingrese numero N: ",&n);
break;
case'2': cuadrado(&matriz[0][0],n);
break;
}

}while(op!='0');
}
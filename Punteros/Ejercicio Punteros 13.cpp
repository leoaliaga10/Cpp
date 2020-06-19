//Ejercicio Punteros 13
/*
Este programa imprime un cuadrado mágico de dimensión N (Siendo N un número entero, positivo e impar)
Un cuadrado mágico de dimensión N es una matriz cuadrada de orden N, conteniendo los números naturales de 1 a n2, tal que coinciden la suma de los números naturales de cualquiera de las filas, columnas o diagonales principales.
El cuadrado se construye mediante las siguientes reglas:

EL número 1 se coloca en la casilla central de la primera fila.
Cada número siguiente se coloca en la casilla correspondiente a la fila anterior y columna posterior.
Si el número sigue a un múltiplo de N, no se aplica la regla anterior, sino que se coloca en la casilla de la fila posterior e igual columna.
Se considera que la fila anterior a la primera es la última, y la columna posterior a la última es la primera.
Por ejemplo el cuadrado mágico de dimensión 5 es:

17        24        1          8          15
23        5          7          14        16
4          6          13        20        22
10        12        19        21        3
11        18        25        2          9
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
cout<<"\n[2] Generar cuadrado perfecto";
cout<<"\n[0] Salir";
cout<<"\nEliga una opcion: ";
cin>>op;
return op;
}
void leerdato(char*s,int *n){
clrscr();
do{
cout<<s;
cin>>*n;
clrscr();
}while(*n%2==0 || *n<2);
}
void cuadrado(int *m,int n){
clrscr();
int i=2;
int j=n/2;
for(int c=1;c<=n*n;c++){
i--;
j++;
if (j>n){
j=1;
}
if(i<1){
i=n;
}
*(m+(i-1)*n+(j-1))=c;
if(c%n==0){
j--;
i=i+2;
}
}
for(int i=0;i<n;i++){
cout<<"\n";
for(int j=0;j<n;j++){
cout<<"\t"<<*(m+i*n+j);
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
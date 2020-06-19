//Ejercicio Funciones 01
//Esta aplicación, consiste en mostrar la factorización de un numero mediante funciones.

#include<iostream.h>
#include<conio.h>
char menu()
{
char resp;
clrscr();
cout<<"\n\tOPCIONES"<<endl;
cout<<"\t--------------"<<endl;
cout<<"\t(1) Leer dato A"<<endl;
cout<<"\t(2) Ver descomposicion factorial"<<endl;
cout<<"\t(3) Ver numeros pares menores que A"<<endl;
cout<<"\t(4) Ver numeros impares menores que A"<<endl;
cout<<"\t(5) Salir"<<endl;
cout<<"\tElija Opiccion: ";
cin>>resp;
return resp;
}

float leerdato(){
float x;
clrscr();
cout<<"Ingresar dato: ";
cin>>x;
return x;
}
void factorial(int x){
clrscr();
int i=2;
while(x>1){
if (x%i==0){
x=x/i;
cout<<i<<" ";
}
else{
i++;
}
}
getch();
}
void par(int x){
clrscr();
int i=0;
while(i<x-1){
i++;
if (i%2==0){
cout<<i<<" ";
}
}
getch();
}
void impar(int x){
clrscr();
int i=0;
while(i<x-1){
i++;
if (i%2!=0){
cout<<i<<" ";
}
}
getch();
}
void main()
{
char re;
int a;
do{
switch (re=menu()){
case '1': a=leerdato();
break;
case '2': factorial(a);
break;
case '3': par(a);
break;
case '4': impar(a);
break;
}
}while(re!='5');
}
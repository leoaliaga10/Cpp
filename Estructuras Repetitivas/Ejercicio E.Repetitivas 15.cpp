//Ejercicio E.Repetitivas 15
//Este programa que genera una lista de números primos, siendo N el dato de entrada que indica la cantidad de números primos a visualizar.

#include<iostream.h>
#include<conio.h>

int leerdato(){
int x;
cout<<"Ingresar N: ";
cin>>x;
cout<<"\n";
return x;
}

void primos(){
int i=1,n,c,d=1;
n=leerdato();
do{
c=0;
for(int a=1;a<=i;a++){
if (i%a==0){
c++;
}
}
if (c<=2){
cout<<i<<" ";
d++;
}
i++;

}while (d<=n);
}

void main(){
clrscr();
cout<<"N NUMEROS PRIMOS"<<endl;
cout<<"----------------"<<endl;
cout<<"\n";
primos();
getch();
}
//Ejercicio E.Repetitivas 06
//Este programa desarrolla un ejemplo que genera la tabla de multiplicar de un numero ingresado.

#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
cout<<"TABLA DE MULTIPLICAR"<<endl;
cout<<"--------------------"<<endl;
cout<<"\n";
int N,i=1,M;
cout<<"Ingresar dato: ";
cin>>N;
while (i<=12){
M=i*N;
cout<<i<<" X "<<N<<" = "<<M<<endl;
i++;
}

getch();
}
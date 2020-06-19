//Ejercicio E.Repetitivas 08
//Este programa factoriza un numero.

#include<iostream.h>
#include<conio.h>
main ()
{
int n,i;
cout<<"Ingresa un numero: ";
cin>>n;
i=2;
cout<<"\nNumero en factores: ";
while (i<=n){
if(n%i==0){
n=n/i;
cout<<i<<" ";
}
else {
i=i+1;
}
}
getch();
}
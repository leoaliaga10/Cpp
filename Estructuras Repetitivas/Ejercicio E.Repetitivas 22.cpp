//Ejercicio E.Repetitivas 22
//Este programa ingresa un numero y determina si es primo o no.

#include<iostream.h>
#include<conio.h>
main ()
{
int n,i,c;
cout<<"Ingresa un numero: ";
cin>>n;
c=0;
for (i=1;i<=n;i++){
if(n%i==0){
c++;
}
}
if (c==2){
cout<<"El numero es primo";
}
else{
cout<<"El numero no es primo";
}
getch();
}
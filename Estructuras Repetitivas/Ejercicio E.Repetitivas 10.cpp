//Ejercicio E.Repetitivas 10
//Este programa ingresar dos números y los multiplica mediante sumas susecivas.

#include<iostream.h>
#include<conio.h>
main()
{
int a,b,p,i=0;
cout<<"Ingresar el primer numero (a): ";
cin>>a;
cout<<"Ingresar el segundo numero (b): ";
cin>>b;
p=0;
do{
p=p+a;
i++;
}while (i<b);

cout<<"El Producto es: "<<p;
getch();
}
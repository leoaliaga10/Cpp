//Ejercicio E.Repetitivas 09
//Este programa pide ingresar un numero de términos para desarrollar igual numero de potencias de tres.

#include<iostream.h>
#include<conio.h>
#include<math.h>
main()
{
int n,N;
float S;
cout<<"Ingresar el nuemro de terminos: ";
cin>>N;
n=0;
do { S=pow(3,n);
cout<<"\t\t"<<S<<endl;
n++;
}while (N>n);
getch ();
}
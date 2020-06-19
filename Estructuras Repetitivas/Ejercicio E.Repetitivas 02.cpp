//Ejercicio E.Repetitivas 02
//Este programa desarrolla un ejemplo que nos muestra el mayor de N números ingresados.
 
#include<iostream.h>
#include<conio.h>
main()
{
int N,i=1,numero,mayor=0;
cout<<"Ingrese el numero de terminos: ";
cin >>N;
cout<<"\n";
while(N>0)
{
cout<<"Ingresar el "<<i<<"° numero: ";
cin >>numero;
i++;
N--;
if (numero>mayor){
mayor=numero;
}
}
cout<<"\nEl mayor de los numeros es: "<<mayor;
getch();
}
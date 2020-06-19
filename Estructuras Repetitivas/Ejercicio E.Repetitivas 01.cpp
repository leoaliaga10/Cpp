//Ejercicio E.Repetitivas 01
//En este programa leemos dos limites uno inferior y otro superior dentro de los cuales sumaremos los números pares y los impares y mostramos los resultados.

#include<iostream.h>
#include<conio.h>
main()
{
int P,i,li,ls;
cout<<"Ingrese el Limite Inferior: ";
cin >>li;
cout<<"Ingrese el Limite Exterior: ";
cin >>ls;
cout<<"\n";
P=0;
i=0;
while (li<ls-1)
{
li++;
if (li%2==0){
P=P+li;
}
else{
i=i+li;
}
}
cout<<"\nLa suma de los numeros pares es: "<<P;
cout<<"\nLa suma de los numeros impares es: "<<i;
getch();
}
//Ejercicio E.Repetitivas 04
//Esta aplicación lee un número determinado de notas luego verifica cuales son aprobatorias y cuales no y también cuales se encuentran entre 11 y 15.

#include<iostream.h>
#include<iostream.h>
#include<conio.h>
main()
{
int i,nota,A,B,D,N;
cout<<"Ingrese el numero de notas: ";
cin>>N;
i=1;A=0;B=0;D=0;
while (N>0)
{
cout<<"La "<<i<<" ° nota es: ";
cin>>nota;
i++;
if (0<=nota && nota<=10){
D++;
}
else if (11<=nota && nota<=15){
B++;
}
else if (16<=nota && nota<=20){
A++;
}
else { cout<<"Error";
}
N--;
}
cout<<"El numero de notas aprobatorias son: "<<(A+B)<<endl;
cout<<"El numero de notas desaprobatorias son: "<<D<<endl;
cout<<"El numero de notas entre 11 y 15 son: "<<B<<endl;
getch ();
}
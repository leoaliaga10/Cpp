//Ejercicio E.Repetitivas 14
//Este programa genera los N primeros términos dela serle: 1, 6, 10, 13, 15, 16,….

#include<iostream.h>
#include<conio.h>
main(){
int N,A,S,i;
cout<<"Ingresar el numero de terminos: ";
cin>>N;
cout<<"1 ";
A=5;S=1;
for (i=1;i<N;i++)
{S=S+A;
A--;
cout<<S<<" ";
}
getch();
}
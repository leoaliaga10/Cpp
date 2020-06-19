//Ejercicio E.Repetitivas 13
//Este programa ingresar dos números un menor y un mayor y genera los números comprendidos entre ellos.

#include<iostream.h>
#include<conio.h>
main(){
int N,n,M;
cout<<"Ingresar numero menor: ";
cin>>M;
cout<<"Ingresar numero mayor: ";
cin>>N;
for (n=M+1;n<N;n++)
{cout<<n<<" ";
}
getch();
}
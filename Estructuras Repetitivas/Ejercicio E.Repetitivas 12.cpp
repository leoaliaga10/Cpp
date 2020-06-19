//Ejercicio E.Repetitivas 12
//Este programa ingresar un numero N y desarrolla los múltiplos de tres de 1 hasta el numero ingresado (N).

#include<iostream.h>
#include<conio.h>
main(){
long int N,M,S;
cout<<"Ingresar un numero N: ";
cin>>N;
M=0;
S=0;
if (N%3==0){
M=M-1;
}
for (int i=1;i<=N;i++){
if (i%3==0){
M++;
}
}
cout<<"\nLos multiplos de 3 de 1 hasta "<<N<<" son: "<<M<<endl;
do{
S=S+3;
cout<<S<<" ";
}while(S<N-2);

getch();
}
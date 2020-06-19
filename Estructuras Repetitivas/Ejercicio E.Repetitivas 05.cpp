//Ejercicio E.Repetitivas 05
//En este programa nos adelantamos a la parte de funciones de usuario, también tratamos estructuras repetitivas; el ejercicio consiste en determinar los números perfectos menores que un número.

#include<iostream.h>
#include<conio.h>

void perfectos(int n){
int S,i;
for(int N=1;N<=n;N++){
S=0;
i=N-1;

while(i!=0){
if((N%i)==0){
S=S+i;
}
i--;
}
if(S==N){
cout<<N<<" ";
}
}

}

void main(){
clrscr();
int n;
cout<<"NUMEROS PERFECTOS"<<endl;
cout<<"-----------------"<<endl;
cout<<"\nIngrese numero : ";
cin>>n;
perfectos(n);
getch();
}
//Ejercicio E.Repetitivas 16
//Este programa calcula e imprime los números perfectos menores que 1000. Un número es perfecto si la suma de sus divisores, excepto el mismo, es igual al propio número.

#include<iostream.h>
#include<conio.h>

void perfectos(){
int S,i;
for(int N=1;N<=1000;N++){
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
cout<<"NUMEROS PERFECTOS MENORES QUE MIL"<<endl;
cout<<"---------------------------------"<<endl;
cout<<"\nSon: ";
perfectos();
getch();
}
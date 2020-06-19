//Ejercicio E.Repetitivas 11
//Esta aplicación nos pide ingresar un numero de términos, un numero X y cada uno de los términos, el programa verifica cuantos de estos términos son múltiplos de X, cuantos impares hay ingresados, y cual es el promedio de todos los números.

#include<iostream.h>
#include<conio.h>
main(){
int x,M,I,i,A;
float P,S,N;
cout<<"Ingresar numero de terminos: ";
cin>>N;
cout<<"\nIngresar numero X: ";
cin>>x;
cout<<"\n";
M=0; S=0; I=0;
for (i=1;i<=N;i++)
{ cout<<"el "<<i<<" numero es: ";
cin>>A;
if (A%x==0){
M++;
}
if (A%2!=0){
I++;
}
S=S+A;
}
P=S/N;
cout<<"Los multiplos de X son: "<<M<<endl;
cout<<"Los numeros impares son : "<<I<<endl;
cout<<"El promedio es: "<<P<<endl;
getch();

}
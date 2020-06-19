//Ejercicio A.Unidimencional 04
//En este programa leemos un numero de notas para el grupo A,luego pide que ingresemos cada nota, se repite el mismo proceso para el grupo B. para que al final nos muestre cual de los dos es el grupo mas eficiente.

#include<iostream.h>
#include<conio.h>

void ingresar(int [],int);
float promedio(int [],int);

void main(){
int nota[100],notab[100],n,m;
cout<<"\nINGRESE EL NUMERO DE NOTAS DEL GRUPO A: ";
cin>>n;
cout<<endl;
ingresar(nota,n);
cout<<"\nINGRESE EL NUMERO DE NOTAS DEL GRUPO B: ";
cin>>m;
cout<<endl;
ingresar(notab,m);
if (promedio(nota,n)>promedio(nota,m)){
cout<<"\nEL GRUPO A ES EL MAS EFICIENTE";
}
else if(promedio(nota,n)==promedio(nota,m)){
cout<<"\nEL GRUPO A ES IGUAL AL GRUPO B";
}
else{
cout<<"\nEL GRUPO B ES EL MAS EFICIENTE";
}
getch();
}

void ingresar(int nota[],int n){
for(int i=1;i<=n;i++){
cout<<"Ingrese nota "<<i<<" : ";
cin>>nota[i];
}
}

float promedio(int nota[],int n){
int suma=0;
for(int i=0;i<=n;i++){
suma=suma+nota[i];
}
return (float)suma/n;

}
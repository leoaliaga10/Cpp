//Ejercicio Funciones 02
// Esta aplicación utiliza una función para leer dato N y la misma para leer los N números.

#include<iostream.h>
#include<conio.h>
float leerdato(){
float x;

cout<<"Ingresar dato: ";
cin>>x;
return x;
}
void main()
{
int n,max,min,temp;

n=leerdato();
max=min=leerdato();
for (int i=1;i<n;i++){
temp=leerdato();
if (max<temp){
max=temp;
}
if (min>temp){
min=temp;
}
}
cout<<"Maximo= "<<max<<" y "<<"Minimo= "<<min;
getch();
}
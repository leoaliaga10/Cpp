//Ejercicio E.Repetitivas 03
//En esta aplicación calculamos la suma de los N términos de la serie (1-1/2+1/3-1/4+1/5-...).

#include<conio.h>
#include<math.h>
void main()
{
int n;
float S,T,x;
cout<<"Ingrese el numero de terminos: ";
cin >>n;
x=0;
S=0;
while (n>=x+1)
{
x++;
T=((1/x))*pow((-1),x+1);
S=S+T;
}
cout<<"La suma de los terminos de la serie (1-1/2+1/3-1/4+1/5-1/6...) es: "<<S;
getch();
}
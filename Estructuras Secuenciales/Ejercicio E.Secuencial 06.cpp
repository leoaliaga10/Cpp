//Ejercicio E.Secuencial 06
//Este programa desarrolla el teorema del coseno, que es usado para averiguar el tercer lado de un triángulo sabiendo los otros dos y además el ángulo que estos forman (en radianes).

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main(){
double a; //debido a que puede tener muchos digitos el resultado
float b,c,ang;
cout<<"Ingrese lados conocidos del triangulo: ";
cin>>b>>c;
cout<<"Ingrese el angulo que forman (en radianes): ";
cin>>ang;
a=sqrt(b*b+c*c-2*c*b*cos(ang));
cout<<"El lado desconocido es: "<<a;
getch();
}
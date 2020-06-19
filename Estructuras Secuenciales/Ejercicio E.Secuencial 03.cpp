//Ejercicio E.Secuencial 03
//Esta aplicación lee tres ángulos y un lado de un triángulo y luego determinamos los otros dos ángulos.

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main(){
float L1,L2,L3,A,B,C;
const float pi=3.14159265;
cout<<"Ingresa 3 angulos: ";
cin>>A>>B>>C;
cout<<"Ingrese un lado del triangulo: ";
cin>>L1;
L2=L1*(sin(B*pi/180))/sin(A*pi/180);
L3=L1*(sin(C*pi/180))/sin(A*pi/180);
cout<<"Los otros lados del triangulo son: "<<L2<<" y "<<L3;
getch();
}
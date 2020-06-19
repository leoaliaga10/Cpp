//Ejercicio E.Secuencial 04
//Este ejemplo lee el numero de lados de cualquier polígono regular y además lee la medida del lado y nos presenta el área.
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main(){
int n;
float L,S;
const float pi=3.14159265;
cout<<"Ingresa el numero de lados del poligono: ";
cin>>n;
cout<<"Ingrese la medida del lado: ";
cin>>L;
S=0.25*n*L*L*(1/(tan(pi/n)));
cout<<"El area es: "<<S<<" Unidades Cuadradas";
getch();
}
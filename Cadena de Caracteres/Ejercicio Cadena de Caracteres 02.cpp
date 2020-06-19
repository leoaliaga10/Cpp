//Ejercicio Cadena de Caracteres 02
//Esta aplicación genera el código ASCII.

#include<iostream.h>
#include<conio.h>
//#include<iomanip.h>

void ascii(){
for (int i=0;i<=255;i++){
//cout<<setw(3)<<i<<" "<<(char)i<<"\t";
cout<<i<<" "<<(char)i<<"\t";

}
}

void main (){
ascii();
getch();
}
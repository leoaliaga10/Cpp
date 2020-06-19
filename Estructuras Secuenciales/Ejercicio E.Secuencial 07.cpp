//Ejercicio E.Secuencial 07
//En este programa, distribuimos una cantidad de dinero en billetes de 20,10,5,1 y monedas de 0.50, 0.20, 0.10, 0.05 y 0.01.

#include<iostream.h>
#include<conio.h>
void main(){
float cantidad,dec;
long parent,pardec;
unsigned int b20,b10,b5,b1,m50,m20,m10,m5,m1;
cout<<"Ingrese cantidad: ";
cin>>cantidad;
parent=int(cantidad); //Separamos la parte entera de la cantidad ingresada
dec=cantidad-parent;
//Distribucion de la parte entera
b20=parent/20;
parent=parent%20;
b10=parent/10;
parent=parent%10;
b5=parent/5;
parent=parent%5;
b1=parent/1;
//Distribucion de la parte decimal
pardec=int(dec*1000);
m50=pardec/500;
pardec=pardec%500;
m20=pardec/200;
pardec=pardec%200;
m10=pardec/100;
pardec=pardec%100;
m5=pardec/50;
pardec=pardec%50;
m1=pardec/10;
cout<<"<<<<<Resultados>>>>>"<<endl<<endl
<<"Billetes de 20 : "<<b20<<endl
<<"Billetes de 10 : "<<b10<<endl
<<"Billetes de 5 : "<<b5<<endl
<<"Billetes de 1 : "<<b1<<endl<<endl
<<"Monedas de 50 centavos : "<<m50<<endl
<<"Monedas de 20 centavos : "<<m20<<endl
<<"Monedas de 10 centavos : "<<m10<<endl
<<"Monedas de 5 centavos : "<<m5<<endl
<<"Monedas de 1 centavo : "<<m1<<endl;
getch(); //Para mostrar los resultados en pantalla
}
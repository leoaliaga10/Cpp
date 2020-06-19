//Ejercicio Punteros 12
/*
Este programa lee un vector de notas como en el case anterior y realiza las siguientes operaciones:

[1] Leer notas
[2] ver notas
[3] Media aritmética
[4] Moda
[5] Mediana
[6] Desviación típica
[0] Salir
*/

//Vectores
//La funcion para obtener la moda no es muy optima pero sirve 
#include<iostream.h>
#include<conio.h>
#include<math.h>
char menu(){
clrscr();
char op;
cout<<"MENU PRINCIPAL";
cout<<"\n--------------";
cout<<"\n[1] Leer notas";
cout<<"\n[2] ver notas";
cout<<"\n[3] Media aritmetica";
cout<<"\n[4] Moda";
cout<<"\n[5] Mediana";
cout<<"\n[6] Desviacion tipica";
cout<<"\n[0] Salir";
cout<<"\nEliga una opcion: ";
cin>>op;
return op;
}
void leernotas(float *v,int *i){
clrscr();
do{
cout<<"Ingresar nota "<<(*i+1)<<" : ";
cin>>*(v+*i);
*i=*i+1;
}while(0<=*(v+*i-1)&&*(v+*i-1)<=20);
*i=*i-1;
}
void vernotas(float *v,int n){
clrscr();
for(int i=0;i<n;i++){
cout<<"Nota "<<(i+1)<<" : "<<*(v+i)<<endl;
}
getch();

}
void media(float *v,int n){
clrscr();
float media=0;
for(int i=0;i<n;i++){
media=media+*(v+i);
}
cout<<"La media aritmetica es: "<<(media/n);
getch();
}
void moda(float *v,int *n){
clrscr();
int c,m=0,x=-5;
for (int i=0;i<*n;i++){
c=0;
for(int j=i+1;j<*n;j++){

if(*(v+i)==*(v+j)){
c++;
if(c>m){
m=c;
x=i;
}
}
}
}
if (x!=-5){
cout<<"La moda es "<<*(v+x)<<endl;
}
else{
cout<<"La moda no existe "<<endl;
}
getch();
}
void mediana(float *v,int n){
clrscr();
int k;
float T;
for(int i=0;i<n-1;i++){
k=i;
T=*(v+i);
for(int j=i+1;j<n;j++){
if(*(v+j)<T){
k=j;
T=*(v+j);
}
}
*(v+k)=*(v+i);
*(v+i)=T;
}
if(n%2==0){
cout<<"La mediana es: "<<*(v+n/2-1)<<" y "<<*(v+n/2);
}
if(n%2!=0){
cout<<"La mediana es: "<<*(v+n/2);
}
getch();
}
void desviacion(float *v,int n){
clrscr();
float suma=0,m,numerador=0;
for(int i=0;i<n;i++){
suma=suma+*(v+i);
}
m=suma/n;
for(int i=0;i<n;i++){
numerador=numerador+pow((*(v+i)-m),2);
}
cout<<"La desviacion tipica es: "<<sqrt(numerador/n);
getch();
}
void main(){
float vector[100]; // Las notas pueden ser con decimales
int i=0;
char op;
do{
switch(op=menu()){
case '1': leernotas(&vector[0],&i);
break;
case '2': vernotas(&vector[0],i);
break;
case '3': media(&vector[0],i);
break;
case '4': moda(&vector[0],&i);
break;
case '5': mediana(&vector[0],i);
break;
case '6': desviacion(&vector[0],i);
break;
}
}while(op!='0');
}
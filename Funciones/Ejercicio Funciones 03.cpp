//Ejercicio Funciones 03
//Esta aplicación lee dos números, y mediante funciones los suma, resta, multiplica y divide.

#include<iostream.h>
#include<conio.h>
char menu()
{
char resp;
clrscr();
cout<<"\n\tMENU PRINCIPAL"<<endl;
cout<<"\t--------------"<<endl;
cout<<"\t(1) Leer datos"<<endl;
cout<<"\t(2) Sumar"<<endl;
cout<<"\t(3) Restar"<<endl;
cout<<"\t(4) Multiplicar"<<endl;
cout<<"\t(5) Dividir"<<endl;
cout<<"\t(6) Visualizar resultados"<<endl;
cout<<"\t(7) Salir"<<endl;
cout<<"\tElija Opiccion: ";
cin>>resp;
return resp;
}

float leerdato(){
float x;
clrscr();
cout<<"Ingresar datos: ";
cin>>x;
return x;
}
float sumar(float x, float y){
x+y;
return x+y;
}
float restar(float x, float y){
x-y;
return x-y;
}
float multiplicar(float x, float y){
x*y;
return x*y;
}
float dividir(float x, float y){
if(y==0){
cout<<"Division imposible";
return 0;
}
else {
return (x/y);
}
}
void visualizar(float a,float b,float s,float r,float m,float d){
clrscr();
cout<<"RESULTADOS"<<endl;
cout<<a<<" + "<<b<<" = "<<s<<endl;
cout<<a<<" - "<<b<<" = "<<r<<endl;
cout<<a<<" x "<<b<<" = "<<m<<endl;
if (b==0){
cout<<"Division por cero";
}
else {
cout<<a<<" / "<<b<<" = "<<d;
}
getch();

}

 

void main()
{
char re;
float a,b,s=0,r=0,m=0,d=0;
do{
re=menu();
if (re=='1') {
a=leerdato();
b=leerdato();
}
if(re=='2'){
s=sumar(a,b);
}
if(re=='3'){
r=restar(a,b);
}
if(re=='4'){
m=multiplicar(a,b);
}
if(re=='5'){
d=dividir(a,b);
}
if(re=='6'){
visualizar(a,b,s,r,m,d);
}

}while(re!='7');
}
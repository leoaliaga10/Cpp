//Ejercicio Estructuras o Registros 02
//Este programa lee registros con; nombre, fecha (correcta) y nota, luego se puede insertar mas registros y también eliminar registros.

#include<iostream.h>
#include<conio.h>
typedef char cadena[20];
typedef struct{
int dia;
int mes;
int anio;
}fecha;
typedef struct{
cadena nombre;
fecha fnaci;
float nota;
}alumno;
char menu(){
clrscr();
char op;
cout<<"MENU PRINCIPAL";
cout<<"\n--------------";
cout<<"\n[1] Leer numero de datos";
cout<<"\n[2] Leer datos";
cout<<"\n[3] Ver datos";
cout<<"\n[4] Insertar dato";
cout<<"\n[5] Eliminar dato";
cout<<"\n[0] Salir";
cout<<"\nEliga una opcion: ";
cin>>op;
return op;
}
void leerdato(int *n){
clrscr();
do{
cout<<"Ingrese numero de elementos: ";
cin>>*n;
clrscr();
}while(*n<0);
}
void funcionfecha(int m,int a,int *d){
switch(m){
case 1:case 3:case 5:case 7:case 8:case 10:case 12:
*d=31;
break;
case 2: *d=28;
if (a % 4 == 0){
*d=29;
if (a % 100 == 0){
*d=28;
}
}
if (a % 400 == 0){
*d=29;
}break;
case 4:case 6:case 9:case 11:
*d=30;
}
}
void leervector(alumno *v,int n){
clrscr();
for(int i=0;i<n;i++){
clrscr();
cout<<"Ingrese nombre: ";
cin>>(v+i)->nombre;
cout<<endl;
cout<<"Ingrese fecha de nacimiento: "<<endl<<endl;
do{
cout<<"Año: ";
cin>>(v+i)->fnaci.anio;
}while((v+i)->fnaci.anio<1990 ||(v+i)->fnaci.anio>2007);
do{
cout<<"Mes: ";
cin>>(v+i)->fnaci.mes;
}while((v+i)->fnaci.mes<1 ||(v+i)->fnaci.mes>12 );
int d,m,a;
a=int((v+i)->fnaci.anio);
m=int((v+i)->fnaci.mes);
funcionfecha(m,a,&d);
do{
cout<<"Día: ";
cin>>(v+i)->fnaci.dia;
}while((v+i)->fnaci.dia<1 || (v+i)->fnaci.dia>d);
cout<<endl;
do{
cout<<"Ingrese nota: ";
cin>>(v+i)->nota;
}while((v+i)->nota<0 || (v+i)->nota>20);
}
}
void vervector(alumno *v,int n){
clrscr();
for(int i=0;i<n;i++){
cout<<"Nombre: "<<(i+1)<<" : "<<(v+i)->nombre<<endl;
cout<<"Fecha de nacimiento: "<<(v+i)->fnaci.dia<<" - "<<(v+i)->fnaci.mes<<" - "<<(v+i)->fnaci.anio<<endl;
cout<<"Nota: "<<(i+1)<<" : "<<(v+i)->nota<<endl<<endl;
}
getch();
}
void insertar(alumno *v,int *n){
clrscr();
int pos;
do{
clrscr();
cout<<"Ingrese posicion: ";
cin>>pos;
}while(pos<0||pos>*n);
if (pos==*n){
*n=*n+1;
}
else{
for(int i=*n;i>pos;i--){
*(v+i)=*(v+i-1);
}
*n=*n+1;
}
alumno temp;
clrscr();
cout<<"Ingrese nombre: ";
cin>>temp.nombre;
cout<<"Ingrese fecha de nacimiento: "<<endl<<endl;
do{
cout<<"Año: ";
cin>>temp.fnaci.anio;
}while(temp.fnaci.anio<1);
do{
cout<<"Mes: ";
cin>>temp.fnaci.mes;
}while(temp.fnaci.mes<1 ||temp.fnaci.mes>12 );
int d=28;
switch(temp.fnaci.mes){
case 1:
d=31;
break;
case 2:
if (temp.fnaci.anio% 4 == 0){
d=29;
if (temp.fnaci.anio % 100 == 0){
d=28;
}
}
if (temp.fnaci.anio % 400 == 0){
d=29;
}break;
case 3:d=31;break;
case 4:d=30;break;
case 5:d=31;break;
case 6:d=30;break;
case 7:d=31;break;
case 8:d=31;break;
case 9:d=30;break;
case 10:d=31;break;
case 11:d=30;break;
case 12:d=31;break;
}
do{
cout<<"Día: ";
cin>>temp.fnaci.dia;
}while(temp.fnaci.dia<1 || temp.fnaci.dia>d);
cout<<endl;
do{
cout<<"Ingrese nota: ";
cin>>temp.nota;
}while(temp.nota<0 || temp.nota>20);
*(v+pos)=temp;
}
void eliminar(alumno *v,int *n){
clrscr();
int pos;
do{
clrscr();
cout<<"Ingrese posicion: ";
cin>>pos;
}while(pos<0||pos>=*n);
if (pos==*n-1){
*n=*n-1;
}
else{
for(int i=pos;i<*n-1;i++){
*(v+i)=*(v+i+1);
}
*n=*n-1;
}
}
void main(){
alumno v[20];
int n=0;
char op;
do{
switch(op=menu()){
case'1': leerdato(&n);
break;
case'2': leervector(&v[0],n);
break;
case'3': vervector(&v[0],n);
break;
case'4': insertar(&v[0],&n);
break;
case'5': eliminar(&v[0],&n);
break;
}

}while(op!='0');
}
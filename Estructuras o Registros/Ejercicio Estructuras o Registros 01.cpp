//Ejercicio Estructuras o Registros 01
//Este programa lee registros (nombre, edad y nota), luego se puede insertar mas registros y también eliminar registros.

#include<iostream.h>
#include<conio.h>
typedef char cadena[20];
typedef struct{
cadena nombre; //char *nombre;
int edad;
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
void leervector(alumno *v,int n){
clrscr();
for(int i=0;i<n;i++){
cout<<"Ingrese nombre: ";
cin>>(v+i)->nombre;
cout<<"Ingrese edad: ";
cin>>(v+i)->edad;
cout<<"Ingrese nota: ";
cin>>(v+i)->nota;
}
}
void vervector(alumno *v,int n){
clrscr();
for(int i=0;i<n;i++){
cout<<"Nombre: "<<(i+1)<<" : "<<(v+i)->nombre<<endl;
cout<<"Edad: "<<(i+1)<<" : "<<(v+i)->edad<<endl;
cout<<"Nota: "<<(i+1)<<" : "<<(v+i)->nota<<endl<<endl;
}
getch();
}
void insertar(alumno *v,int *n){
clrscr();
int pos;
do{
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
cout<<"Ingrese nombre: ";
cin>>temp.nombre;
cout<<"Ingrese edad: ";
cin>>temp.edad;
cout<<"Ingrese nota: ";
cin>>temp.nota;
*(v+pos)=temp;
}
void eliminar(alumno *v,int *n){
clrscr();
int pos;
do{
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
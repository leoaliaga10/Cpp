//Ejercicio Estructuras o Registros 03
//Esta aplicación ordena los registros por nombre descendentemente.

#include<iostream.h>
#include<conio.h>
typedef char cadena[20];

typedef struct{
cadena nombre;
float sueldo;
}persona;

char menu(){
clrscr();
char opc;
cout<<"Menu Principal"<<endl;
cout<<"---------------"<<endl;
cout<<"(1)Leer numero: "<<endl;
cout<<"(2)Leer vector: "<<endl;
cout<<"(3)Ver vector: "<<endl;
cout<<"(4)Ordenar por nombre descendente: "<<endl;
cout<<"(0)Salir"<<endl;
cout<<"Elija una opcion: ";
cin>>opc;
return opc;
}

void leern(int*z){
clrscr();
do{
cout<<"Ingrese numero: ";
cin>>*z;
}while(*z<=0);
}

void leervector(persona*v,int n){
clrscr();
for(int i=0;i<n;i++){
cout<<"Ingrese nombre: ";
cin>>(v+i)->nombre;
cout<<"Ingrese sueldo: ";
cin>>(v+i)->sueldo;
}
}

void vervector(persona*v,int n){
clrscr();
for(int i=0;i<n;i++){
cout<<"Nombre: "<<(v+i)->nombre<<endl;
cout<<"Sueldo: "<<(v+i)->sueldo<<endl<<endl;
}
getch();
}

void ordnombredescend(persona*v,int n){
clrscr();
persona temp;
for(int i=0;i<n;i++){
for(int j=i;j<n;j++){
if(strcmpi((v+i)->nombre,(v+j)->nombre)<0){
temp=*(v+i);
*(v+i)=*(v+j);
*(v+j)=temp;
}
}
}
}

void main(){
clrscr();
persona v[20];
int n=0;
char opc;
do{
switch(opc=menu()){
case'1':leern(&n);
break;
case'2':leervector(&v[0],n);
break;
case'3':vervector(&v[0],n);
break;
case'4':ordnombredescend(&v[0],n);
break;
}
}while(opc!='0');
}
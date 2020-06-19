//Ejercicio Punteros 03
/*
Esta aplicación realiza un menú con las siguientes acciones:

[1] Leer N
[2] Leer vector
[3] Ver vector
[4] Insertar un elemento
[5] Ver posición del vector
[6] Salir
*/

#include<iostream.h>
#include<conio.h>

char menu(){
clrscr();
char op;
cout<<"MENU PRINCIPAL";
cout<<"\n--------------";
cout<<"\n[1] Leer N";
cout<<"\n[2] Leer vector";
cout<<"\n[3] Ver vector";
cout<<"\n[4] Insertar un elemento";
cout<<"\n[5] Ver posicion del vector";
cout<<"\n[6] Salir";
cout<<"\nEliga una opcion: ";
cin>>op;
return op;
}
void leerdato(int *z){
clrscr();
cout<<"Ingrese numero de datos: ";
cin>>*z;
}

void leervector(int *v,int n){
clrscr();
for(int i=0;i<n;i++){
cout<<"Dato: ";
cin>>*(v+i);
}
getch();
}

void vervector(int *v,int n){
clrscr();
for(int i=0;i<n;i++){
cout<<"Elemento: "<<(i+1)<<" : "<<*(v+i)<<endl;
}
getch();
}
void insertar(int *v,int *n){
clrscr();
*n=*n+1;
int x,y=0;
cout<<"Ingresar posicion: ";
cin>>x;
cout<<"\nIngresar numero: ";
cin>>y;
for(int i=*n-1;i>x;i--){
*(v+i)=*(v+i-1);
}
*(v+x)=y;

getch();
}
void verpo(int *v,int n){
clrscr();
int **temp;
temp=&v;
for(int i=0;i<n;i++){
cout<<(temp+i)<<endl;
}
getch();
}

void main(){
int vector[20],n;
char op;
do{
switch(op=menu()){
case'1': leerdato(&n);
break;
case'2': leervector(&vector[0],n);
break;
case'3': vervector(&vector[0],n);
break;
case'4': insertar(&vector[0],&n);
break;
case'5': verpo(&vector[0],n);
break;
}

}while(op!='6');
}
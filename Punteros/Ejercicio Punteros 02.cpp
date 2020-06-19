//Ejercicio Punteros 02
//Esta aplicación realiza un meno que lee un vector y muestra el vector y todo mediante punteros.

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
cout<<"\n[4] Salir";
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
cout<<"Dato: "<<*(v+i)<<endl;
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
}

}while(op!='4');
}
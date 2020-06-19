//Ejercicio Punteros 14
//Este programa lee un vector de N nombres y rota todos sus componentes un lugar hacia abajo. Teniendo en cuenta que el último componente se ha de desplazar al primer lugar en el vector.

//Vectores
#include<iostream.h>
#include<conio.h>
#include<string.h>
const int lim=50;
typedef char cad[lim];
char menu(){
clrscr();
char op;
cout<<"MENU PRINCIPAL"<<endl;
cout<<"--------------"<<endl;
cout<<"[1] Leer numero de nombres"<<endl;
cout<<"[2] Leer nombres"<<endl;
cout<<"[3] Ver nombres"<<endl;
cout<<"[4] Rotar nombres"<<endl;
cout<<"[0] Salir"<<endl;
cout<<"Elegir una opcion: ";
cin>>op;
return op;
}
void leerdato(int *n){
clrscr();
do{
cout<<"Ingrese numero de nombres: ";
cin>>*n;
}while(*n<0);
}
void leernombres(cad *nom,int n){
clrscr();
for(int i=0;i<n;i++){
cout<<"Ingrese nombre "<<(i+1)<<" : ";
cin>>*(nom+i);
}
}
void vernombres(cad *nom,int n){
clrscr();
for(int i=0;i<n;i++){
cout<<"Nombre "<<(i+1)<<" : "<<*(nom+i)<<endl;
}
getch();
}
void rotar(cad *nom,int n){
clrscr();
for (int i=n;i>=0;i--){
strcpy(*(nom+i),*(nom+i-1));
}
strcpy(*nom,*(nom+n));
}
void main(){
char r;
int a;
cad nombre[20];
do{
switch(r=menu()){
case '1':
leerdato(&a);
break;
case '2':
leernombres(&nombre[0],a);
break;
case '3':
vernombres(&nombre[0],a);
break;
case '4':
rotar(&nombre[0],a);
break;
}
}while(r!='0');
}
//Ejercicio Punteros 18
//Este programa permite leer N nombres y almacenarlos en un vector, y luego eliminar todos los nombres repetidos. 

//Tipo definido por usuario 
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
cout<<"[4] Eliminar repetidos"<<endl;
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
void eliminar(cad *nom,int *n){
clrscr();
for (int j=0;j<*n;j++){
for(int i=j+1;i<*n;i++){
if(strcmpi(*(nom+j),*(nom+i))==0){
for(int k=i;k<*n;k++){
strcpy(*(nom+k),*(nom+k+1));
}
*n=*n-1;
i=j;
}
}
}
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
eliminar(&nombre[0],&a);
break;
}
}while(r!='0');
}
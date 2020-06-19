//Ejercicio Punteros 04
//Este ejemplo lee dos vectores (A y B) elemento por elemento desde la posición 1, si insertamos posición equivocada no lee el dato, luego inserta el vector B en el vector A, todo con punteros.

//Vectores

#include<iostream.h>
#include<conio.h>

char menu(){
clrscr();
char op;
cout<<"MENU PRINCIPAL";
cout<<"\n--------------";
cout<<"\n[1] Leer vector A";
cout<<"\n[2] leer vector B";
cout<<"\n[3] Ver vector A";
cout<<"\n[4] Ver vector B";
cout<<"\n[5] Insertar vector B en vector A";
cout<<"\n[0] Salir";
cout<<"\nEliga una opcion: ";
cin>>op;
return op;
}
void leervector(int *n,float *v){
clrscr();
float elemento;
int pos;
*n=*n+1;
do{
cout<<"Ingrese posicion del elemento a insertar: ";
cin>>pos;
}while(pos>*n || pos<=0);
cout<<"Ingrese valor del elemento a insertar: ";
cin>>elemento;
pos=pos-1; //para cuando use (pos<=0), sirve para q las posiciones comienzen desde 1,2,3

if(*n!=0){
for(int i=*n;i>pos;i--){
*(v+i)=*(v+i-1);
}
}
*(v+pos)=elemento;
}
void vervector(int n,float *v){
clrscr();
for(int i=0;i<n;i++){
cout<<"Elemento "<<(i+1)<<" : "<<*(v+i)<<endl;
}
getch();
}
void insertar(float *va,float *vb,int *a,int *b){
clrscr();
int n;
cout<<"Ingrese posicion: ";
cin>>n;
for(int i=*a-1;i>=n-1;i--){
*(va+i+*b)=*(va+i);
}
for(int i=*b-1;i>=0;i--){
*(va+n+i-1)=*(vb+i);
}
for(int i=0;i<*a+*b;i++){
cout<<*(va+i)<<endl;
}
*a=*a+*b;
getch();
}
void main(){
int a=0,b=0; //N° de elementos
float vectora[100],vectorb[100];
char op;
do{
switch(op=menu()){
case'1': leervector(&a,&vectora[0]);
break;
case'2': leervector(&b,&vectorb[0]);
break;
case'3': vervector(a,&vectora[0]);
break;
case'4': vervector(b,&vectorb[0]);
break;
case'5': insertar(&vectora[0],&vectorb[0],&a,&b);
break;
}

}while(op!='0');
}
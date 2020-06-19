//Ejercicio Punteros 08
/*
Esta aplicación realiza el siguiente menú:

[1] Leer numero de filas
[2] Leer numero de columnas
[3] Leer matriz
[4] Ver matriz
[5] Insertar fila en la matriz
[6] Insertar columna en la matriz
[7] Eliminar fila en la matriz
[8] Eliminar columna en la matriz (*) 
[9] Modificar matriz
[0] Salir
*/
//Matrices
//La funcion eliminar columna no esta muy bien desarrollada

#include<iostream.h>
#include<conio.h>

char menu(){
clrscr();
char op;
cout<<"MENU PRINCIPAL";
cout<<"\n--------------";
cout<<"\n[1] Leer numero de filas";
cout<<"\n[2] Leer numero de columnas";
cout<<"\n[3] Leer matriz";
cout<<"\n[4] Ver matriz";
cout<<"\n[5] Insertar fila en la matriz";
cout<<"\n[6] Insertar columna en la matriz";
cout<<"\n[7] Eliminar fila en la matriz";
cout<<"\n[8] Eliminar columna en la matriz";
cout<<"\n[9] Modificar matriz";
cout<<"\n[0] Salir";
cout<<"\nEliga una opcion: ";
cin>>op;
return op;
}
void leerdato(char*s,int *n){
clrscr();
cout<<s;
cin>>*n;
}
void leermatriz(int *m,int f,int c){
clrscr();
for(int i=0;i<f;i++){
for(int j=0;j<c;j++){
cout<<"Ingrese elementos ["<<(i+1)<<";"<<(j+1)<<"]: ";
cin>>*(m+i*c+j);
}
}
}
void vermatriz(int *m,int f,int c){
clrscr();
for(int i=0;i<f;i++){
cout<<"\n";
for(int j=0;j<c;j++){
cout<<"\t"<<*(m+i*c+j);
}
}
getch();
}
void insertarf(int *m,int *f,int *c){
clrscr();
int pos;
do{
cout<<"Ingresar posicion de fila : ";
cin>>pos;
}while(pos>*f ||pos <=-1);
//pos=pos-1; //para empesar desde 1
if(*f==0){
cout<<"Ingrese numero de columnas de la matriz: ";
cin>>*c;
}
if(pos==*f){
*f=*f+1;
}
else{
for(int i=*f;i>pos;i--){
for(int j=*c;j>0;j--){
*(m+i*(*c)+j-1)=*(m+(i-1)*(*c)+j-1);
}
}
*f=*f+1;
}
for(int i=0;i<*c;i++){
cout<<"Dato: ";
cin>>*(m+pos*(*c)+i);
}

}
void insertarc(int *m,int *f,int *c){
int pos,k;
if(*f==0){
cout<<"ingrese el numero de filas ";
cin>>*f;
}
do{
clrscr();
cout<<"Ingrese Posicion ";
cin>>pos;
clreol();
}while(pos>*c || pos<0);
for(int i=*f-1;i>=0;i--){
k=1;
for(int j=*c;j>=0;j--){
if(pos==j){
*(m+i*(*c+1)+j)=0;
k=0;
}
else{
*(m+i*(*c+1)+j)=*(m+i*(*c)+j-k);
}
}
}
*c=*c+1;
for(int i=0; i<*f;i++){
cout<<"Ingrese valor ";
cin>>*(m+pos+i*(*c));
}
}
void eliminarf(int *m,int *f,int *c){
clrscr();
int pos;
do{
cout<<"Ingresar posicion de fila : ";
cin>>pos;
}while(pos>*f || pos<=0);
//pos=pos-1; //para empesar desde 1
if (pos==*f-1){
*f=*f-1;
}
else{
for(int i=pos+1;i<*f;i++){
for(int j=0;j<*c;j++){
*(m+(i-1)*(*c)+j)=*(m+i*(*c)+j);
}
}
}
*f=*f-1;
}
void eliminarc(int *m,int *f,int *c){
clrscr();
int pos;
do{
cout<<"Ingresar posicion de eliminar : ";
cin>>pos;
}while(pos>*f || pos<=0);
if (pos==*c-1){
*c=*c-1;
}
else{
for(int j=pos+1;j<*c;j++){
for(int i=0;i<*f;i++){
*(m+i*(*c)+j-1)=*(m+i*(*c)+j);
}
}
}
*c=*c-1;
}
void modificar(int *m,int *f,int *c){
clrscr();
int p1,p2,elemento;
do{
cout<<"Ingresar posicion de fila : ";
cin>>p1;
}while(p1>*f || p1<=0);
do{
cout<<"Ingresar posicion de columna : ";
cin>>p2;
}while(p2>*c || p2<=0);
cout<<"Ingresar elemento: ";
cin>>elemento;
for(int i=0;i<*f;i++){
for(int j=0;j<*c;j++){
*(m+p1*(*c)+p2)=elemento;
}
}
}
void main(){
int f=0,c=0;
int matriz[100][100];
char op;
do{
switch(op=menu()){
case'1': leerdato("Ingrese numero de filas: ",&f);
break;
case'2': leerdato("Ingrese numero de columnas: ",&c);
break;
case'3': leermatriz(&matriz[0][0],f,c);
break;
case'4': vermatriz(&matriz[0][0],f,c);
break;
case'5': insertarf(&matriz[0][0],&f,&c);
break;
case'6': insertarc(&matriz[0][0],&f,&c);
break;
case'7': eliminarf(&matriz[0][0],&f,&c);
break;
case'8': eliminarc(&matriz[0][0],&f,&c);
break;
case'9': modificar(&matriz[0][0],&f,&c);
break;
}

}while(op!='0');
}
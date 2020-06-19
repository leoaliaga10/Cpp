//Ejercicio Punteros 10
/*
Este programa lee una matriz cuadrada y realiza las siguientes operaciones:

[1]Leer orden de la matriz
[2]Leer matriz
[3]Ver promedio de cada fila y columna
[4]Convertir negativo a cero
[5]Ver Matriz
*/

//Matrices
#include<iostream.h>
#include<conio.h>

char menu(){
clrscr();
char opc;
cout<<"MENU PRINCIPAL"<<endl;
cout<<"--------------"<<endl;
cout<<"[1] Leer orden de la matriz"<<endl;
cout<<"[2] Leer matriz"<<endl;
cout<<"[3] Ver promedio de cada fila y columna"<<endl;
cout<<"[4] Convertir negativo a cero"<<endl;
cout<<"[5] Ver Matriz"<<endl;
cout<<"Elija una opcion: ";
cin>>opc;
return opc;
}
void leerdato(int *x,char *s){
clrscr();
do{
cout<<s;
cin>>*x;
}while(*x<0);

}
void leermatriz(int *m,int n){
clrscr();
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
cout<<"Ingrese dato ["<<(i+1)<<";"<<(j+1)<<"] :";
cin>>*(m+i*n+j);
}
}
}
void promedio(int*m,int n){
clrscr();
for(int i=0;i<n;i++){
float sf=0;
for(int j=0;j<n;j++){
sf=sf+*(m+i*n+j);
}
cout<<"Promedio de la fila "<<(i+1)<<" : "<<sf/n<<endl;
sf=0;
}
cout<<endl<<endl;
for(int i=0;i<n;i++){
float sc=0;
for(int j=0;j<n;j++){
sc=sc+*(m+i+j*n);
}
cout<<"Promedio de la columna "<<(i+1)<<" : "<<sc/n<<endl;
sc=0;
}
getch();
}
void convertir(int *m,int n){
clrscr();
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(*(m+i*n+j)<0){
*(m+i*n+j)=0;
}
}
}
}
void vermatriz(int *m,int n){
clrscr();
for(int i=0;i<n;i++){
cout<<endl;
for(int j=0;j<n;j++){
cout<<"\t"<<*(m+i*n+j);
}
}
getch();
}
void main(){
int m[100][100],n=0;
char opc;
do{
switch(opc=menu()){
case'1':
leerdato(&n,"Ingrese orden de la matriz: ");
break;
case'2':
leermatriz(&m[0][0],n);
break;
case'3':
promedio(&m[0][0],n);
break;
case'4':
convertir(&m[0][0],n);
break;
case'5':
vermatriz(&m[0][0],n);
break;

}
}while(opc!='0');
}
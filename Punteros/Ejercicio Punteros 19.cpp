//Ejercicio Punteros 19
//Este aplicación permite leer 2 matrices A, B y que me permita calcular A+B, A*B, A-B, A/B, A* constante para los casos que sea posible. El número de filas y columnas es ingresado por el usuario, el programa indica que operaciones no es posible realizar.


//Matrices
//La funcion para dividir la matriz no esta pero se puede implementar partiendo de la matriz inversa. 
#include<iostream.h>
#include<conio.h>

char menu(){
clrscr();
char op;
cout<<"MENU PRINCIPAL";
cout<<"\n--------------";
cout<<"\n[1] Leer numero de filas de la matriz A";
cout<<"\n[2] Leer numero de columnas de la matriz A";
cout<<"\n[3] Leer matriz A";
cout<<"\n[4] Leer numero de filas de la matriz B";
cout<<"\n[5] Leer numero de columnas de la matriz B";
cout<<"\n[6] Leer matriz B";
cout<<"\n[7] Sumar matrices";
cout<<"\n[8] Restar matrices";
cout<<"\n[9] Multiplicar matrices";
cout<<"\n[a] Dividir matrices";
cout<<"\n[b] Multiplicar la matriz A por una constante K";
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
void suma(int *ma,int *mb,int fa,int ca,int fb,int cb){
clrscr();
int suma[100][100],*ms;
ms=&suma[0][0];
if(fa==fb && ca==cb){
cout<<"Matriz resultado"<<endl;
for(int i=0;i<fa;i++){
cout<<endl;
for(int j=0;j<ca;j++){
*(ms+i*ca+j)=*(ma+i*ca+j)+*(mb+i*ca+j);
cout<<"\t"<<*(ms+i*ca+j);
}
}
}
else{
cout<<"No se puede realizar operacion";
}
getch();
}
void resta(int *ma,int *mb,int fa,int ca,int fb,int cb){
clrscr();
int resta[100][100],*mr;
mr=&resta[0][0];
if(fa==fb && ca==cb){
cout<<"Matriz resultado"<<endl;
for(int i=0;i<fa;i++){
cout<<endl;
for(int j=0;j<ca;j++){
*(mr+i*ca+j)=*(ma+i*ca+j)-*(mb+i*ca+j);
cout<<"\t"<<*(mr+i*ca+j);
}
}
}
else{
cout<<"No se puede realizar operacion";
}
getch();
}
void multiplicar(int *ma,int *mb,int fa,int ca,int fb,int cb){
clrscr();
int producto[100][100],*mp;
mp=&producto[0][0];
if(ca==fb){
cout<<"Matriz resultado"<<endl;
for(int i=0;i<fa;i++){
cout<<endl;
for(int j=0;j<cb;j++){
for(int k=0;k<ca;k++)
*(mp+i*cb+j)=*(mp+i*cb+j)+*(ma+i*ca+k)*(*(mb+k*cb+j));
cout<<"\t"<<*(mp+i*cb+j);
}
}
}
else{
cout<<"No se puede realizar operacion";
}
getch();
}
void porconstante(int *ma,int fa,int ca){
clrscr();
int p[100][100],*mp,k;
mp=&p[0][0];
cout<<"Ingrese constante: ";
cin>>k;
clrscr();
cout<<"Matriz resultado"<<endl;
for(int i=0;i<fa;i++){
cout<<endl;
for(int j=0;j<ca;j++){
*(mp+i*ca+j)=*(ma+i*ca+j)*k;
cout<<"\t"<<*(mp+i*ca+j);
}
}
getch();
}
void main(){
int fa=0,ca=0,fb=0,cb=0;
int matriza[100][100],matrizb[100][100]; //la matriz puede leer datos enteros
char op;
do{
switch(op=menu()){
case'1': leerdato("Ingrese numero de filas para matriz A: ",&fa);
break;
case'2': leerdato("Ingrese numero de columnas para matriz A: ",&ca);
break;
case'3': leermatriz(&matriza[0][0],fa,ca);
break;
case'4': leerdato("Ingrese numero de filas para matriz B: ",&fb);
break;
case'5': leerdato("Ingrese numero de columnas para matriz B: ",&cb);
break;
case'6': leermatriz(&matrizb[0][0],fb,cb);
break;
case'7': suma(&matriza[0][0],&matrizb[0][0],fa,ca,fb,cb);
break;
case'8': resta(&matriza[0][0],&matrizb[0][0],fa,ca,fb,cb);
break;
case'9': multiplicar(&matriza[0][0],&matrizb[0][0],fa,ca,fb,cb);
break;
/*case'a': dividir(&matriza[0][0],&matrizb[0][0],fa,ca,fb,cb);
break; */
case'b': porconstante(&matriza[0][0],fa,ca);
break;
}

}while(op!='0');
}
//Ejercicio Punteros 09
//Este programa lee 3 vectores A, B y C para luego poblar el vector D con estos tres respectivamente.

//Vectores

#include<iostream.h>
#include<conio.h>

char menu(){
clrscr();
char opc;
cout<<"MENU PRINCIPAL"<<endl;
cout<<"--------------"<<endl;
cout<<"[1] Leer Vector A"<<endl;
cout<<"[2] Leer Vector B"<<endl;
cout<<"[3] Leer Vector C"<<endl;
cout<<"[4] Poblar Vector D"<<endl;
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
void leervectora(int *va,int *na){
clrscr();
leerdato(na,"Ingrese numero de elementos del vector A: ");
clrscr();
for(int i=0;i<*na;i++){
cout<<"Ingrese dato "<<(i+1)<<" : ";
cin>>*(va+i);
}
clrscr();
cout<<"VER VECTOR A"<<endl<<endl;
for(int i=0;i<*na;i++){
cout<<"\t"<<*(va+i)<<endl;
}
getch();
}
void leervectorb(int *vb,int *nb){
clrscr();
leerdato(nb,"Ingrese numero de elementos del vector B: ");
clrscr();
for(int i=0;i<*nb;i++){
cout<<"Ingrese dato "<<(i+1)<<" : ";
cin>>*(vb+i);
}
clrscr();
cout<<"VER VECTOR B"<<endl<<endl;
for(int i=0;i<*nb;i++){
cout<<"\t"<<*(vb+i)<<endl;
}
getch();
}
void leervectorc(int *vc,int *nc){
clrscr();
leerdato(nc,"Ingrese numero de elementos del vector C: ");
clrscr();
for(int i=0;i<*nc;i++){
cout<<"Ingrese dato "<<(i+1)<<" : ";
cin>>*(vc+i);
}
clrscr();
cout<<"VER VECTOR C"<<endl<<endl;
for(int i=0;i<*nc;i++){
cout<<"\t"<<*(vc+i)<<endl;
}
getch();
}
void poblard(int *vd,int *va,int *vb,int *vc,int *nd,int *na,int *nb,int *nc){
clrscr();
for(int i=0;i<*na;i++){
*(vd+i)=*(va+i);
}
*nd=*na+*nb;
int j=0;
for(int i=*na;i<*nd;i++){
*(vd+i)=*(vb+j);
j++;
}
*nd=*na+*nb+*nc;
j=0;
for(int i=*na+*nb;i<*nd;i++){
*(vd+i)=*(vc+j);
j++;
}
for(int i=0;i<*nd;i++){
for(int j=i+1;j<*nd;j++){
if(*(vd+i)==*(vd+j)){
for(int k=i;k<*nd;k++){
*(vd+k)=*(vd+k+1);
}
*nd=*nd-1;
j=i;
}
}
}

clrscr();
cout<<"VER VECTOR D"<<endl<<endl;
for(int i=0;i<*nd;i++){
cout<<"\t"<<*(vd+i)<<endl;
}
getch();
}
void main(){
int va[50],vb[50],vc[50],vd[100],na=0,nb=0,nc=0,nd=0;
char opc;
do{
switch(opc=menu()){
case'1':
leervectora(&va[0],&na);
break;
case'2':
leervectorb(&vb[0],&nb);
break;
case'3':
leervectorc(&vc[0],&nc);
break;
case'4':
poblard(&vd[0],&va[0],&vb[0],&vc[0],&nd,&na,&nb,&nc);
break;

}
}while(opc!='0');
}
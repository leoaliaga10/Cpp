//Ejercicio Cadena de Caracteres 06
//Este ejemplo lee dos palabras y las ordena alfabeticamente.
//***Primera forma***

#include<iostream.h>
#include<conio.h>
#include<string.h>

void main(){
char p1[20],p2[20],t[20];

cout<<"Ingrese palabra 1: ";
cin>>p1;
cout<<"Ingrese palabra 2: ";
cin>>p2;
cout<<"\n";

if (strcmp(p1,p2)>0){
strcpy(t,p1);
strcpy(p1,p2);
strcpy(p2,t);
}
cout<<p1<<endl;
cout<<p2<<endl;

getch();
}

//***Segunda forma***

#include<iostream.h>
#include<conio.h>
#include<string.h>

void main(){
char palabra[20],temp[20];

cout<<"Ingrese una palabra: ";
cin>>palabra;
strcpy(temp,palabra); 
//cout<<strrev(temp)<<endl;
if (strcmp(temp,palabra)==0){
cout<<"ES PALINDROMA";
}
else{
cout<<"NO ES PALINDROMA";
}
getch();
}
//Ejercicio Cadena de Caracteres 03
//Esta aplicación lee una frace de caracteres y la separa palabra por palabra.

#include<iostream.h>
#include<conio.h>

void porpalabra(char texto[]){
int i=0;
while(texto[i]!=NULL){
if (texto[i]==' '){
cout<<"\n";
}
else{
cout<<texto[i];
}
i++;
}
}

main(){
char frase[100];
cout<<"INGRESE UNA FRASE: ";
cin.getline(frase,100);
cout<<"\n";
cout<<frase<<endl;
porpalabra(frase);
getch();
}
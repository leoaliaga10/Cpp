//Ejercicio Archivos 01
//Este programa abre un archivo *.txt creado antes en disco duro.

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main(){
                char cadena[20],nombre[30];
   int i=0;
   cout<<"Ingrese nombre del archivo (con ruta y extencion): ";
   cin>>nombre;
   FILE *fp;
   fp=fopen(nombre,"rt");
   if (fp==NULL){
                cout<<"No se puede crear archivo";
      return;
   }
   else{
                while(cadena[i]!=EOF){
                cadena[i]=getc(fp);
         i++;
      }
   }
   fclose(fp);
   cout<<cadena;
   getch();
}
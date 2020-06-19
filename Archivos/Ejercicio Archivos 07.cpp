//Ejercicio Archivos 07
//Este programa lee una cadena de texto pero para almacenarla debemos introducir la ruta y nombre especifico con la exención del tipo de archivo (*.txt).

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main(){
                char cadena[20],nombre[30];
   cout<<"Ingrese cadena: ";
   gets(cadena);
   cout<<"Ingrese nombre del archivo (con ruta para grabar): ";
   cin>>nombre;
   FILE *fp;
   fp=fopen(nombre,"wt");
   if (fp==NULL){
                cout<<"No se puede crear archivo";
      return;
   }
   else{
                for(int i=0;i<strlen(cadena);i++){
                               putc(cadena[i],fp);
      }
   }
   fclose(fp);
}
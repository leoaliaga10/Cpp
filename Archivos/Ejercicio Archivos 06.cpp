//Ejercicio Archivos 06
//Este programa almacena una cadena de texto (como archivo de texto *.txt) en una ruta y con nombre determinados.

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main(){
                char cadena[20];
   cout<<"Ingrese cadena: ";
   gets(cadena);
   FILE *fp;
   fp=fopen("D:\cadena.txt","wt");
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
//Ejercicio Archivos 02
//Este programa abre un archivo *.txt creado antes en disco duro, también puede modificarlo.

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
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
   cout<<"\nIngrese cadena: ";
   gets(cadena);
   fp=fopen(nombre,"a+t");
   for(int i=0;i<strlen(cadena);i++){
                               putc(cadena[i],fp);
   }
   fclose(fp);
   getch();
}
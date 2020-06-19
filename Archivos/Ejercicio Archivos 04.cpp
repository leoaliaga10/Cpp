//Ejercicio Archivos 04
//Este programa recupera un archivo binario de una ruta determinada.
//Para recuperar archivo binario

#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main(){
                FILE *fp;
   float m=0.0;
   if((fp=fopen("D:\Flotante2.bin ","rb"))==NULL){
                cout<<"No se puede abrir archivo";
      return;
   }
   fread(&m,sizeof(float),1,fp);
   fclose(fp);
   cout<<"Valor recuperado: "<<m;
   getch();
}
//Ejercicio Archivos 03
//Este programa almacena un archivo binario en una ruta determinada.

//Para almacenar archivo binario

#include<iostream.h>
#include<stdio.h>
void main(){
                FILE *fp;
   float m=1.737373;
   if((fp=fopen("D:\Flotante2.bin ","wb"))==NULL){
                cout<<"No se puede crear archivo";
      return;
   }
   //fwrite(&m,8,1,fp); tb puede ser
   fwrite(&m,sizeof(float),1,fp);
   fclose(fp);
}


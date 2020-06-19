//Ejercicio metodos de ordenacion con listas enlazadas 03
/*
Este programa lee registros en forma desordenada almacenandolos en una lista enlazada simple, despues de de leer los registros requeridos podemos ordenarlos mediante el metodo de Quicksort.

[1] Quicksort Descendente.
*/


#include<iostream.h>
#include <stdlib.h>
#include<conio.h>
#include<stdio.h>
typedef char cadena[20];
struct persona{
                cadena nombre;
      float sueldo;
      persona *next;
};
persona *start,*last;
char menu(){
                clrscr();
                char opc;
                cout<<"MENU PRINCIPAL";
                cout<<"\n--------------";
                cout<<"\n[1] Agregar elemento a una Lista";
   cout<<"\n[2] Ver lista";
   cout<<"\n[3] Ordenar por quicksort";;
   cout<<"\n[4] Guardar";
   cout<<"\n[5] Cargar";
                cout<<"\n[0] Salir";
                cout<<"\nEliga una opcion: ";
                cin>>opc;
                return opc;
}
void agrega(persona *i,persona **inicio,persona **fin){
   //clrscr();
   persona *temp;
   temp=new persona;
   temp->sueldo=i->sueldo;
   strcpy(temp->nombre,i->nombre);
   if(i==NULL){
                               return;
   }
   if(*inicio==NULL){
                               *inicio=temp;
                *fin=temp;
   }
   else{
                               (*fin)->next=temp;
                *fin=temp;
   }
}
void ensambla(persona **inicio1,persona **fin1,persona **inicio2,persona **fin2){
   clrscr();
                if(*inicio1==NULL && *inicio2==NULL){
                return;
   }
   if(*inicio1!=NULL && *inicio2!=NULL){
                                (*fin1)->next=*inicio2;
      *fin1=*fin2;
      return;
   }
   if(*inicio1==NULL && *inicio2!=NULL){
      *inicio1=*inicio2;
      *fin1=*fin2;
      return;
   }
   if(*inicio1!=NULL && *inicio2==NULL){
      *inicio2=*inicio1;
      return;
   }
}

void insertar(){
                clrscr();
   persona *info;
   info=new persona;
   if(!info){
                                cout<<"Memoria insuficiente";
      return;
   }
   cout<<"Ingrese nombre: ";
   cin>>info->nombre;
   cout<<"Ingrese sueldo: ";
   cin>>info->sueldo;
   agrega(info,&start,&last);
}
void ver(){
                clrscr();
   persona *info;
   info=start;
   while(info){
      cout<<"Nombre : "<<info->nombre<<endl;
      cout<<"Sueldo : "<<info->sueldo<<endl<<endl;
      info=info->next;
   }
   getch();
}
void quicksort(persona **inicio,persona **fin){
   clrscr();
   persona *startmayor=NULL,*lastmayor=NULL,*actual;
   persona *startmenor=NULL,*lastmenor=NULL;
   persona *startigual=NULL,*lastigual=NULL;
   cadena pivote,temp;
   actual=*inicio;
   if (actual==NULL){
                return;
   }
   strcpy(pivote,actual->nombre);
   while(actual!=NULL){
                               strcpy(temp,actual->nombre);
      if(strcmpi(actual->nombre,pivote)<0){
                                               agrega(actual,&startmenor,&lastmenor);
         actual=actual->next;
      }
      else if (strcmpi(actual->nombre,pivote)>0){
                agrega(actual,&startmayor,&lastmayor);
         actual=actual->next;
      }
      else{
                                               agrega(actual,&startigual,&lastigual);
         actual=actual->next;
      }
   }
   quicksort(&startmayor,&lastmayor);
   quicksort(&startmenor,&lastmenor);
   ensambla(&startmayor,&lastmayor,&startigual,&lastigual);
   ensambla(&startmayor,&lastmayor,&startmenor,&lastmenor);
   *inicio=startmayor;
   *fin=lastmayor;
}
void guardar(){
                FILE *fp;
   persona *info;
   fp=fopen("D:\Datos.bin","w+b");
   if(!fp){
                cout<<"No se puede abrir el archivo";
      return;
   }
   else{
                info=start;
      while(info){
         fwrite(info,sizeof(persona),1,fp);
                                               info=info->next;
      }
   }
   fclose(fp);
}
void cargar(){
                clrscr();
   FILE *fp;
   persona *info;
   fp=fopen("D:\Datos.bin","r+b");
   if(!fp){
      cout<<"No se puede abrir archivo";
      return;
   }
   cout<<"Cargando archivo...";
   while(!feof(fp)){
                               info=(persona*)malloc(sizeof(persona));
      if(!info){
                cout<<"Desbordamiento de Pila";
         return;
      }
      if(1!=fread(info,sizeof(persona),1,fp)){
      break;}
      agrega(info,&start,&last);
   }
   fclose(fp);
                getch();
}

void main(){
                char opc;
                start=last=NULL;
   do{
     switch(opc=menu()){
                case '1': insertar();
                break;
      case '2': ver();
                break;
      case '3': quicksort(&start,&last);
                break;
      case '4': guardar();
                break;
      case '5': cargar();
                break;
      }
   }while(opc!='0');
}
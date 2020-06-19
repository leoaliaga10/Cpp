//Ejercicio lista enlazada simple 04
/*
Este programa inserta elementos en una lista enlazada simple y los ordena por nombre ascendentemente, también realiza busqueda por nombre y devuelve el registro si ha sido encontrado, si existen varios registros con el mismo nombre los muestra a todos y si no existe el registro buscado muestra un mensaje.
*/
#include<stdio.h>
#include<iostream.h>
#include <stdlib.h>
#include<conio.h>
#define tan 50
typedef char cadena[20];
struct persona{
                cadena nombre;
      float sueldo;
      persona *next;
};
persona lista,*start,*last;
char menu(){
                clrscr();
                char opc;
                cout<<"MENU PRINCIPAL";
                cout<<"\n--------------";
                cout<<"\n[1] Insertar elemento";
                cout<<"\n[2] Ver lista";
   cout<<"\n[3] Busqueda por nonbre";
                cout<<"\n[0] Salir";
                cout<<"\nEliga una opcion: ";
                cin>>opc;
                return opc;
}
void leito(persona *i,persona **inicio,persona **fin){
                persona *old,*p;
                p=*inicio;
                if(!*fin){
                               i->next=NULL;
                               *fin=i;
                               *inicio=i;
                               return;
                }
                old=NULL;
                while(p){
                               if(strcmp(p->nombre,i->nombre)<0){
                                               old=p;
                               p=p->next;
                               }
                               else{
                                               if(old){
                                               old->next=i;
                                               i->next=p;
                                               return;
                               }
                               i->next=p;
                               *inicio=i;
                  return;
                               }

                }
                 (*fin)->next=i;
                i->next=NULL;
                *fin=i;
}
void insertar(){
                clrscr();
   persona *info;
                               info=(persona *)malloc(sizeof(lista));
      if(!info){
                cout<<"Memoria insuficiente";
         return;
      }
      cout<<"Ingrese nombre: ";
      cin>>info->nombre;
      cout<<"Ingrese sueldo: ";
      cin>>info->sueldo;
      leito(info,&start,&last);
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
void buscar(persona *start,cadena nom){
                clrscr();
   int ban=0;
   while(start){
                if(!strcmpi(nom,start->nombre)){
                cout<<"Elemento Encontrado"<<endl;
         cout<<"-------------------"<<endl;
         cout<<"Nombre : "<<start->nombre<<endl;
         cout<<"Sueldo : "<<start->sueldo<<endl;
         ban=1;
      }
      start=start->next;
                }
   if (ban==0){
                cout<<"Elemento no encontrado";
   }
   getch();
}
void busqueda(){
                clrscr();
   cadena nom;
   cout<<"Ingrese nombre a buscar : ";
   cin>>nom;
   buscar(start,nom);
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
      case '3': busqueda();
                break;
      }
   }while(opc!='0');
}
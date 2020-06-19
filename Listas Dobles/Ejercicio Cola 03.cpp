//Ejercicio Cola 03
//Esta aplicación nos da un claro ejemplo de colas (básico).

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
                cout<<"\n[1] Agregar elemento a una Cola";
   cout<<"\n[2] Atender un elemento de la Cola";
   cout<<"\n[3] Ver lista";
                cout<<"\n[0] Salir";
                cout<<"\nEliga una opcion: ";
                cin>>opc;
                return opc;
}
void qstore(persona *i,persona **final){
   if(start==NULL){
                start=i;
      last=i;
      return;
   }
                (*final)->next=i;
   *final=i;
}
void qretrier(){
                clrscr();
                if(start==NULL){
                cout<<"Cola vacia ";
      getch();
   }
   else{
                start=start->next;
   }
}
void insertar(){
                clrscr();
   persona *info;
   info=new persona;
   if(!info){
                cout<<"Memoria insuficiente";
   }
   else{
                cout<<"Ingrese nombre: ";
                cin>>info->nombre;
                cout<<"Ingrese sueldo: ";
                cin>>info->sueldo;
                qstore(info,&last);
   }
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
void main(){
                char opc;
                start=last=NULL;
   do{
     switch(opc=menu()){
                case '1': insertar();
                break;
      case '3': ver();
                break;
      case '2': qretrier();
                break;
      }
   }while(opc!='0');
}
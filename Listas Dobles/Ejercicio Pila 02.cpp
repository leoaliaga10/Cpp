//Ejercicio Pila 02
//Esta aplicación nos da un claro ejemplo de pilas (básico).

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
                cout<<"\n[1] Agregar elemento a una Pila";
   cout<<"\n[2] Retornar un elemento de la Pila";
   cout<<"\n[3] Ver lista";
                cout<<"\n[0] Salir";
                cout<<"\nEliga una opcion: ";
                cin>>opc;
                return opc;
}
void push(persona *i,persona **inicio){
                i->next=*inicio;
   *inicio=i;
}
void pop(){
                clrscr();
                if(start==NULL){
                cout<<"Pila vacia ";
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
         return;
      }
      cout<<"Ingrese nombre: ";
      cin>>info->nombre;
      cout<<"Ingrese sueldo: ";
      cin>>info->sueldo;
      push(info,&start);
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
      case '2': pop();
                break;
      }
   }while(opc!='0');
}
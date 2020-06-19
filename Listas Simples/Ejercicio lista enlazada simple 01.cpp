//Ejercicio lista enlazada simple 01
/*
Este programa realiza el siguiente menú:

[1] Agregar elemento a la lista
[2] Ver lista
[3] Eliminar elemento de la lista
[4] Buscar elemento de la lista
[5] Eliminar varios elementos de la lista
[0] Salir
*/
/*En la funcion eliminar varios elementos a la vez, cuando eliminamos elementos que existen nos sale el mensaje que no se puede eliminar pero en realidad si se han eliminado los elementos...Pruebenlo y se daran cuenta.*/

#include<iostream.h>
#include <stdlib.h>
#include<conio.h>
typedef char cadena[20];
struct persona{
                cadena nombre;
      float sueldo;
      int pos;
      persona *next;
};
persona *start;
int c=1;
char menu(){
                clrscr();
                char opc;
                cout<<"MENU PRINCIPAL";
                cout<<"\n--------------";
                cout<<"\n[1] Agregar elemento a la lista";
   cout<<"\n[2] Ver lista";
   cout<<"\n[3] Eliminar elemento de la lista";
   cout<<"\n[4] Buscar elemento de la lista";
   cout<<"\n[5] Eliminar varios elementos de la lista";
                cout<<"\n[0] Salir";
                cout<<"\nEliga una opcion: ";
                cin>>opc;
                return opc;
}
void ls_inser(persona *i,persona **inicio){
   persona *bus;
   bus=start;
                if(*inicio==NULL){ //cuando esta vacia e insertamos al inicio
                *inicio=i;
   }
   else{         //si no esta vacia verificamos si entra al inicio
                if(strcmpi((*inicio)->nombre,i->nombre)>0){
                               i->next=*inicio;
                *inicio=i;
                }
      else{      //insertamos al medio y al final
                               while(bus->next!=NULL && strcmpi(bus->next->nombre,i->nombre)<=0){
                                               bus=bus->next;
                               }
                               i->next=bus->next;
                                               bus->next=i;
      }
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
      ls_inser(info,&start);
}
void sdelete(persona **inicio,cadena nom){
                clrscr();
   persona *pact,*pant;
   if(*inicio==NULL){
                cout<<"Lista Vacia !!!";
      getch();
   }
   else{
                if(strcmpi((*inicio)->nombre,nom)==0){
                *inicio=(*inicio)->next;
                return;
                }
                pact=(*inicio)->next;
                pant=*inicio;
                while(pact!=NULL && strcmpi(pact->nombre,nom)!=0){
                pant=pact;
                pact=pact->next;
                }
                if(pact!=NULL){
                               pant->next=pact->next;
                }else{
                cout<<"No se puede eliminar xq no existe nombre";
         getch();
      }
   }
}
void eliminar(){
                clrscr();
   cadena nom;
   cout<<"Ingrese nombre a eliminar : ";
   cin>>nom;
   sdelete(&start,nom);
}
void ver(){
                clrscr();
   c=1;
   persona *info;
   info=start;
   while(info){
      cout<<"Nombre : "<<info->nombre<<endl;
      cout<<"Sueldo : "<<info->sueldo<<endl<<endl;
      info->pos=c; c++;
      //cout<<info->next<<endl<<endl;
      info=info->next;
   }
   getch();
}
void buscar(){
                clrscr();
   persona *pact;
   cadena nom;
   cout<<"Ingrese nombre a buscar: ";
   cin>>nom;
   pact=start;
   while(pact!=NULL && strcmpi(pact->nombre,nom)!=0){
                pact=pact->next;
   }
   if(pact!=NULL){
                cout<<"Nombre ha sido encontrado "<<endl<<endl
                <<"Nombre: "<<pact->nombre<<endl
         <<"Sueldo: "<<pact->sueldo<<endl
         <<"Posicion: "<<pact->pos<<endl;
   }
   else{
                               cout<<"Nombre no encontrado";
   }
   getch();
}
void sdeletevar(persona **inicio,cadena nom){
                clrscr();
   persona *pact,*pant;
   if(*inicio==NULL){
                cout<<"Lista Vacia !!!";
      getch();
   }
   else{
                while(strcmpi((*inicio)->nombre,nom)==0){
                *inicio=(*inicio)->next;
         if(*inicio==NULL){
                return;
         }
      }
                pact=(*inicio)->next;
                pant=*inicio;
      while(pact!=NULL){
                               while(pact!=NULL && strcmpi(pact->nombre,nom)!=0){
                               pant=pact;
                pact=pact->next;
                               }
                               if(pact!=NULL){
                                               pant->next=pact->next;
                pact=pact->next;
                               }
      }
      if(pact==NULL){
                               cout<<"No se puede eliminar xq no existe nombre";
                getch();
      }
                }
}
void eliminarvar(){
                clrscr();
   cadena nom;
   cout<<"Eliminar Varios Elementos a la vez"<<endl<<endl;
   cout<<"Ingrese nombre a eliminar : ";
   cin>>nom;
   sdeletevar(&start,nom);
}
void main(){
                char opc;
                start=NULL;
   do{
     switch(opc=menu()){
                case '1': insertar();
                break;
      case '2': ver();
                break;
      case '3': eliminar();
                break;
      case '4': buscar();
                break;
      case '5': eliminarvar();
                break;
      }
   }while(opc!='0');
}
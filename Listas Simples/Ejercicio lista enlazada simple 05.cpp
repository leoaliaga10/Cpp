//Ejercicio lista enlazada simple 05
/*
En este programa realiza el mismo menú que el ejercicio 02, pero con las diferencias que al insertar se ordena el registro por nombre ascendentemente y por sueldo descendentemente y al buscar te muestra el registro encontrado:

[1] Insertar elemento
[2] Ver lista
[3] Busqueda por nombre
[4] Eliminar por nombre
[5] Guardar
[6] Cargar
[0] Salir
*/
#include<stdio.h>
#include<iostream.h>
#include <stdlib.h>
#include<conio.h>
#define tan 50
typedef char cadena[20];
int c=0;
struct persona{
                cadena nombre;
      float sueldo;
      int pos;
      persona *next;
};
persona lista,*start,*last;
char menu(){
                clrscr();
                char opc;
                cout<<"MENU PRINCIPAL";
                cout<<"\n--------------";
                cout<<"\n[1] Insertar elemento";
                cout<<"\n[2] Ver lista";// [Ordenada ascendentemente por nombre y sueldo]
   cout<<"\n[3] Busqueda por nonbre";
   cout<<"\n[4] Eliminar por nombre";
   cout<<"\n[5] Guardar";
   cout<<"\n[6] Cargar";
                cout<<"\n[0] Salir";
                cout<<"\nEliga una opcion: ";
                cin>>opc;
                return opc;
}
int ordnombresueldo(persona *v1,persona *v2){
                clrscr();
   if(   (strcmpi(v1->nombre,v2->nombre)>0)||
                               (strcmpi(v1->nombre,v2->nombre)==0)&&(v1->sueldo<v2->sueldo)   ){
         return 1;}
   else if(  (strcmpi(v1->nombre,v2->nombre)==0)&&(v1->sueldo==v2->sueldo)){
               return 2;}
   else{return 0;}
}
void store(persona *i,persona **inicio,persona **fin){
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
                               if(ordnombresueldo(p,i)==0){
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
      store(info,&start,&last);
}
void ver(){
                clrscr();
   c=0;
   persona *info;
   info=start;
   while(info){
      cout<<"Nombre : "<<info->nombre<<endl;
      cout<<"Sueldo : "<<info->sueldo<<endl<<endl;
                c++;
                               info->pos=c;
      info=info->next;
   }
   getch();
}
persona *buscar(persona *start,cadena nom){
                clrscr();
   while(start){
                if(!strcmpi(nom,start->nombre)){
                return start;
      }
      start=start->next;
                }
   return NULL;
}
persona *buscarant(persona *start,cadena nombre){
                clrscr();
   persona *old=NULL;
   while(start){
                if(strcmpi(nombre,start->nombre)==0){
                return old;
      }
      old=start;
      start=start->next;
   }
   return NULL;
}
void sdelete(persona *ant,persona *i,persona **inicio,persona **fin){
//(Elemento anterior,elemento a borrar,primer elemento lista,ultimo elemento lista)
                clrscr();
   if(ant){
                ant->next=i->next;
   }
   else{
                *inicio=i->next;
   }
   if(i==*fin && ant){
                *fin=ant;
   }
}
void eliminar(){
                clrscr();
   persona *dato,*p;
   cadena nom;
   cout<<"Ingrese nombre a eliminar : ";
   cin>>nom;
   dato=buscar(start,nom);
   p=buscarant(start,nom);
   if (dato==NULL){
                cout<<"El elmento no se puede eliminar xq no existe";
   }
   else{
                sdelete(p,dato,&start,&last);
   }
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
   while(start){
                info=start->next;
      free(info);
      start=info;
   }
   start=last=NULL;
   cout<<"Cargando archivo...";
   while(!feof(fp)){
                               info=(persona*)malloc(sizeof(persona));
      if(!info){
                cout<<"Desbordamiento de Pila";
         return;
      }
      if(1!=fread(info,sizeof(persona),1,fp)){
      break;}
      store(info,&start,&last);
   }
   fclose(fp);
                getch();
}
void buscar2(persona *start,cadena nom){
                clrscr();
   int b=c;
   while(start){
                if(!strcmpi(nom,start->nombre)){
                cout<<"Elemento Encontrado"<<endl;
                cout<<"-------------------"<<endl;
                cout<<"Nombre : "<<start->nombre<<endl;
                cout<<"Sueldo : "<<start->sueldo<<endl;
         cout<<"Posicion : "<<start->pos<<endl<<endl;
         b--;
      }
      start=start->next;
                }
   if(b==c){
                cout<<"Elemento  No Encontrado"<<endl;
   }
   getch();
}
void busqueda2(){
                clrscr();
   cadena nom;
   cout<<"Ingrese nombre a buscar : ";
   cin>>nom;
   buscar2(start,nom);
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
      case '3': busqueda2();
                break;
      case '4': eliminar();
         break;
      case '5': guardar();
         break;
      case '6': cargar();
         break;
      }
   }while(opc!='0');
}
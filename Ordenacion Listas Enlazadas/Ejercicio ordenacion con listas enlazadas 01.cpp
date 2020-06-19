//Ejercicio metodos de ordenacion con listas enlazadas 01
//Este programa lee registros en forma de colas almacenandolos en una lista enlazada doble, despues de de leer los registros requeridos podemos ordenarlos mediante los metodos: Burbuja e Inserción.

#include<iostream.h>
#include <stdlib.h>
#include<conio.h>
#include<stdio.h>
typedef char cadena[20];
struct persona{
                cadena nombre;
      float sueldo;
      persona *next;
      persona *prior;
};
persona *start,*last,*startcola,*lastcola;
char menu(){
                clrscr();
                char opc;
                cout<<"MENU PRINCIPAL";
                cout<<"\n--------------";
                cout<<"\n[1] Agregar elemento a una Lista";
   cout<<"\n[2] Ver lista";
   cout<<"\n[3] Ordenar lista por Burbuja";
   cout<<"\n[4] Ordenar lista por Inserción";
   cout<<"\n[5] Guardar";
   cout<<"\n[6] Cargar";
                cout<<"\n[0] Salir";
                cout<<"\nEliga una opcion: ";
                cin>>opc;
                return opc;
}
void encolar(persona *i,persona **inicio,persona **fin){
   if(*inicio==NULL){
                *inicio=i;
      *fin=i;
      return;
   }
                (*fin)->next=i;
   i->prior=*fin;
   *fin=i;
}
void qretrier(persona **i,persona **inicio,persona **fin){
                clrscr();
   if(*inicio==*i){
                               *inicio=(*inicio)->next;
      if(*inicio==NULL){
                return;
      }
      (*inicio)->prior=NULL;
                return;
   }
   if(*fin==*i){
                               *fin=(*fin)->prior;
      (*fin)->next=NULL;
                return;
   }
   (*i)->prior->next=(*i)->next;
   (*i)->next->prior=(*i)->prior;
}
void retrier(persona *i,persona **inicio){
                clrscr();
   persona *pact,*pant;
   if(strcmpi((*inicio)->nombre,i->nombre)==0){
                *inicio=(*inicio)->next;
                return;
   }
   pact=(*inicio)->next;
   pant=*inicio;
   while(pact!=NULL && strcmpi(pact->nombre,i->nombre)!=0){
                pant=pact;
                pact=pact->next;
   }
   if(pact!=NULL){
                pant->next=pact->next;
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
   encolar(info,&start,&last);
}
void ver(){
                clrscr();
   persona *info;
   info=start;
   while(info){
      cout<<"Nombre : "<<info->nombre<<endl;
      cout<<"Sueldo : "<<info->sueldo<<endl<<endl;
                               last=info;
      info=info->next;
   }
   getch();
}
void burbuja(persona **inicio,persona **var){
   startcola=lastcola=NULL;
   int orden=1;
                persona *pos,*temp;
   temp=(*inicio)->next;
   pos=*inicio;
   while(temp!=(*var)->next){
                if(strcmpi(temp->nombre,pos->nombre)<0){
                                               pos=temp;
         orden=0;
                }
                               encolar(pos,&startcola,&lastcola);
      retrier(pos,&start);
      pos=*inicio;
      temp=(*inicio)->next;
   }
   encolar(pos,&startcola,&lastcola);
   retrier(pos,&start);

   start=last=NULL;
   start=startcola;
   last=lastcola;
   if(orden==1){
                return;
   }
   *var=(*var)->prior;
   burbuja(&start,var);
}
void insercion(persona **inicio){
                startcola=lastcola=NULL;
   persona *temp,*pos,*var;
   temp=*inicio;
                while(*inicio!=NULL){
                temp=temp->next;
      pos=*inicio;
      while(temp!=NULL){
                if(strcmpi(temp->nombre,pos->nombre)<0){
                                                               pos=temp;
                }
         temp=temp->next;
      }
      var=new persona;
      var->sueldo=pos->sueldo;
      strcpy(var->nombre,pos->nombre);
      encolar(var,&startcola,&lastcola);
      qretrier(&pos,&start,&last);
      temp=*inicio;

   }
   start=last=NULL;
   start=startcola;
   last=lastcola;
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
   fp=fopen("D:\DatosQS.bin","r+b");
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
      encolar(info,&start,&last);
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
      case '3': burbuja(&start,&last);
                break;
      case '4': insercion(&start);
                break;
      case '5': guardar();
                break;
      case '6': cargar();
                break;
      }
   }while(opc!='0');
}
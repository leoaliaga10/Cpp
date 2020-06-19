//Ejercicio Arboles 02
/*
Este programa realiza el siguiente menú lo importante de este ejercicio es la función (6) guardar árbol en disco (Ejercicio básico sobre árboles):

[1] Agregar elemento al árbol
[2] Ver árbol
[3] Recorridos

  [1] en Orden
  [2] en Pre Orden
  [3] en Post Orden
  [0] Regresar


[4] Consultas

  [1] Iteractiva
  [2] Recursiva
  [0] Regresar

[5] Borrados
[6] Guardar
[7] Abrir
[0] Salir
*/
#include<iostream.h>
#include <stdlib.h>
#include<conio.h>
#include <stdio.h>
typedef char cadena[20];
struct persona{
                cadena nombre;
   float sueldo;
};
struct arbre{
  persona info;
  arbre *izq;
  arbre *der;
};
typedef arbre *tree;
tree ABB;
char menu(){
                clrscr();
                char opc;
                cout<<"MENU PRINCIPAL";
                cout<<"\n--------------";
                cout<<"\n[1] Agregar elemento al arbol";
   cout<<"\n[2] Ver arbol";
   cout<<"\n[3] Recoridos";
   cout<<"\n[4] Consultas";
   cout<<"\n[5] Borrados";
   cout<<"\n[6] Guardar";
   cout<<"\n[7] Abrir";
                cout<<"\n[0] Salir";
                cout<<"\nEliga una opcion: ";
                cin>>opc;
                return opc;
}
void agrega(tree &arbol,persona *dato){
                clrscr();
   if(arbol==NULL){
                arbol=new arbre;
      arbol->info=*dato;
      arbol->izq=NULL;
      arbol->der=NULL;
   }
   else if(strcmpi(dato->nombre,arbol->info.nombre)<0){
                agrega(arbol->izq,dato);
   }
   else if(strcmpi(dato->nombre,arbol->info.nombre)>0){
                agrega(arbol->der,dato);
   }
}
void insertar(){
                clrscr();
   persona *temp;
   temp=new persona;
   if(temp==NULL){
                               cout<<"Memoria insuficiente";
      return;
   }
   cout<<"Ingrese nombre: ";
   cin>>temp->nombre;
   cout<<"Ingrese sueldo: ";
   cin>>temp->sueldo;
   agrega(ABB,temp);
}
void verarbol(tree arbol,int x){
   if(!arbol){
                return;
   }
   verarbol(arbol->der,x+1);
   for(int i=0;i<x;i++)cout<<"\t";
   cout<<arbol->info.nombre<<"_"<<arbol->info.sueldo<<endl;
   verarbol(arbol->izq,x+1);
}

void preorden(tree arbol){
   if (arbol != NULL){
     cout<<arbol->info.nombre<<"_"<<arbol->info.sueldo<<"  ";
     preorden(arbol->izq);
     preorden(arbol->der);
   }
}
void postorden(tree arbol){
   if (arbol != NULL){
     postorden(arbol->izq);
     postorden(arbol->der);
     cout<<arbol->info.nombre<<"_"<<arbol->info.sueldo<<"  ";
   }
}
void orden(tree arbol){
   if (arbol != NULL){
     orden(arbol->izq);
     cout<<arbol->info.nombre<<"_"<<arbol->info.sueldo<<"  ";
     orden(arbol->der);
   }
}
void recoridos(){
   char opc;
   do{
                clrscr();
                cout<<"RECORRIDOS";
                cout<<"\n--------------";
                cout<<"\n[1] en Orden";
                cout<<"\n[2] en Pre Orden";
                cout<<"\n[3] en Post Orden";
                cout<<"\n[0] Regresar";
                               cout<<"\nEliga una opcion: ";
                               cin>>opc;
      clrscr();
                               switch(opc){
                               case '1':
                                                               cout<<"\n\nRecorrido en Orden"<<endl;
                               orden(ABB);getch();
                break;
                case '2':
                                                               cout<<"\n\nRecorrido en Pre-Orden"<<endl;
                               preorden(ABB);getch();
                break;
                case '3':
                                                               cout<<"\n\nRecorrido en Post-Orden"<<endl;
                               postorden(ABB);getch();
                break;
                }
   }while(opc!='0');
}
int busquedarecu(tree arbol,cadena dato){
   clrscr();
                int r=0; //r=0 dato no encontrado
   if(arbol==NULL){
                return r;//no hay dato
   }
   if(strcmpi(dato,arbol->info.nombre)<0){
                r=busquedarecu(arbol->izq,dato);
   }
   else if(strcmpi(dato,arbol->info.nombre)>0){
                r=busquedarecu(arbol->der,dato);
   }
   else{
                r=1;//dato encontrado
   }
   return r;
}
int busquedaiter(tree arbol,cadena dato){
   clrscr();
                while(arbol!=NULL){
                               if(strcmpi(dato,arbol->info.nombre)<0){
                                               arbol=arbol->izq;
      }
      else if(strcmpi(dato,arbol->info.nombre)>0){
                                               arbol=arbol->der;
      }
      else{
                return 1;
      }
   }
    return 0;
}
void consulta(){
   char opc;
   do{
                clrscr();
                cout<<"BUSQUEDA";
                cout<<"\n-------";
                cout<<"\n[1] Iteractiva";
                cout<<"\n[2] Recursiva";
                cout<<"\n[0] Regresar";
                               cout<<"\nEliga una opcion: ";
                               cin>>opc;
      clrscr();
                               switch(opc){
      cadena temp;
                               case '1':
                                                               cout<<"BUSCAR ITERACTIVA DE UN ELEMENTO"<<endl;
                                               cout<<"Ingrese elemento a buscar : ";
                                               cin>>temp;
                                               if(busquedaiter(ABB,temp)==1){
               clrscr();
                                                               cout<<"Elemento encontrado";
                                               }
                                               else{
                clrscr();
                                                               cout<<"Elemento no encontrado";
                                               }
                                               getch();
                break;
                case '2':
                                               cout<<"BUSCAR RECURSIVA DE UN ELEMENTO"<<endl;
                                               cout<<"Ingrese nombre a buscar : ";
                                               cin>>temp;
            if(busquedarecu(ABB,temp)==1){
                clrscr();
                                                               cout<<"Elemento encontrado";
                                               }
                                               else{
               clrscr();
                                                               cout<<"Elemento no encontrado";
                                               }
                                               getch();
                break;
      }
   }while(opc!='0');
}
tree unir(tree izq,tree der){
                if(izq==NULL){
                               return der;
   }
   if(der==NULL){
                               return izq;
   }
   tree centro=unir(izq->der,der->izq);
   izq->der=centro;
   der->izq=izq;
   return der;
}
void eliminar(tree &arbol,cadena nom){
   if(arbol==NULL){
                               return;
   }
   if(strcmpi(nom,arbol->info.nombre)<0){
                               eliminar(arbol->izq,nom);
   }
   else{
                tree p=arbol;
      arbol=unir(arbol->izq,arbol->der);
      delete p;
   }
}
void eliminararbol(tree &arbol){
   if(arbol==NULL){
                cout<<"Arbol Vacio!!!";
      getch();
      return;
   }
                if(arbol){
                               eliminararbol(arbol->izq);
                               eliminararbol(arbol->der);
      cout<<"Eliminando arbol "<<arbol->info.nombre<<"_"<<arbol->info.sueldo<<endl;
      delete arbol;
      arbol=NULL;
   }
}
void borrados(){
char opc;
   do{
                clrscr();
                cout<<"BORRADOS";
                cout<<"\n-------";
                cout<<"\n[1] Un solo elemento";
                cout<<"\n[2] Todo el arbol";
                cout<<"\n[0] Regresar";
                               cout<<"\nEliga una opcion: ";
                               cin>>opc;
      clrscr();
                                switch(opc){
      cadena temp;
      char op;
                               case '1':
                                               cout<<"Ingrese nombre a eliminar : ";
                                               cin>>temp;
                                               eliminar(ABB,temp);
                                               cout<<"Desea volver a ver el arbol [Y/N] : ";
                                               cin>>op;
                                               if(op=='y'){
                                                               clrscr();
               verarbol(ABB,0);
               getch();
                                               }
                                               getch();
                break;
                case '2':
                cout<<"Desea eliminar arbol [Y/N] : ";
                                               cin>>op;
                                               if(op=='y'){
                                                               eliminararbol(ABB);getch();
                                               }
                break;
      }
   }while(opc!='0');
}
void guarda(tree arbol,FILE *fp){
                clrscr();
   persona *temp;
   *temp=arbol->info;
                fwrite(temp,sizeof(persona),1,fp);
}
void guardar(tree arbol,FILE *fp){
   if (arbol != NULL){
     guarda(arbol,fp);
     guardar(arbol->izq,fp);
     guardar(arbol->der,fp);
   }
}
void abrir(){
                clrscr();
   FILE *fp;
   persona *temp;
   cadena ruta;
   cout<<"Ingrese ruta de archivo: ";
   cin>>ruta;
   fp=fopen(ruta,"rb");
   if(fp==NULL){
                cout<<"No se puede abrir archibo";
      getch();
      return;
   }
   fread(temp,sizeof(persona),1,fp);
   agrega(ABB,temp);
   while(!feof(fp)){
                agrega(ABB,temp);
      fread(temp,sizeof(persona),1,fp);
   }
}
void main(){
                char opc;
   do{
     switch(opc=menu()){
                case '1': insertar();
                break;
      case '2': clrscr();verarbol(ABB,0); getch();
                break;
      case '3': recoridos();
                break;
      case '4': consulta();
                break;
      case '5': borrados();
                break;
      case '6':
                clrscr();
                FILE *fp;
                               tree arbol;
                               cadena ruta;
                               cout<<"Ingrese ruta para guardar [D:\\*.bin]: ";
                               cin>>ruta;
                               fp=fopen(ruta,"w+b");
                               if(fp==NULL){
                                               cout<<"No se puede crear archibo";
                               getch();
                return;
                                }
                               arbol=ABB;
         guardar(arbol,fp);
            fclose(fp);
                break;
      case '7': abrir();
                break;
      }
   }while(opc!='0');
}
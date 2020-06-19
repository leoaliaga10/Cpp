//Ejercicio Arboles 01
//Este programa lee el numero de nodos que va a tener el árbol, luego los lee y al final los muestra en orden, pre orden, y post orden.

#include<iostream.h>
#include<conio.h>
struct info{
  int numero;
  struct info *izq;
  struct info *der;
};
info *tree;
void insertar(info **arbol,int x){
                clrscr();
   if(!*arbol){
                *arbol=new info;
      (*arbol)->numero=x;
      (*arbol)->izq=NULL;
      (*arbol)->der=NULL;
   }
   else if(x<(*arbol)->numero){
                insertar(&(*arbol)->izq,x);
   }
   else if(x>(*arbol)->numero){
                insertar(&(*arbol)->der,x);
   }
}
void verarbol(info *arbol,int x){
   if(!arbol){
                return;
   }
   verarbol(arbol->der,x+1);
   for(int i=0;i<x;i++)cout<<" ";
   cout<<arbol->numero<<endl;
   verarbol(arbol->izq,x+1);
}
void preorden(info *arbol){
   if (arbol != NULL){
     cout<<arbol->numero<<" ";
     preorden(arbol->izq);
     preorden(arbol->der);
   }
}
void posorden(info *arbol){
   if (arbol != NULL){
     posorden(arbol->izq);
     posorden(arbol->der);
     cout<<arbol->numero<<" ";
   }
}
void orden(info *arbol){
   if (arbol != NULL){
     orden(arbol->izq);
     cout<<arbol->numero<<" ";
     orden(arbol->der);
   }
}
void main(){
                tree=NULL;
   int n,x;
   cout<<"Ingrese numero de elementos : ";
   cin>>n;
   for(int i=0;i<n;i++){
                cout<<"Ingrese nodo ["<<(i+1)<<"] : ";
      cin>>x;
      insertar(&tree,x);
   }
   verarbol(tree,n);
   cout<<endl<<"Preorden: ";preorden(tree);
   cout<<endl<<"Posorden: ";posorden(tree);
   cout<<endl<<"En orden: ";orden(tree);
   getch();
}
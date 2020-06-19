//Ejercicio lista enlazada doble 01
//Esta aplicación es un buen ejemplo sobre listas enlazadas dobles, lee un registro ordenando por nombre, también puede eliminar registros por nombre (básico).

#include<iostream.h>
#include<conio.h>
typedef char cadena[20];
struct persona{
                cadena nombre;
   float sueldo;
   persona *next;
   persona *prior;
};
persona *firs,*last;
char menu(){
                clrscr();
                char opc;
                cout<<"MENU PRINCIPAL";
                cout<<"\n--------------";
                cout<<"\n[1] Insertar elemento";
                cout<<"\n[2] Ver lista";
   cout<<"\n[3] Eliminar elemento";
                cout<<"\n[0] Salir";
                cout<<"\nEliga una opcion: ";
                cin>>opc;
                return opc;
} 
//Funcion ingresar ordenado
void dls_store(persona *i,persona **firs,persona **last){
                persona *old,*p;
   //Primer elemento de lista
   if(*last==NULL){
                               i->next=NULL;
      i->prior=NULL;
      *last=i;
      *firs=i;
      return;
   }
   //************************
   p=*firs;
   old=NULL;
   while(p){//Cuando se inserta en el centro de la lista
                               if(strcmpi(p->nombre,i->nombre)<0){
                                               old=p;
         p=p->next;
      }
      else{
                if(p->prior){
                                                               p->prior->next=i;
            i->next=p;
            i->prior=p->prior;
            p->prior=i;
            return;
         }
         i->next=p;
         i->prior=NULL;
         p->prior=i;
         *firs=i;
         return;
      }
   }   //*********************************
                //insertar al final de la lista
   old->next=i;
   i->next==NULL;
   i->prior=old;
   *last=i;
   //***************************
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
      dls_store(info,&firs,&last);

}
void dldelete(persona *i,persona **firs,persona **last){
                //*i es el elemento a eliminar;
   if(i->prior){
                               i->prior->next=i->next;
   }
   else{ //primer elemento de la lista
                               *firs=i->next;
      if(firs){
                i->prior='\0'; //="\0"
      }
   }
   if(i->next){
                               i->next->prior=i->prior;
   }
   else{//ultimo elemento de la lista
                               *last=i->prior;
   }
}
persona *buscar(persona *firs,cadena nom){
                clrscr();
   while(firs){
                if(!strcmpi(nom,firs->nombre)){
                return firs;
      }
      firs=firs->next;
                }
   return NULL;
}
void eliminar(){
                clrscr();
   persona *dato;
   cadena nom;
   cout<<"Ingrese nombre a eliminar : ";
   cin>>nom;
   dato=buscar(firs,nom);
   //p=buscarant(start,nom);
   if (dato==NULL){
                cout<<"El elmento no se puede eliminar xq no existe";
   }
   else{
                dldelete(dato,&firs,&last);
   }
}
void ver(){
                clrscr();
   persona *info;
   info=firs;
   while(info){
      cout<<"Nombre : "<<info->nombre<<endl;
      cout<<"Sueldo : "<<info->sueldo<<endl<<endl;
      info=info->next;
   }
   getch();
}
void main(){
char opc;
                firs=last=NULL;
   do{
     switch(opc=menu()){
                case '1': insertar();
                break;
      case '2': ver();
                break;
      case '3': eliminar();
                break;
      }
   }while(opc!='0');

}
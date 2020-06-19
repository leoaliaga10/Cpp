//Ejercicio Ordenacion 03
/*
Este programa es similar al anterior genera números hasta 100 000 aleatoriamente, y mide el tiempo de ordenación de los metodos Intercambio, Inserción y Selección, también realiza una busqueda binaria de números:

[1] Escoger vector
[2] Generar Vector
[3] Ver Vector
[4] Ordenar por Selección
[5] Ordenar por Inserción
[6] Ordenar por Intercambio
[7] Ordenar por QuickSort ascendente
[8] Ordenar por QuickSort descendente
[9] Busqueda binaria
[0] Salir
*/
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#define lim 100000
char menu(){
                clrscr();
                char op;
                cout<<"MENU PRINCIPAL";
                cout<<"\n--------------";
                cout<<"\n[1] Escoger vector";
                cout<<"\n[2] Generar Vector";
   cout<<"\n[3] Ver Vector";
   cout<<"\n[4] Ordenar por Seleccion";
   cout<<"\n[5] Ordenar por Insercion";
   cout<<"\n[6] Ordenar por Intercambio";
   cout<<"\n[7] Ordenar por QuickSort ascendente";
   cout<<"\n[8] Ordenar por QuickSort descendente";
   cout<<"\n[9] Busqueda binaria";
                cout<<"\n[0] Salir";
                cout<<"\nEliga una opcion: ";
                cin>>op;
                return op;
}
void escogervector(long int *i){
                clrscr();
   cout<<"Ingresar tamaño del vector: ";
   cin>>*i;
}
void generarvector(float *v,long int i){
                clrscr();
   randomize();
                for(int k=0;k<i;k++){
                               *(v+k)=(1+rand()&i);
   }
}
void vervector(float *v,long int n){
                clrscr();
   for(int i=0;i<n;i++){
                cout<<"Dato "<<(i+1)<<" : "<<*(v+i)<<endl;
   }
   getch();

}
void ordxselecion(float *v,long int n){
                clrscr();
   time_t comienzo, final;
   int k;
   float T;
   comienzo = time( NULL );
   for(int i=0;i<n-1;i++){
                k=i;
      T=*(v+i);
      for(int j=i+1;j<n;j++){
                                               if(*(v+j)<T){
                k=j;
            T=*(v+j);
         }
      }
      *(v+k)=*(v+i);
      *(v+i)=T;
   }
   final = time( NULL );
   cout<<"El tiempo transcurrido es: "<<difftime(final, comienzo);
   getch();
}
void ordxinsercion(float *v,long int n){
                clrscr();
   time_t comienzo, final;
   int j;
   float T;
   comienzo = time( NULL );
   for(int i=0;i<n;i++){
                T=*(v+i);
      j=i;
                while(j>0 && T<*(v+j-1)){
                                                               *(v+j)=*(v+j-1);
            j--;
         }
      *(v+j)=T;
   }
    final = time( NULL );
   cout<<"El tiempo transcurrido es: "<<difftime(final, comienzo);
   getch();
}
void ordxintercambio(float *v,long int n){
                clrscr();
   time_t comienzo, final;
   float T;
   comienzo = time( NULL );
   for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                if(*(v+i)>*(v+j)){
                T=*(v+i);
            *(v+i)=*(v+j);
            *(v+j)=T;
         }
      }
   }
   final = time( NULL );
   cout<<"El tiempo transcurrido es: "<<difftime(final, comienzo);
   getch();
}
void quicksortasc(float *a,int izq,int der){
                clrscr();
                int i,j,centro;
   float pivote,temp;
   centro=(izq+der)/2;
   if(*(a+izq)>*(a+centro)){
      temp=*(a+centro);
      *(a+centro)=*(a+izq);
      *(a+izq)=temp;
   }
   if(*(a+centro)>*(a+der)){
      temp=*(a+centro);
      *(a+centro)=*(a+der);
      *(a+der)=temp;
   }
   if(*(a+izq)>*(a+centro)){
      temp=*(a+centro);
      *(a+centro)=*(a+izq);
      *(a+izq)=temp;
   }
   i=izq;
   j=der;
   pivote=*(a+centro);
   while(i<=j){
                while(*(a+i)<pivote)i++;
      while(*(a+j)>pivote)j--;
      if(i<=j){
                temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
         i++;
         j--;
      }
   }
   if(izq<j){
   quicksortasc(a,izq,j);}
   if(i<der){
   quicksortasc(a,i,der);}
}
void quicksortdes(float *a,int izq,int der){
                clrscr();
                int i,j,centro;
   float pivote,temp;
   centro=(izq+der)/2;
   if(*(a+izq)<*(a+centro)){
      temp=*(a+centro);
      *(a+centro)=*(a+izq);
      *(a+izq)=temp;
   }
   if(*(a+centro)<*(a+der)){
      temp=*(a+centro);
      *(a+centro)=*(a+der);
      *(a+der)=temp;
   }
   if(*(a+izq)<*(a+centro)){
      temp=*(a+centro);
      *(a+centro)=*(a+izq);
      *(a+izq)=temp;
   }
   i=izq;
   j=der;
   pivote=*(a+centro);
   while(i<=j){
                while(*(a+i)>pivote)i++;
      while(*(a+j)<pivote)j--;
      if(i<=j){
                temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
         i++;
         j--;
      }
   }
   if(izq<j){
   quicksortdes(a,izq,j);}
   if(i<der){
   quicksortdes(a,i,der);}
}
void busbinaria(float *v,int i){
                clrscr();
   int k,bajo=0,alto=i-1,cen;
   cen=(bajo+alto)/2;
   quicksortasc(v,bajo,alto);
   cout<<"Ingrese Elemeno a buscar: ";
   cin>>k;
   while((bajo<alto) && (*(v+cen)!=k)){
                               if(k<*(v+cen)){
                                               alto=cen-1;
      }
      else{
                bajo=cen+1;
      }
      cen=(bajo+alto)/2;
   }
   if (k==*(v+cen)){
                cout<<"El elemento encontrado es: "<<*(v+cen);
      cout<<"\nLa posicion del elemento encontrado es: "<<cen;
   }
   else{
                cout<<"El elemento no se encuentra: ";
   }
   getch();
}
void main(){
   float vector[lim];
                long int i=0;
   int izq=0;
   char op;
                do{
                switch(op=menu()){
                case '1': escogervector(&i);
                break;
                case '2': generarvector(&vector[0],i);
                break;
         case '3': vervector(&vector[0],i);
                break;
         case '4': ordxselecion(&vector[0],i);
                break;
         case '5': ordxinsercion(&vector[0],i);
                break;
         case '6': ordxintercambio(&vector[0],i);
                break;
         case '7': quicksortasc(&vector[0],izq,i-1);
                break;
         case '8': quicksortdes(&vector[0],izq,i-1);
                break;
         case '9': busbinaria(&vector[0],i);
                break;
      }
   }while(op!='0');
}

                  }while(opc!='0');
}
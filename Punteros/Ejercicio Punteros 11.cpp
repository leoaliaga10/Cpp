//Ejercicio Punteros 11
//En este ejemplo podemos leer N notas, la función leer nos pide ingresar nota hasta que pongamos una nota invalida que puede ser 21 o -2, luego podemos ver el vector con todas las notas ingresadas, y al final ver la frecuencia de repeticion de las notas.

//Vectores
#include<iostream.h>
#include<conio.h>
char menu(){
     clrscr();
     char op;
     cout<<"MENU PRINCIPAL";
     cout<<"\n--------------";
     cout<<"\n[1] Leer notas";
     cout<<"\n[2] ver notas";
   cout<<"\n[3] ver frecuencia";
     cout<<"\n[0] Salir";
     cout<<"\nEliga una opcion: ";
     cin>>op;
     return op;
}
void leernotas(float *v,int *i){
     clrscr();
   *i=*i-1;
     do{
     *i=*i+1;
     cout<<"Ingresar nota "<<(*i+1)<<" : ";
     cin>>*(v+*i);
   }while(0<=*(v+*i)&&*(v+*i)<=20);
}
void vernotas(float *v,int *n){
     clrscr();
   for(int i=0;i<*n;i++){
     cout<<"Nota "<<(i+1)<<" : "<<*(v+i)<<endl;
   }
   getch();

}
void frecuencias(float *v,int *n){
     clrscr();
int a=*n;
float vector[100],*p;
for(int i=0;i<*n;i++){
     vector[i]=*(v+i);
}
p=&vector[0];
   float c=1;
   for (int i=0;i<a;i++){
     for(int j=i+1;j<a;j++){
                if(*(p+i)==*(p+j)){
               for(int k=j;k<a;k++){
                     *(p+k)=*(p+k+1);
                 }
               a=a-1;
               j=i;
                     c++;
            }
           }

       cout<<"Las veces que se repite la nota "<<*(p+i)<<" es: "<<c<<endl;
       c=1;
   }
     getch();
}
void main(){
     float vector[100];
   int i=0;
   char op;
     do{
     switch(op=menu()){
          case '1': leernotas(&vector[0],&i);
         break;
         case '2': vernotas(&vector[0],&i);
                break;
         case '3': frecuencias(&vector[0],&i);
                break;
      }
   }while(op!='0');
}
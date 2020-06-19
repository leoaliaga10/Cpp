//Ejercicio Archivos 05
//Este programa almacena un registro con apellido y sueldo en archivo binario (*.bin), también lo recupera mediante la ruta en la cual fue guardado.

#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#define tan 50
typedef char cadena[20];
typedef struct{
                cadena apellido;
      float sueldo;
                }persona;

char menu(){
                clrscr();
                char opc;
                cout<<"MENU PRINCIPAL";
                cout<<"\n--------------";
                cout<<"\n[1] Añadir";
                cout<<"\n[2] Eliminar";
   cout<<"\n[3] Grabar";
   cout<<"\n[4] Recuperar";
   cout<<"\n[5] Ver";
                cout<<"\n[0] Salir";
                cout<<"\nEliga una opcion: ";
                cin>>opc;
                return opc;
}
void agregar(persona *v,int *n){
                clrscr();
   int pos;
   do{
   clrscr();
   cout<<"Ingrese posicion: ";
   cin>>pos;
   }while(pos<0||pos>*n);
   if (pos==*n){
                *n=*n+1;
   }
   else{
                for(int i=*n;i>pos;i--){
                                               *(v+i)=*(v+i-1);
                }
                *n=*n+1;
   }
   persona temp;
   clrscr();
   cout<<"Ingrese apellido: ";
   cin>>temp.apellido;
   cout<<endl;
   cout<<"Ingrese sueldo: ";
   cin>>temp.sueldo;
   *(v+pos)=temp;
}
void elimina(persona *v, int *n){
                clrscr();
   int pos;
   do{
   clrscr();
   cout<<"Ingrese posicion: ";
   cin>>pos;
   }while(pos<0||pos>=*n);
   if (pos==*n-1){
                *n=*n-1;
   }
   else{
                for(int i=*n-1;i>pos;i--){
                                               *(v+i-1)=*(v+i);
                }
                *n=*n-1;
   }
}
void graba(persona *v, int n){
                clrscr();
   FILE *fp;
   char nombre[30];
   cout<<"Ingrese nombre archivo (con ruta para grabar): ";
   cin>>nombre;
   if((fp=fopen(nombre,"wb"))==NULL){
                cout<<"No se puede grabar archivo";
      return;
   }
   fwrite(v,sizeof(persona),n,fp);
   fclose(fp);
}
void recupera(persona *v, int *n){
                clrscr();
   FILE *fp;
   char nombre[30];
   cout<<"Ingrese nombre archivo a recuperar: ";
   cin>>nombre;
   if((fp=fopen(nombre,"rb"))==NULL){
                cout<<"No se puede abrir archivo";
      return;
   }
   *n=0;
   while(1){
                if(feof(fp)){break;}
      if(*n==tan){
      cout<<"sobredimencionamiento";
      break;}
      fread((v+*n),sizeof(persona),1,fp);
      *n=*n+1;
   }
   fclose(fp);
   *n=*n-1;
}
void ver(persona *v,int n){
                clrscr();
                for(int i=0;i<n;i++){
                               cout<<"Apellido: "<<(i+1)<<" : "<<(v+i)->apellido<<endl;
      cout<<"Sueldo "<<(i+1)<<" : "<<(v+i)->sueldo<<endl;
   }
   getch();
}
void main(){
                persona v[tan];
   int n=0;
   char opc;
                               do{
                                               switch(opc=menu()){
                                               case'1': agregar(&v[0],&n);
                                                                                              break;
         case'2': elimina(&v[0],&n);
                                                                                              break;
         case'3': graba(&v[0],n);
                                                                                              break;
         case'4': recupera(&v[0],&n);
                                                                                              break;
         case'5': ver(&v[0],n);
                                                                                              break;
                                               }

                               }while(opc!='0');
}
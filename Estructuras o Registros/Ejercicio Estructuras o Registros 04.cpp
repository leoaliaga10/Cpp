//Ejercicio Estructuras o Registros 04
/*
Este ejemplo realiza el siguiente menú: (TODA ORDENACION LA HACE MEDIANTE QUICKSORT)

[1] Insertar dato
[2] Ver datos
[3] Eliminar dato
[4] Modificar dato
[5] Ordenar por Apellido paterno (Ascendentemente)
[6] Ordenar por Nombre (Descendentemente)
[7] Ordenar por Apellido paterno y Nombre (Ascendentemente)
[8] Ordenar por Nombre (Ascendentemente) y por Sueldo (Descendentemente)
[9] Ordenar por Fecha de nacimiento (Descendentemente)
[a] Buscar por Apellido paterno
[b] Buscar por Nombre
[c] Buscar por Apellido paterno, Nombre y Sueldo
[d] Buscar por Fecha  de ingreso
[0] Salir
*/
#include<iostream.h>
#include<conio.h>
typedef char cadena[20];
typedef struct{
                int dia;
      int mes;
      int anio;
                }fecha;
typedef struct{
                cadena nombre;
      cadena appaterno;
      cadena apmaterno;
      fecha fnaci;
      fecha fingre;
      float sueldo;
                }persona;

char menu(){
                clrscr();
                char opc;
                cout<<"MENU PRINCIPAL";
                cout<<"\n--------------";
                cout<<"\n[1] Insertar dato";
                cout<<"\n[2] Ver datos";
   cout<<"\n[3] Eliminar dato";
   cout<<"\n[4] Modificar dato";
   cout<<"\n[5] Ordenar por Apellido paterno (Ascendentemente)";
   cout<<"\n[6] Ordenar por Nombre (Descendentemente)";
   cout<<"\n[7] Ordenar por Apellido paterno y Nombre (Ascendentemente)";
   cout<<"\n[8] Ordenar por Nombre (Ascendentemente) y por Sueldo (Descendentemente)";
   cout<<"\n[9] Ordenar por Fecha de nacimiento (Descendentemente)";
   cout<<"\n[a] Buscar por Apellido paterno";
   cout<<"\n[b] Buscar por Nombre";
   cout<<"\n[c] Buscar por Apellido paterno, Nombre y Sueldo";
   cout<<"\n[d] Buscar por Fecha  de ingreso";
                cout<<"\n[0] Salir";
                cout<<"\nEliga una opcion: ";
                cin>>opc;
                return opc;
}
void vervector(persona *v,int n){
                clrscr();
                for(int i=0;i<n;i++){
                               cout<<"Nombre: "<<(i+1)<<" : "<<(v+i)->nombre<<endl;
      cout<<"Apellido paterno: "<<(i+1)<<" : "<<(v+i)->appaterno<<endl;
      cout<<"Apellido materno: "<<(i+1)<<" : "<<(v+i)->apmaterno<<endl;
      cout<<"Sueldo "<<(i+1)<<" : "<<(v+i)->sueldo<<endl;
      cout<<"Fecha de nacimiento: "<<(v+i)->fnaci.dia<<" - "<<(v+i)->fnaci.mes<<" - "<<(v+i)->fnaci.anio<<endl;
      cout<<"Fecha de Ingreso: "<<(v+i)->fingre.dia<<" - "<<(v+i)->fingre.mes<<" - "<<(v+i)->fingre.anio<<endl<<endl;

   }
   getch();
}
void funfecha(int a,int m,int *d){
      switch(m){
                case 1: case 3: case 5:case 7:case 8:case 10:case 12:
                               *d=31;
                break;
                case 2:
                *d=28;
                if (a % 4 == 0){
               *d=29;
                               if (a % 100 == 0){
                  *d=28;
                               }
                                               }
                               if (a % 400 == 0){
               *d=29;
                               }
                break;
                case 4:case 6:case 9:case 11:
                               *d=30;
                break;
      }
}
void insertar(persona *v,int *n){
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
   cout<<"Ingrese nombre: ";
   cin>>temp.nombre;
   //************************************
   cout<<"Ingrese apellido paterno: ";
   cin>>temp.appaterno;
   //**********************************
   cout<<"Ingrese apellido materno: ";
   cin>>temp.apmaterno;
   //*******************************
   cout<<"Ingrese sueldo: ";
   cin>>temp.sueldo;
   //Lectura de fecha de nacimiento
   cout<<"Ingrese fecha de nacimiento: "<<endl<<endl;
   do{
                cout<<"Año: ";
   cin>>temp.fnaci.anio;
   }while(temp.fnaci.anio<1900||temp.fnaci.anio>2007);
   do{
   cout<<"Mes: ";
   cin>>temp.fnaci.mes;
   }while(temp.fnaci.mes<1 ||temp.fnaci.mes>12 );
   int a,m,d;
   a=int(temp.fnaci.anio);
   m=int(temp.fnaci.mes);
   funfecha(a,m,&d);
   do{
   cout<<"Día: ";
   cin>>temp.fnaci.dia;
   }while(temp.fnaci.dia<1 || temp.fnaci.dia>d);
   cout<<endl;
   //Lectura de fecha de ingreso
   cout<<"Ingrese fecha de ingreso: "<<endl<<endl;
   do{
                cout<<"Año: ";
   cin>>temp.fingre.anio;
   }while(temp.fingre.anio<1900||temp.fingre.anio>2007);
   do{
   cout<<"Mes: ";
   cin>>temp.fingre.mes;
   }while(temp.fingre.mes<1 ||temp.fingre.mes>12 );
   a=int(temp.fingre.anio);
   m=int(temp.fingre.mes);
   funfecha(a,m,&d);
   do{
   cout<<"Día: ";
   cin>>temp.fingre.dia;
   }while(temp.fingre.dia<1 || temp.fingre.dia>d);
   cout<<endl;
   //***********************************
   *(v+pos)=temp;
}

void eliminar(persona *v,int *n){
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
void modificar(persona *v){
                clrscr();
   int pos;
   clrscr();
   persona temp;
   cout<<"Ingrese posicion: ";
   cin>>pos;

   cout<<"Ingrese nombre: ";
   cin>>temp.nombre;
   //************************************
   cout<<"Ingrese apellido paterno: ";
   cin>>temp.appaterno;
   //**********************************
   cout<<"Ingrese apellido materno: ";
   cin>>temp.apmaterno;
   //*******************************
   cout<<"Ingrese sueldo: ";
   cin>>temp.sueldo;
   //Lectura de fecha de nacimiento
   cout<<"Ingrese fecha de nacimiento: "<<endl<<endl;
   do{
                cout<<"Año: ";
   cin>>temp.fnaci.anio;
   }while(temp.fnaci.anio<1900||temp.fnaci.anio>2007);
   do{
   cout<<"Mes: ";
   cin>>temp.fnaci.mes;
   }while(temp.fnaci.mes<1 ||temp.fnaci.mes>12 );
   int a,m,d;
   a=int(temp.fnaci.anio);
   m=int(temp.fnaci.mes);
   funfecha(a,m,&d);
   do{
   cout<<"Día: ";
   cin>>temp.fnaci.dia;
   }while(temp.fnaci.dia<1 || temp.fnaci.dia>d);
   cout<<endl;
   //Lectura de fecha de ingreso
   cout<<"Ingrese fecha de ingreso: "<<endl<<endl;
   do{
                cout<<"Año: ";
   cin>>temp.fingre.anio;
   }while(temp.fingre.anio<1900||temp.fingre.anio>2007);
   do{
   cout<<"Mes: ";
   cin>>temp.fingre.mes;
   }while(temp.fingre.mes<1 ||temp.fingre.mes>12 );
                a=int(temp.fingre.anio);
   m=int(temp.fingre.mes);
   funfecha(a,m,&d);
   do{
   cout<<"Día: ";
   cin>>temp.fingre.dia;
   }while(temp.fingre.dia<1 || temp.fingre.dia>d);
   cout<<endl;
   //***********************************
   *(v+pos)=temp;
}
void ordenarnombre(persona*v,int izq,int der){
                clrscr();
   //Metodo quicksort descendente
   int i,j,centro;
   persona pivote,temp;
   centro=(izq+der)/2;
   if(strcmpi((v+izq)->nombre,(v+centro)->nombre)<0){
      temp=*(v+centro);
      *(v+centro)=*(v+izq);
      *(v+izq)=temp;
   }
   if(strcmpi((v+centro)->nombre,(v+der)->nombre)<0){
      temp=*(v+centro);
      *(v+centro)=*(v+der);
      *(v+der)=temp;
   }
   if(strcmpi((v+izq)->nombre,(v+centro)->nombre)<0){
      temp=*(v+centro);
      *(v+centro)=*(v+izq);
      *(v+izq)=temp;
   }
   i=izq;
   j=der;
   pivote=*(v+centro);
   while(i<=j){
                while(strcmpi((v+i)->nombre,pivote.nombre)>0){
      i++;}
      while(strcmpi((v+j)->nombre,pivote.nombre)<0){
      j--;}
      if(i<=j){
                temp=*(v+i);
                *(v+i)=*(v+j);
                *(v+j)=temp;
         i++;
         j--;
      }
   }
   if(izq<j){
   ordenarnombre(v,izq,j);}
   if(i<der){
   ordenarnombre(v,i,der);}
}
void ordenarappaterno(persona*v,int izq,int der){
                               clrscr();
   //Metodo quicksort ascendente
   int i,j,centro;
   persona pivote,temp;
   centro=(izq+der)/2;
   if(strcmpi((v+izq)->appaterno,(v+centro)->appaterno)<0){
      temp=*(v+centro);
      *(v+centro)=*(v+izq);
      *(v+izq)=temp;
   }
   if(strcmpi((v+centro)->appaterno,(v+der)->appaterno)<0){
      temp=*(v+centro);
      *(v+centro)=*(v+der);
      *(v+der)=temp;
   }
   if(strcmpi((v+izq)->appaterno,(v+centro)->appaterno)<0){
      temp=*(v+centro);
      *(v+centro)=*(v+izq);
      *(v+izq)=temp;
   }
   i=izq;
   j=der;
   pivote=*(v+centro);
   while(i<=j){
                while(strcmpi((v+i)->appaterno,pivote.appaterno)<0){
      i++;}
      while(strcmpi((v+j)->appaterno,pivote.appaterno)>0){
      j--;}
      if(i<=j){
                temp=*(v+i);
                *(v+i)=*(v+j);
                *(v+j)=temp;
         i++;
         j--;
      }
   }
   if(izq<j){
   ordenarappaterno(v,izq,j);}
   if(i<der){
   ordenarappaterno(v,i,der);}
}
void ordenarnombreasc(persona*v,int izq,int der){
  clrscr();
   //Metodo quicksort ascendente
   int i,j,centro;
   persona pivote,temp;
   centro=(izq+der)/2;
   if(strcmpi((v+izq)->nombre,(v+centro)->nombre)<0){
      temp=*(v+centro);
      *(v+centro)=*(v+izq);
      *(v+izq)=temp;
   }
   if(strcmpi((v+centro)->nombre,(v+der)->nombre)<0){
      temp=*(v+centro);
      *(v+centro)=*(v+der);
      *(v+der)=temp;
   }
   if(strcmpi((v+izq)->nombre,(v+centro)->nombre)<0){
      temp=*(v+centro);
      *(v+centro)=*(v+izq);
      *(v+izq)=temp;
   }
   i=izq;
   j=der;
   pivote=*(v+centro);
   while(i<=j){
                while(strcmpi((v+i)->nombre,pivote.nombre)<0){
      i++;}
      while(strcmpi((v+j)->nombre,pivote.nombre)>0){
      j--;}
      if(i<=j){
                temp=*(v+i);
                *(v+i)=*(v+j);
                *(v+j)=temp;
         i++;
         j--;
      }
   }
   if(izq<j){
   ordenarnombre(v,izq,j);}
   if(i<der){
   ordenarnombre(v,i,der);}
}
int ordappaternombremenor(persona *v1,persona *v2){
                clrscr();
   if(   (strcmpi(v1->appaterno,v2->appaterno)>0)||
                               (strcmpi(v1->appaterno,v2->appaterno)==0)&&(strcmpi(v1->nombre,v2->nombre)>0)   ){
         return 1;
   }
   else if(      (strcmpi(v1->appaterno,v2->appaterno)==0)||
                                       (strcmpi(v1->appaterno,v2->appaterno)==0)&&(strcmpi(v1->nombre,v2->nombre)==0)   ){
       return 2;
   }
   else{
                return 0;
   }
}

void ordappaternombre(persona*v,int izq,int der,persona *pivote){
                clrscr();
   int i,j,centro;
   persona temp;
   centro=(izq+der)/2;
   if(ordappaternombremenor((v+izq),(v+centro))==1){
      temp=*(v+centro);
      *(v+centro)=*(v+izq);
      *(v+izq)=temp;
   }
   if(ordappaternombremenor((v+centro),(v+der))==1){
      temp=*(v+centro);
      *(v+centro)=*(v+der);
      *(v+der)=temp;
   }
   if(ordappaternombremenor((v+izq),(v+centro))==1){
      temp=*(v+centro);
      *(v+centro)=*(v+izq);
      *(v+izq)=temp;
   }
   i=izq;
   j=der;
   pivote=(v+centro);
   while(i<=j){
                while(ordappaternombremenor((v+i),pivote)==0){
      i++;}
      while(ordappaternombremenor((v+j),pivote)==1){
      j--;}
      if(i<=j){
                temp=*(v+i);
                *(v+i)=*(v+j);
                *(v+j)=temp;
         i++;
         j--;
      }
   }
   if(izq<j){
   ordappaternombre(v,izq,j,pivote);}
   if(i<der){
   ordappaternombre(v,i,der,pivote);}
}
int ordnomsuel(persona *v1,persona *v2){
                clrscr();
   if(   (strcmpi(v1->nombre,v2->nombre)>0)||
                               (strcmpi(v1->nombre,v2->nombre)==0)&&(v1->sueldo<v2->sueldo)   ){
         return 1;
   }
   else if(  (strcmpi(v1->nombre,v2->nombre)==0)&&(v1->sueldo==v2->sueldo)){
               return 2;

   }
   else{
                return 0;
   }
}
void ordnombresueldo(persona *v,int izq,int der,persona *pivote){
                clrscr();
   int i,j,centro;
   persona temp;
   centro=(izq+der)/2;
   if(ordnomsuel((v+izq),(v+centro))==1){
      temp=*(v+centro);
      *(v+centro)=*(v+izq);
      *(v+izq)=temp;
   }
   if(ordnomsuel((v+centro),(v+der))==1){
      temp=*(v+centro);
      *(v+centro)=*(v+der);
      *(v+der)=temp;
   }
   if(ordnomsuel((v+izq),(v+centro))==1){
      temp=*(v+centro);
      *(v+centro)=*(v+izq);
      *(v+izq)=temp;
   }
   i=izq;
   j=der;
   pivote=(v+centro);
   while(i<=j){
                while(ordnomsuel((v+i),pivote)==0){
      i++;}
      while(ordnomsuel((v+j),pivote)==1){
      j--;}
      if(i<=j){
                temp=*(v+i);
                *(v+i)=*(v+j);
                *(v+j)=temp;
         i++;
         j--;
      }
   }
   if(izq<j){
   ordnombresueldo(v,izq,j,pivote);}
   if(i<der){
   ordnombresueldo(v,i,der,pivote);}
}
int ordfechanacmenor(persona  *f1,persona *f2){
                clrscr();
   if(   (f1->fnaci.anio<f2->fnaci.anio)||
                               (f1->fnaci.anio==f2->fnaci.anio)&&(f1->fnaci.mes<f2->fnaci.mes) ||
         (f1->fnaci.anio==f2->fnaci.anio)&&(f1->fnaci.mes==f2->fnaci.mes) &&
         (f1->fnaci.dia<f2->fnaci.dia)             ){
         return 1;
         }
   else if(    (f1->fnaci.anio==f2->fnaci.anio)&&(f1->fnaci.mes==f2->fnaci.mes) &&
         (f1->fnaci.dia==f2->fnaci.dia)    ){
                                               return 2;
   }
   else{
                return 0;
   }
}
void ordenarfechanac(persona *v,int izq,int der,persona* pivote){
                clrscr();
   int i,j,centro;
   persona temp;
   centro=(izq+der)/2;
   if(ordfechanacmenor((v+izq),(v+centro))==1){
      temp=*(v+centro);
      *(v+centro)=*(v+izq);
      *(v+izq)=temp;
   }
   if(ordfechanacmenor((v+centro),(v+der))==1){
      temp=*(v+centro);
      *(v+centro)=*(v+der);
      *(v+der)=temp;
   }
   if(ordfechanacmenor((v+izq),(v+centro))==1){
      temp=*(v+centro);
      *(v+centro)=*(v+izq);
      *(v+izq)=temp;
   }
   i=izq;
   j=der;
   pivote=(v+centro);
   while(i<=j){
                while(ordfechanacmenor((v+i),pivote)==0){
      i++;}
      while(ordfechanacmenor((v+j),pivote)==1){
      j--;}
      if(i<=j){
                temp=*(v+i);
                *(v+i)=*(v+j);
                *(v+j)=temp;
         i++;
         j--;
      }
   }
   if(izq<j){
   ordenarfechanac(v,izq,j,pivote);}
   if(i<der){
   ordenarfechanac(v,i,der,pivote);}
}
void buscarappaterno(persona*v,int n){
   clrscr();
                int izq=0,der=n-1,cen;
   cen=(izq+der)/2;
   persona dato;
   ordenarappaterno(&v[0],izq,der);
   cout<<"Ingrese apellido paterno a buscar: ";
   cin>>dato.appaterno;
   while((izq<der) && (strcmpi((v+cen)->appaterno,dato.appaterno)!=0)){
                if(strcmpi(dato.appaterno,(v+cen)->appaterno)>0){
         izq=cen+1;
      }
      else{
                der=cen-1;
      }
      cen=(der+izq)/2;
   }
   clrscr();
   if(strcmpi(dato.appaterno,(v+cen)->appaterno)==0){
                cout<<"El elemento encontrado es: "<<(v+cen)->appaterno;
      cout<<"\nLa posicion del elemento encontrado es: "<<cen;
   }
   else{
                cout<<"El elemento no se encuentra";
   }
   getch();
}
void buscarnombre(persona*v,int n){
   clrscr();
                int izq=0,der=n-1,cen;
   cen=(izq+der)/2;
   persona dato;
                cout<<"Ingrese nombre a buscar: ";
   cin>>dato.nombre;
   ordenarnombreasc(v,izq,der);
   while((strcmpi(dato.nombre,(v+cen)->nombre)!=0)&&(izq<der)){
                if(strcmpi(dato.nombre,(v+cen)->nombre)>0){
      izq=cen+1;

      }
      else{
      der=cen-1;
      }
      cen=(izq+der)/2;
   }
   clrscr();
   if(strcmpi(dato.nombre,(v+cen)->nombre)==0){
                cout<<"El elemento encontrado es: "<<(v+cen)->nombre;
      cout<<"\nLa posicion del elemento encontrado es: "<<cen;
   }
   else{
      cout<<"El elemento no se encuentra";
   }
   getch();
}
int ordappaternonsuelmenor(persona  *v1,persona *v2){
   clrscr();
    if(  (strcmpi(v1->appaterno,v2->appaterno)>0)||
                               (strcmpi(v1->appaterno,v2->appaterno)==0)&&(strcmpi(v1->nombre,v2->nombre)>0)||
         (strcmpi(v1->appaterno,v2->appaterno)==0)&&(strcmpi(v1->nombre,v2->nombre)==0)&&
         (v1->sueldo>v2->sueldo)   ){
         return 1;
   }
   else if((strcmpi(v1->appaterno,v2->appaterno)==0)&&(strcmpi(v1->nombre,v2->nombre)==0)&&
         (v1->sueldo==v2->sueldo) ){
                               return 2;
   }
   else{
                return 0;
   }
}
void ordenarappaternombresueldo(persona *v,int izq, int der,persona *pivote){
                clrscr();
   int i,j,centro;
   persona temp;
   centro=(izq+der)/2;
   if(ordappaternonsuelmenor((v+izq),(v+centro))==1){
      temp=*(v+centro);
      *(v+centro)=*(v+izq);
      *(v+izq)=temp;
   }
   if(ordappaternonsuelmenor((v+centro),(v+der))==1){
      temp=*(v+centro);
      *(v+centro)=*(v+der);
      *(v+der)=temp;
   }
   if(ordappaternonsuelmenor((v+izq),(v+centro))==1){
      temp=*(v+centro);
      *(v+centro)=*(v+izq);
      *(v+izq)=temp;
   }
   i=izq;
   j=der;
   pivote=(v+centro);
   while(i<=j){
                while(ordappaternonsuelmenor((v+i),pivote)==0){
      i++;}
      while(ordappaternonsuelmenor((v+j),pivote)==1){
      j--;}
      if(i<=j){
                temp=*(v+i);
                *(v+i)=*(v+j);
                *(v+j)=temp;
         i++;
         j--;
      }
   }
   if(izq<j){
   ordenarappaternombresueldo(v,izq,j,pivote);}
   if(i<der){
   ordenarappaternombresueldo(v,i,der,pivote);}
}
void buscarappaternomsuel(persona *v,persona *dato,int n){
                clrscr();
   int izq=0,der=n-1,cen;
   cen=(izq+der)/2;
   ordenarappaternombresueldo(&v[0],izq,der,dato);
   cout<<"Ingrese dato a buscar: "<<endl<<endl;
                cout<<"Ingrese Nombre: ";
   cin>>dato->nombre;
   cout<<"Ingrese Apellido paterno: ";
   cin>>dato->appaterno;
   do{
   cout<<"Ingrese sueldo: ";
   cin>>dato->sueldo;
   }while(dato->sueldo<1);
   clrscr();
   while((izq<der)&&(ordappaternonsuelmenor(dato,(v+cen))!=2)){    //*******
                               if(ordappaternonsuelmenor((v+cen),dato)==1){
         der=cen-1;
                }
                else{
         izq=cen+1;
                }
      cen=(izq+der)/2;
   }
   if(ordappaternonsuelmenor(dato,(v+cen))==2){
      cout<<"El elemento ha sido encontrado en la posicion: "<<cen;
   }
   else{
                cout<<"El elemento no ha sido encontrado";
   }
   getch();

 

}
int fechaingigual(persona  *f1,persona *f2){
                clrscr();
   if(   (f1->fingre.anio==f2->fingre.anio)&&(f1->fingre.mes==f2->fingre.mes) &&
         (f1->fingre.dia==f2->fingre.dia)     ){
         return 1;
   }
   else{
                return 0;
   }
}
int ordfechaingmenor(persona  *f1,persona *f2){
                clrscr();
   if(   (f1->fingre.anio>f2->fingre.anio)||
                               (f1->fingre.anio==f2->fingre.anio)&&(f1->fingre.mes>f2->fingre.mes) ||
         (f1->fingre.anio==f2->fingre.anio)&&(f1->fingre.mes==f2->fingre.mes) &&
         (f1->fingre.dia>f2->fingre.dia)        ){
         return 1;
   }
   else if(    (f1->fingre.anio==f2->fingre.anio)&&(f1->fingre.mes==f2->fingre.mes) &&
         (f1->fingre.dia==f2->fingre.dia)  ){
         return 2;
   }
   else{
                return 0;
   }
}
void ordenarfechaing(persona *v,int izq,int der, persona *pivote){
                clrscr();
   int i,j,centro;
   persona temp;
   centro=(izq+der)/2;
   if(ordfechaingmenor((v+izq),(v+centro))==1){
      temp=*(v+centro);
      *(v+centro)=*(v+izq);
      *(v+izq)=temp;
   }
   if(ordfechaingmenor((v+centro),(v+der))==1){
      temp=*(v+centro);
      *(v+centro)=*(v+der);
      *(v+der)=temp;
   }
   if(ordfechaingmenor((v+izq),(v+centro))==1){
      temp=*(v+centro);
      *(v+centro)=*(v+izq);
      *(v+izq)=temp;
   }
   i=izq;
   j=der;
   pivote=(v+centro);
   while(i<=j){
                while(ordfechaingmenor((v+i),pivote)==0){
      i++;}
      while(ordfechaingmenor((v+j),pivote)==1){
      j--;}
      if(i<=j){
                temp=*(v+i);
                *(v+i)=*(v+j);
                *(v+j)=temp;
         i++;
         j--;
      }
   }
   if(izq<j){
   ordenarfechaing(v,izq,j,pivote);}
   if(i<der){
   ordenarfechaing(v,i,der,pivote);}
}
void buscarfechaing(persona *v,persona *dato,int n){
                clrscr();
   int izq=0,der=n-1,cen;
   cen=(izq+der)/2;
   ordenarfechaing(&v[0],izq,der,dato);
   cout<<"Ingrese fecha de ingreso a buscar: "<<endl<<endl;
   do{
                cout<<"Anio: ";
   cin>>dato->fingre.anio;
   }while(dato->fingre.anio<1900);
   do{
   cout<<"Mes: ";
   cin>>dato->fingre.mes;
   }while(dato->fingre.mes<1 ||dato->fingre.mes>12 );
   int a,m,d;
   a=int(dato->fingre.anio);
   m=int(dato->fingre.mes);
   funfecha(a,m,&d);
   do{
   cout<<"Día: ";
   cin>>dato->fingre.dia;
   }while(dato->fingre.dia<1 || dato->fingre.dia>d);
   clrscr();
   while((izq<der)&&(ordfechaingmenor(dato,(v+cen))!=2)){
                               if(ordfechaingmenor((v+cen),dato)==1){
         der=cen-1;
                }
                else{
         izq=cen+1;
                }
      cen=(izq+der)/2;
   }
   if(ordfechaingmenor(dato,(v+cen))==2){
      cout<<"El elemento ha sido encontrado en la posicion: "<<cen;
   }
   else{
                cout<<"El elemento no ha sido encontrado";
   }
   getch();
}
void main(){
                persona v[20],d,piv;
   int n=0;
   char opc;
                               do{
                                               switch(opc=menu()){
                                               case'2': vervector(&v[0],n);
                                                                                              break;
         case'1': insertar(&v[0],&n);
                                                                                              break;
         case'3': eliminar(&v[0],&n);
                                                                                              break;
         case'4': modificar(&v[0]);
                                                                                              break;
         case'5': ordenarappaterno(&v[0],0,n-1);
                                               break;
         case'6': ordenarnombre(&v[0],0,n-1);
                                               break;
         case'7': ordappaternombre(&v[0],0,n-1,&piv);
                                               break;
         case'8': ordnombresueldo(&v[0],0,n-1,&piv);
                                               break;
         case'9': ordenarfechanac(&v[0],0,n-1,&piv);
                                               break;
         case'a':        buscarappaterno(&v[0],n);
                  break;
         case'b': buscarnombre(&v[0],n);
                  break;
         case'c': buscarappaternomsuel(&v[0],&d,n);
                  break;
         case'd': buscarfechaing(&v[0],&d,n);
                  break;
                                               }

                               }while(opc!='0');
}
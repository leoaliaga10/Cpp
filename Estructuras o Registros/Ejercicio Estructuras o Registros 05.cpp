//Ejercicio Estructuras o Registros 05
/*
Esta aplicación realiza el siguiente menú (examen):

[1] Leer orden de la matriz
[2] Leer matriz
[3] Ver matriz
[4] Insertar fila en la matriz
[5] Eliminar fila en la matriz
[6] Ordenar por sueldo por filas (Ascendente)
[7] Calcular aumentos para mayores de 1500 y columnas impares
[0] Salir
*/
#include<iostream.h>
#include<conio.h>
typedef char cadena[20];
typedef struct{
                cadena nombre;
      float sueldo;   
      float aumento;
                }persona;
char menu(){
                clrscr();
                char op;
                cout<<"MENU PRINCIPAL";
                cout<<"\n--------------";
                cout<<"\n[1] Leer orden de la matriz";
                cout<<"\n[2] Leer matriz";
                cout<<"\n[3] Ver matriz";
                cout<<"\n[4] Insertar fila en la matriz";
   cout<<"\n[5] Eliminar fila en la matriz";
   cout<<"\n[6] Ordenar por sueldo por filas (Ascendente)";
   cout<<"\n[7] Calcular aumentos para mayores de 1500 y columnas impares";
                cout<<"\n[0] Salir";
                cout<<"\nEliga una opcion: ";
                cin>>op;
                return op;
}
void leerdato(char*s,int *n,int *c){
                clrscr();
   cout<<s;
   cin>>*n;
   *c=*n;
}
void leermatriz(persona *m,int n){
                clrscr();
   for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                cout<<"Ingrese Nombre: ";
                               cin>>(m+i*n+j)->nombre;
      cout<<"Ingrese Sueldo: ";
                               cin>>(m+i*n+j)->sueldo;
      (m+i*n+j)->aumento=0;
      cout<<endl;
                }
   }
}
void vermatriz(persona *m,int n,int c){
                clrscr();
   for(int i=0;i<n;i++){
                cout<<"\n";
                for(int j=0;j<c;j++){
      cout<<"\t"<<(m+i*c+j)->nombre;
      cout<<"\t"<<(m+i*c+j)->sueldo;
      cout<<"\t"<<(m+i*c+j)->aumento;
                }
   }
   getch();
}
void insertarf(persona *m,int *f,int *c){
                clrscr();
   int pos;
   do{
                cout<<"Ingresar posicion de fila : ";
      cin>>pos;
      clrscr();
   }while(pos>*f ||pos <0);
   if(pos==*f){
                *f=*f+1;
   }
   else{
                               for(int i=*f;i>pos;i--){
                               for(int j=*c;j>0;j--){
                               *(m+i*(*c)+j-1)=*(m+(i-1)*(*c)+j-1);
                                               }
                }
   *f=*f+1;
   }
   for(int i=0;i<*c;i++){
                cout<<"Nombre: ";
                cin>>(m+pos*(*c)+i)->nombre;
      cout<<"Sueldo: ";
                cin>>(m+pos*(*c)+i)->sueldo;
      (m+pos*(*c)+i)->aumento=0;
   }
}
void eliminarf(persona *m,int *f,int *c){
                clrscr();
   int pos;
   do{
                cout<<"Ingresar posicion de fila : ";
      cin>>pos;
      clrscr();
   }while(pos>*f-1 || pos<0);
   if (pos==*f-1){
                *f=*f-1;
   }
   else{
                for(int i=pos+1;i<*f;i++){
                               for(int j=0;j<*c;j++){
                               *(m+(i-1)*(*c)+j)=*(m+i*(*c)+j);
                                               }
                }
   *f=*f-1;
   }
}
void ordenarporfila(persona *v,int f,int c){
                clrscr();
   int k;
   persona T;
                for(int i=0;i<f;i++){
                for(int z=0;z<c;z++){
                T=*(v+i*c+z);
      k=z;
                while(k>0 && T.sueldo<(v+i*c+k-1)->sueldo){
                                                               *(v+i*c+k)=*(v+i*c+k-1);
            k--;
         }
      *(v+i*c+k)=T;
                }
   }
}
void aumentos(persona *v,int f,int c){
    for(int i=0;i<f;i++){
                for(int j=0;j<c;j++){
                if(j%2!=0){
                if((v+i*c+j)->sueldo>1500){
               (v+i*c+j)->aumento=(v+i*c+j)->sueldo*0.20;
            }
         }
      }
   }
}
void main(){
                int n=0,c=0;
                persona matriz[100][100];
                char op;
                               do{
                                               switch(op=menu()){
         case'1': leerdato("Ingrese orden de la matriz: ",&n,&c);
         break;
         case'2': leermatriz(&matriz[0][0],n);
         break;
         case'3': vermatriz(&matriz[0][0],n,c);
         break;
         case'4': insertarf(&matriz[0][0],&n,&c);
         break;
        case'5': eliminarf(&matriz[0][0],&n,&c);
         break;
         case'6': ordenarporfila(&matriz[0][0],n,c);                                                  break;
         case '7':aumentos(&matriz[0][0],n,c);
         break;
                                               }
                               }while(op!='0');
}
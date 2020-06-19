//Ejercicio Punteros 07
/*
Esta aplicación realiza el siguiente menú:

[1] Leer numero de datos
[2] Leer nombres en vector 
[3] Visualizar vector 
[4] Eliminar elemento 
[0] Salir
*/

//Tipo definico por usuario "Cadena"

#include<iostream.h>
#include<conio.h>
#include<string.h>

typedef char cadena[30];
//Tipo de dato definido por el usuario 
//es decir en lugar de "char" usaremos la palabra "cadena"

char menu()
{ char op;
cout<<"\n\n\tMENU";
cout<<"\n------------------------------";
cout<<"\nLeer n ....................(1)";
cout<<"\nLeer vector ...............(2)";
cout<<"\nVer vector ................(3)";
cout<<"\nEliminar ..................(4)";
cout<<"\nSalir .....................(0)";
cout<<"\n------------------------------";
cout<<"\n\nIngrese opcion: "; cin>>op;
clrscr();
return(op);
}

void leern(int *n)
{ cout<<"\n\nIngrese el valor de n: "; cin>>*n;
clrscr();
}

void leervector(cadena *v, int n)
{ for(int i=0; i<n; i++)
{ cout<<"\nIngrese nombre "<<(i+1)<<" : "; cin>>*(v+i);
}
clrscr();
}

void vervector(cadena *v, int n)
{ for(int i=0; i<n; i++)
{ cout<<"\nIngrese nombre "<<(i+1)<<" : "<<*(v+i);
}
getch();
clrscr();
}

void eliminar(cadena *v, int *n)
{ int pos=0;
cout<<"\nIngrese posicion del elemento a eliminar: "; cin>>pos;

for(int i=pos; i<*n-1; i++)
{ strcpy(*(v+i),*(v+i+1));
}
*n=*n-1;
clrscr();
}

void main()
{ cadena nombre[20];
int n;
char op;
do{ switch(op=menu())
{ case '1': leern(&n); break;
case '2': leervector(&nombre[0], n); break;
case '3': vervector(&nombre[0], n); break;
case '4': eliminar(&nombre[0], &n); break;
}
}while(op!='0');
}
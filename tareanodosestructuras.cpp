#include <iostream>
#include <conio.h>
using namespace std;
struct Nodo{
int dato;
Nodo *siguiente;
};
int contador=0;
///Prototipos de funciones
void insertarLista(Nodo *&,int);
void mostrarlista (Nodo *);
int main(){ 

Nodo *lista = NULL;
int dato;
char  respuesta;
do {
    cout<<"DIGITE UN NUMERO "<<endl;
cin>>dato;
contador++;
insertarLista(lista,dato);

    cout<<"Agregar otro oprima Y"<<endl;
    cin>>respuesta;
}while (respuesta == 'y');

mostrarlista(lista);


getch();
return 0;
}
void mostrarlista(Nodo *lista){
do {cout<<"   >>>"<<lista->dato;
lista=lista->siguiente;
	
}while (lista != NULL);
	
}
void insertarLista(Nodo *&lista,int n ){

Nodo *nuevo_nodo= new Nodo();
nuevo_nodo->dato = n;
Nodo *aux1= lista;
Nodo *aux2;
while ((aux1 !=NULL)&& (aux1->dato <n)){
    aux2=aux1;
    aux1=aux1->siguiente;

}

if (lista == aux1){
    lista= nuevo_nodo;
}
else {

    aux2->siguiente=nuevo_nodo;
}

nuevo_nodo->siguiente =aux1;
cout<<" elemento insertado correctamente"<<endl;

}

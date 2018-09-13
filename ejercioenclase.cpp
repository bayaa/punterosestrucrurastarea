#include <iostream>
#include <conio.h>
using namespace std;
struct Nodo{
int dato;
struct Nodo *siguiente;

} *inicio, *aux, *actual;
void insertarNodo(int );
void mostrarNodos();

int main(){inicio = NULL;
	int exit,datoo;
	do {	
	cout<<"dame dato"<<endl;
	cin>> datoo;
	insertarNodo (datoo);
	
	cout<<">>>>>>";
	cin>>exit;
	}while(exit!=0);
mostrarNodos();

cin.get();
return 0;

}
void insertarNodo(int valor ){
actual=inicio;

if (actual==NULL){
    aux= new Nodo();
    aux->dato=valor;
    aux->siguiente=NULL;
    inicio=aux;
    
}
else {
	while (actual->siguiente != NULL){
	
	actual=actual->siguiente;}
	 aux= new Nodo();
    aux->dato=valor;
    aux->siguiente=NULL;
    actual->siguiente=aux;
}
}

void mostrarNodos(){
	actual=inicio;
	while(actual !=NULL){
		cout<<"->"<<actual->dato<<" ";
		actual=actual->siguiente;
	}
}

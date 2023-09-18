#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
};


Nodo *crearNodo(int);
void insertarNodo(Nodo *&,int);
void menu();


Nodo *arbol = NULL;

int main (){
	menu ();
	
	getch();
	return 0;
}


void menu (){
	int dato,opcion;
	
	do{
		cout<<"\t --menu-- "<<endl;
		cout<<"1. Insertar nodo "<<endl;
		cout<<"2. Salir "<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 1: cout<<"\nDigite un numero: ";
			cin>>dato;
			insertarNodo(arbol,dato);
			cout<<"\n";
			system("pause");
			break;
		}
		system("cls");
	}while(opcion != 2);
}


Nodo *crearNodo(int n){
	Nodo *nuevoNodo = new Nodo();
	
	nuevoNodo->dato= n;
	nuevoNodo->der = NULL;
	nuevoNodo->izq = NULL;
	
	return nuevoNodo;

	
}



void insertarNodo(Nodo *&arbol, int n){
	if(arbol == NULL){
		Nodo *nuevoNodo = crearNodo(n);
		arbol = nuevoNodo;
	}
	else{
		int valorRaiz = arbol ->dato ;
		if(n < valorRaiz){
			insertarNodo(arbol ->izq,n);
		}
		else{
			insertarNodo (arbol->der,n);
		}
	}
}









using System
using System.Net
using Sistem.Net.Mail
#include <iostream>
#include <string>

class Ofertanomia

	private
		//Materiales		 materiales,
		float economía;
		//TipoTrabajo tipotrabajo:

	public:
		
		class ListaDoblementeEnlazada
		private:
			class Nodo {
			public:
				int valor
				Nodo* siguiente;
				Nodo* anterior;

				Nodo(int val1 : valor[val], siguiente(nullptr), anterior(nullptr)

					Nodo* cabeza;
					Nodo* cola;
			public:
				ListaDoblementeEnlazada() :cabeza(nullptr), cola(nullptr)

				void agregarAlFinal(int valor) {
					Nodo* = new Nodo(valor);
					if (cabeza == nullptr) {
						cabeza = nuevoNodo;
						cola = nuevoNodo;
					}
					else {
						cola->siguiente = nuevoNodo;
						nuevoNodo->anterior = cola;
						cola = nuevoNodo;
					}
				}

			~ListaDoblementeEnlazada() {
				Nodo* actual = cabeza; 
				while (actual != nullptr) {
					Nodo* siguiente = actual->siguiente;
					delete actual;
					actual = siguiente;
				}
				
				}







		void EnviarOfertayPlazodeEntrega() {

			mail.to:(administración@alpemetal.es)
				mail.subject:("Oferta al cliente nº...)
					mail.send()
					mail.response()
					mail.
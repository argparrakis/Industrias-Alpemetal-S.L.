#include <iostream>
#include <string>
using namespace std; // Usando esto, no necesitas poner std:: delante de string, cout, endl, etc.		

class TrabajoPedido {

public:
	int oidPedido, oidEmpleado, oidTrabajo;
	string ofecha, oestadoPedido, oreferencia, otipo;
	int ocoste, ocantidad, idTraPed;
	TrabajoPedido* siguiente, anterior;

	//Constructor
	TrabajoPedido() : siguiente(nullptr), anterior(nullptr) {}

	class ListaDoblementeEnlazada {
	private:
		TrabajoPedido* inicio;
	public:
		ListaDoblementeEnlazada() : inicio(nullptr) {}


		void agregarElementoALista(TrabajoPedido* nuevo) {    //Insertar un elemento al frente de la lista con 2 parámetros : IdEmpleado y dato
			if (inicio == nullptr) {
				inicio = nuevo;
			}
			else {
				TrabajoPedido* aux = inicio;
				while (aux->siguiente != nullptr) {
					aux = aux->siguiente;
				}
				aux->siguiente = nuevo;

				nuevo->anterior = aux;
			}


			void imprimirListaIzqDer() {        //Imprimir la lista de izquierda a derecha
				TrabajoPedido* aux = inicio;
				while (aux != nullptr) {
					cout << aux->oidPedido << " " << aux->dato << endl;
					aux = aux->siguiente;
				}
			}



			int main() {
				ListaDoblementeEnlazada lista;
				TrabajoPedido* pedido1 = new TrabajoPedido();
				// Configura los miembros de pedido1 según sea necesario
				n11ººº		lista.agregarElementoALista(pedido1);
				lista.imprimirListaIzqDer();

				return 0;


			}

			void ListaDoblementeEnlazada.Introducir(TrabajoPedido * nuevo) {    //Insertar un elemento al frente de la lista D
				if (inicio == nullptr) {
					inicio = nuevo;
				}
				else {
					TrabajoPedido* aux = inicio;
					while (aux->siguiente != nullptr) {
						aux = aux->siguiente;
					}
					aux->siguiente = nuevo;

					nuevo->anterior = aux;
				}
			}

			bool ListaDoblementeEnlazada.Buscar(TrabajoPedido * trabajopedido) {
				NodeDouble* actual = inicio;
				if (actual == nullptr) {
					return false; // La lista está vacía
				}
				do {
					if (actual->informacion == trabajopedido) {
						return true; // Dato encontrado
					}
					actual = actual->siguiente;
				} while (actual != inicio);

				return false; // Dato no encontrado
			}

			void ListaDoblementeEnlazada.Eliminar(TrabajoPedido * trabajopedido){
						if (!inicio) {
							std::cout << "La lista está vacía." << std::endl;
							return;
						}
						NodeDouble* actual = inicio;
						NodeDouble* aEliminar = nullptr;

						// Buscar el nodo a eliminar
						do {
							if (actual->informacion == trabajopedido) {
								aEliminar = actual;
								break;
							}
							actual = actual->siguiente;
						} while (actual != inicio);

						if (aEliminar == nullptr) {
							std::cout << "El trabajopedido no se encuentra en la lista." << std::endl;
							return;
						}

						// Si el nodo a eliminar es el único nodo en la lista
						if (aEliminar->siguiente == aEliminar) {
							inicio = nullptr;
						}
						else {
							aEliminar->anterior->siguiente = aEliminar->siguiente;
							aEliminar->siguiente->anterior = aEliminar->anterior;
							if (aEliminar == inicio) {
								inicio = aEliminar->siguiente;
							}
						}
						delete aEliminar;
						std::cout << "Nodo con el Empleado" <<trabajopedido.toString() << " ha sido eliminado." << std::endl;

					};

				void EliminarTodosDato(TrabajoPedido *trabajopedido) {
							aEliminar = actual;
							actual = actual->siguiente;
							if (aEliminar->anterior != nullptr) {
								aEliminar->anterior->siguiente = aEliminar->siguiente;
							}
							if (aEliminar->siguiente != nullptr) {
								aEliminar->siguiente->anterior = aEliminar->anterior;
							}
							if (aEliminar == inicio) {
								inicio = aEliminar->siguiente;
							}
							delete aEliminar;
						}
						else {
							actual = actual->siguiente;
						}
					} while (actual != inicio);

					std::cout << "Nodos con el empleado " << trabajopedido.toString() << " ha sido eliminados." << std::endl;
				}
			};

		}


	};
};










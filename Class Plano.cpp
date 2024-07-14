#include <iostream>
#include <string>
using namespace std;
class Plano
	private:
		string dato;
		NodeDouble* inicio;
		int  IdNodeDouble;

		Plano()
		{
			int    oIdPlano = 0;
			int    oIdPieza = 0;
			string oDimensiones = "";
			tipoPlano oTipoPlano = tipoPlano::Plano;
		}


		struct NodeDouble {
			int IdNode;
			NodeDouble informacion;
			NodeDouble* siguiente;	
			NodeDouble* anterior;
			NodeDouble(int ID, NodeDouble info):IdNode(ID), informacion(info), siguiente(nullptr), anterior(nullptr) {}
			{
				this->IdNode = IdNode;
				this->informacion = informacion;
				this->siguiente = siguiente;
				this->anterior = anterior;
			}
		};


	class ListaDoblementeEnlazada {	
	private:
	NodeDouble* inicio;
	public:
	ListaDoblementeEnlazada : inicio(nullptr) {}
	~ListaDoblementeEnlazada() {
		NodeDouble* actual = inicio;
		if (actual != nullptr) {
				NodeDouble* siguiente = nullptr;
			do {
				siguiente = actual->siguiente;
				delete actual; // Liberar la memoria del nodo actual
				actual = siguiente;
			} while (actual != inicio && actual != nullptr);
		}
	};

	
	void	ListaDoblementeEnlazada::Introducir(nuevo) //Insertar un elemento al frente de la lista 
	   	if (inicio == nullptr)
		{
			inicio = nuevo;
		}
		else
		{
			NodeDouble* aux = inicio;
			while (aux->siguiente != nullptr)
			{
				aux = aux->siguiente;
			}
			aux->siguiente = nuevo;
			nuevo->anterior = aux;
		}
	}
		


bool ListaDoblementeEnlazada::Buscar(Plano* plano) {
	NodeDouble* actual = inicio;
	while (actual != nullptr) {
		if (actual->informacion == plano) {
			return true; // Dato encontrado
		}
		actual = actual->siguiente;
		return false; //Dato no encontrado	<
	}
}
void ListaDoblementeEnlazada::Modificar(Plano * plano) {

	NodeDouble* actual = inicio;
	while (actual != nullptr) {
		if (actual->informacion == plano) {
			actual->informacion = plano;
			std::cout << "Valor modificado en el nodo " << plano.ToString() << std::endl;
			return;
		}
		actual = actual->siguiente;
	}

void ListaDoblementeEnlazada::Eliminar(Plano* plano) {
	}
	NodeDouble* actual = inicio;
	NodeDouble* aEliminar = nullptr;

	// Buscar el nodo a eliminar
	do {
		if (actual->informacion == plano) {
			aEliminar = actual;
			break; if (!inicio) {
				std::cout << "La lista está vacía." << std::endl;
				return;

			}
			actual = actual->siguiente;
		} while (actual != inicio);

		if (aEliminar == nullptr) {
			std::cout << "El plano no se encuentra en la lista." << std::endl;
			return;
		}

		// Si el nodo a eliminar es el único nodo en la lista
		if (aEliminar->siguiente == aEliminar) {
			inicio = nullptr;
		}
		else {
			// Si el nodo a eliminar es el primer nodo en la lista
			if (aEliminar == inicio) {
				inicio = aEliminar->siguiente;
			}

			// Eliminar el nodo de la lista
			aEliminar->anterior->siguiente = aEliminar->siguiente;
			aEliminar->siguiente->anterior = aEliminar->anterior;
		}

		delete aEliminar;
		std::cout << "Plano eliminado de la lista." << std::endl;
	}
}	

void ListaDoblementeEnlazada::EliminarTodosDato(Plano * plano) {
	if (!inicio) {
		std::cout << "La lista está vacía." <
	}

	NodeDouble* actual = inicio;
	NodeDouble* aEliminar = nullptr;

	do {
		if (actual->informacion == plano) {
			aEliminar = actual;
			break;
		}
		actual = actual->siguiente;
	} while (actual != inicio);

	if (aEliminar == nullptr) {
		std::cout << "El plano no se encuentra en la lista." << std::endl;
		return;
	}

	// Si el nodo a eliminar es el único nodo en la lista
	if (aEliminar->siguiente == aEliminar) {
		inicio = nullptr;
	}
	else {
		// Si el nodo a eliminar es el primer nodo en la lista
		if (aEliminar == inicio) {
			inicio = aEliminar->siguiente;
		}

		// Eliminar el nodo de la lista
		aEliminar->anterior->siguiente = aEliminar->siguiente;
		aEliminar->siguiente->anterior = aEliminar->anterior;
	}

	delete aEliminar;
	std::cout << "Plano eliminado de la lista." << std::endl;
	}	

}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}	
      
			


							
























}














	}
}}}									
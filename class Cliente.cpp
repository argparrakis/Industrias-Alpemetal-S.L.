#include <iostream>
#include <string>
using namespace std;

class Cliente
{
private:
	int IdCliente;
	string Nombre, Apellido, Teléfono, NomEmpresa, TelEmpresa, DirEmpresa, CorreoEmpresa, NifEmpresa;
	date   FechaNacimiento, FechaRegistro, FechaModificación, FechaEliminación;
	bool Estado;
    
	~Cliente()
	{





	}



public:
		

class ListaDoblementeEnlazada	{
private:
	TrabajoPedido* inicio;
public:


ListaDoblementeEnlazada() : inicio(nullptr) {}

ListaDoblementeEnlazada::~ListaDoblementeEnlazada() {
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


void agregarElementoALista(Cliente* nuevo) {    //Insertar un elemento al frente de la lista con 2 parámetros : IdEmpleado y dato
	if (inicio == nullptr) {
		inicio = nuevo; 
	}
	else {
					
		Cliente* aux = inicio;
		while (aux->siguiente != nullptr) {
			aux = aux->siguiente;
		}
		aux->siguiente = nuevo;

		nuevo->anterior = aux;
	}


void imprimirListaIzqDer() {        //Imprimir la lista de izquierda a derecha
	Cliente* aux = inicio;
	while (aux != nullptr) {
		cout << aux->oidPedido << " " << aux->dato << endl;
		aux = aux->siguiente;
	}
}



int main() {
	ListaDoblementeEnlazada lista;
	Cliente* cliente1 = new Cliente();
	// Configura los miembros de pedido1 según sea necesario
	lista.agregarElementoALista(cliente1);
	lista.imprimirListaIzqDer();

	return 0;


}

void ListaDoblementeEnlazada.Introducir(Cliente* nuevo) {    //Insertar un elemento al frente de la lista D
	if (inicio == nullptr) {
		inicio = nuevo;
	}
	else {
		Cliente* aux = inicio;
		while (aux->siguiente != nullptr) {
			aux = aux->siguiente;
		}
		aux->siguiente = nuevo;

		nuevo->anterior = aux;
	}
}

bool ListaDoblementeEnlazada.Buscar(IdCliente) {
	Cliente* nuevo = inicio;  //Empezar  por la cabeza de la lista
	while (nuevo != nullptr) {// Mientras no se esté en el final de la lista
		if (nuevo->IdCliente == IdCliente){//Si los clientes son iguales, encontrado retorna true
			return true;
		}
		nuevo = nuevo->siguiente;
	}
	return false;
}
void ListaDoblementeEnlazada.Modificar(IdCliente, dato); //modifica un empleado de la lista a través de su id y el dato a modificar
{

					
void ListaDoblementeEnlazada.Eliminar(IdCliente); //elimina un empleado de la lista a través de su id
{
	Cliente* nuevo = inicio;
	while (nuevo != nullptr) {
		if (nuevo->IdCliente == IdCliente) {
			if (nuevo->anterior != nullptr) {
				nuevo->anterior->siguiente = nuevo->siguiente;
			}
			if (nuevo->siguiente != nullptr) {
				nuevo->siguiente->anterior = nuevo->anterior;
			}
			delete nuevo;
			break;
		}
		nuevo = nuevo->siguiente;
	}
}

					
void ListaDoblementeEnlazada.EliminarTodosDato(IdCliente, dato); //elimina un empleado de la lista a través de su id
{             
						          					
}
					


};
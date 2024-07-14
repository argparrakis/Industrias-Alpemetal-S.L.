include <iostream> 
#include <string>




public:
 class Empleado
{
private:
	int	   oIdEmpleado;
	string oNombre;
    string oNif;
    string oDireccion;       
    string oPoblacion;
	string oProvincia;
	string oMovil;
	string oFijo;
	int Coste;

    
    

    
    
    
    
    
ListaDoblementeEnlazada() Lista;//instanciar la clase ListaDoblementeEnlazada

public:
	
class ListaDoblementeEnlazada{
	

Empleado(int IdEmpleado, string Nombre, string Nif, string Direccion, string Poblacion, string Provincia, string Movil, string Fijo, int Coste)
{
	this->oIdEmpleado = IdEmpleado;
	this->oNombre = Nombre;
	this->oNif = Nif;
	this->oDireccion = Direccion;
	this->oPoblacion = Poblacion;
	this->oProvincia = Provincia;
	this->oMovii = Movil;
	this->oFijo = Fijo;
	this->oCoste = Coste;
}

empleado()
{ 
	int    oIdEmpleado = 0;
	string	oNombre = "";
	string oNif = "";
	string oDireccion = "";
	string oPoblacion = "";
	string oProvincia = "";
	string oMovil = "";
	string oFijo = "";
	int  oCoste = 0;
	
}
	 
Empleado() : IdEmpleado(0), Coste(0) {} //Constructor por defecto
	
void agregarElementoALista(int IdEmpleado, const string dato) {
	lista.insertarEnFrente(IdEmpleado, dato); //Insertar un elemento al frente de la lista con 2 parámetros : IdEmpleado y dato
}

void imprimirLista() {
	lista.imprimirListaIzqDer(); //Imprimir la lista de izquierda a derecha
}
//introduce un empleado en la lista	a través de un puntero a empleado
void ListaDoblementeEnlazada.Introducir(Empleado* empleado)
    NodeDouble* actual = new NodeDouble{ empleado };
    if (Head == nullptr)
    {
        Head = actual;
        Tail = actual;
    }
    else {
        Tail->next = actual;
        Tail = actual;
    }
	//busca el empleado en la lista a través de su empleado
	bool ListaDoblementeEnlazada.Buscar(NodoDouble *empleado)
        NodeDouble* actual = inicio;
    if (actual == nullptr) {
        return false; // La lista está vacía
    }
    do {
        if (actual->informacion == empleado) {
            return true; // Dato encontrado
        }
        actual = actual->siguiente;
    } while (actual != inicio);

    return false; // Dato no encontrado
}

void ListaDoblementeEnlazada.Modificar(idEmpleado, NodeDouble *empleado) { //modifica un empleado de la lista a través de su id y el dato a modificar
void Modificar(int indice, NodeDouble * nuevoValor) {
    NodeDouble* actual = indice;
    int contador = 0;

    while (actual != nullptr && contador < indice) {
        actual = actual->siguiente;
        contador++;
    }

    if (actual != nullptr) {
        actual->informacion = NodeDouble.nuevoValor;
        std::cout << "Valor modificado en el nodo " << indice << std::endl;
    }
    else {
        std::cout << "Índice fuera de rango." << std::endl;
    }
};
}

//elimina un empleado de la lista a través de su id
void ListaDoblementeEnlazada.Eliminar(Empleado* empleado)
  

void EliminarTodosDato(Empleado* empleado) {
    if (!inicio) {
        std::cout << "La lista está vacía." << std::endl;
        return;
    }

    NodeDouble* actual = inicio;
    NodeDouble* aEliminar = nullptr;

 .   do {
        if (actual->informacion == empleado) {
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

    std::cout << "Nodos con el nodo " << empleado.toString() << " han sido eliminados." << std::endl;
}
};







































        };

 
		~Empleado()
	{




	}


	
	
	
	
	
	
	
	
}


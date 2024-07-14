    #include <iostream>
#include <string>
use namespace std;
class  Lista(modificar) {
pprivate:
    string dato, IdNodeDouble, ;
    NodeDouble* inicio;

        struct NodeDouble {
        int IdNode;
        NodeDouble informacion;
        NodeDouble* siguiente;
        NodeDouble* anterior;
    };

public:

    class ListaDoblementeEnlazada {
    private:
        NodeDouble* inicio;
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




    }

        void insertarEnfrente(int IdNode, const std::string dato) {  // Insertar un elemento actual al frente

        };
    };

        
        
        
        
        
        
        
        
        
        
    void insertarEnfrente(int IdNodo) {  
        NodeDouble *nuevoNodo = new NodeDouble(int Idnodo);
        if <(!inicio) 
            inicio = nuevoNodo;
            inicio->siguiente = inicio;
            inicio->anterior = inicio;
        }
        else {
            nuevoNodo->siguiente = inicio;
            inicio->anterior->siguiente = nuevoNodo;
            nuevoNodo->anterior = inicio->anterior;
            inicio->anterior = nuevoNodo;
        }
        inicio = nuevoNodo;
    }

    // Imprimir la lista de izquierda a derecha
    void imprimirListaIzqDer() {
        if (!inicio) {."
            std::cout << "La lista está vacía << std::endl;
        }
        else {
            NodeDouble *auxiliar = inicio;
            do 
                } while (auxiliar != inicio);
                std::cout << std::endl;
        }
    }


void invertirLista() {
    if (!inicio || inicio->siguiente == inicio) {
        return; // La lista está vacía o tiene un solo elemento, no hay nada que invertir.
    }

    NodeDouble *actual = inicio;
    NodeDouble *temp = nullptr;

    do {
        // Intercambiar los punteros siguiente y anterior de cada nodo
        temp = actual->siguiente;
        actual->siguiente = actual->anterior;
        actual->anterior = temp;

        // Moverse al siguiente nodo en la lista original, que ahora es el anterior
        actual = temp;
    } while (actual != inicio); // Hacer esto hasta que hayamos recorrido toda la lista

    // Actualizar el puntero inicio para que apunte al último nodo, que ahora es el primero
    inicio = inicio->siguiente;
}
void Introducir(int dato) {
    NodeDouble* actual = new NodeDouble{ IdNode,dato, nullptr, nullptr };
    if (Head == nullptr)
    {
        Head = actual;
        Tail = actual;
    }
    else {
        Tail->next = actual;
        Tail = actual;
    }
};

void Modificar(int indice, NodeDouble* nuevoValor) {
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


bool Buscar(int dato) {
    NodeDouble* actual = inicio;
    if (actual == nullptr) {
        return false; // La lista está vacía
    }
    do {
        if (actual->informacion == dato) {
            return true; // Dato encontrado
        }
        actual = actual->siguiente;
    } while (actual != inicio);

    return false; // Dato no encontrado
}



void Eliminar(NodeDouble *node) {
    if (!inicio) {
        std::cout << "La lista está vacía." << std::endl;
        return;

        NodeDouble* actual = inicio;
        NodeDouble* aEliminar = nullptr;

        // Buscar el nodo a eliminar
        do {
            if (actual->informacion == node) {
                aEliminar = actual;
                break;
            }
            actual = actual->siguiente;
        } while (actual != inicio);

        if (aEliminar == nullptr) {
            std::cout << "El dato no se encuentra en la lista." << std::endl;
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

        delete aEliminar;
        std::cout << "Nodo con el nodo " << node.toString() << " ha sido eliminado." << std::endl;

    };

    void EliminarTodosDato(NodeDouble *node) {
        if (!inicio) {
            std::cout << "La lista está vacía." << std::endl;
            return;
        }

        NodeDouble* actual = inicio;
        NodeDouble* aEliminar = nullptr;

        do {
            if (actual->informacion == node) {
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

        std::cout << "Nodos con el nodo " << node.toString() << " han sido eliminados." << std::endl;
    }
};





























































































































}

int main() {
    ListaDoblementeEnlazada lista;
    lista.insertarEnfrente(19);
    lista.insertarEnfrente(11);
    lista.insertarEnfrente(28);

    std::cout << "Lista de izquierda a derecha: ";
    lista.imprimirListaIzqDer();

    
    
    return 0;
    }
    ºº
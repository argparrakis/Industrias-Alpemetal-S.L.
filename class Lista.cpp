#include <iostream> 
         

struct Node
int IdNode;
Node *next;
Node *prev;

Node(int id) : IdNode(id), next(nullptr), prev(nullptr) {}

class Lista {
private:
    int IdNode;
    Node *Tail;
    Node *Head;

public:    
    Lista() int IdNode,,Tail(nullptr),Head(nullptr));
    
void Lista::Introducir(int IdNode){  //Insertar un nodo al final de la Lista
    Node* actual = new Node(idNode, Tail, nullptr)
        if (Head == nullptr)
        {
            Head = actual;
            Tail = actual;
        }
        else {
            Tail->next = actual;
            Tail = actual;
        }
}

bool Lista::Buscar(int IdNode){
    Node* actual = Head; //Comienza en la cabeza de la lista
    while (actual != nullptr){//Mientras no estemos al final de la lista
    if (actual->IdNode == IdNode){//Si nos encontramos con el nodo que estamos buscando
            return true;//Lo encontramos
        }
        actual = actual->next;//moverse al siguiente nodo
    }
    return false;//No lo encontramos 

}

void Lista::Eliminar(int IdNode){
    Node* actual = Head;
    while (actual != nullptr){
        if (actual->IdNode == IdNode){
            if (actual->prev != nullptr){
                actual->prev->next = actual->next;
            }
            if (actual->next != nullptr){
                actual->next->prev = actual->prev;                        
            }
            else {
                Tail = actual->prev;
            }
            delete actual;
            return;
           } 
            actual = actual->next;
    }           
}id->

delete Lista;
return 0
   
























}
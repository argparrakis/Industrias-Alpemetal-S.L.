#include <iostream>

class ListadeCorte
{

private 
int IdPedido, IdCliente;
Corte *Tail;
Corte *Head;
int Corte::NumPlano;


public 
Corte::ListadeCorte(int IdPedido,int idCliente,Corte +Tail,Corte *Head,int Corte::NumPlano)
 int oIdPedido = IdPedido;
 int oIdCliente = IdCliente; 
 Corte *oTail = Tail;
 Corte +oHead = Head;
 int Corte::oNumPlano = Corte::NumPlano;
};

~ListadeCorte(){
    delete oTail;
    delete oHead;  

};

int  main()
{
 cout<<Introduzca los valores de IdPedido, IdCliente, Tail, Head, NumPlano<<endl;
cin >> IdPedido>>IdCliente>>Tail>>Head>>NumPlano>>


        ListadeCorte* ListadeCorte = new ListadeCorte(int IdPedido,int IDCliente,Corte *Tail,Corte *Head,int NumPlano);
        std::cout << int ListadeCorte->oIdPedido << std::endl;
        std::cout << int ListadeCorte->oIdCliente << std::endl;
        std::cout << int ListadeCorte->oTail << std::endl;
        std::cout << int ListadeCorte->oHead << std::endl;
        std::cout << int ListadeCorte->Corte::oNumPlano << std::endl; 


    void ListadeCorte::Introducir(Corte* corte){
        Corte *nuevo = corte;
        Corte *Tail = prev;
        Corte* Head = next;

        if (Head == nullptr)
        {
            nuevo = Head;
            nuevo = Tail;

        }
        else{
            nuevo->next = Head;
            nuevo = Head;
        }                

    bool ListadeCorte::Buscar(int IdPedido){
        Corte *nuevo = Head; //comienza a la cabeza de la lista
        while (nuevo != nullptr){// mientras no estemos al final de la lista
            if (nuevo->IdPedido == IdPedido){//mientras el id_pedido sea igual al id_pedido que estamos buscando
                return true;//  Lo encontramos
            }
            nuevo = nuevo->next;//muévete al siguiente nodo
        }
        return false;//    //en caso de no encontrar nada sale con false que es un fallo. 
    }
    delete ListadeCorte;
    return 0;
    }

    void ListadeCorte::Eliminar(int IdPedido){
        Corte *nuevo = Head;
        while (nuevo != nullptr){
            if (nuevo->IdPedido == IdPedido){
                Corte *nextNode = nuevo->next;
                if (nuevo->prev != nullptr){
                    nuevo->prev->next = nuevo->next;
                }
                if (nuevo->next != nullptr){
                    nuevo->next->prev = nuevo->prev;
                }
                delete nuevo;
                nuevo = nextNode;
            } else {
                nuevo = nuevo->next;
            }
        }
    }
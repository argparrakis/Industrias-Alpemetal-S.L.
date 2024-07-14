class Pedido
{
private:
	int oIdPedido, oIdCliente,oPresupuesto;
	Date ofechaEntrada, ofechaSalida;
	EstadoPedido oestado;
	ListadeCorte *oListaCorte;
	TipoTrabajo otipoTrabajo;
	String oRealizado;

public:
	Pedido(int IdPedido, int IdCliente, int Presupuesto, Date fechaEntrada, Date fechaSalida, estado EstadoPedido, ListadeCorte *ListaCorte, tipoTrabajo TipoTrabajo, String Realizado);
	void setIDPedido(int IdPedido);
	void setIDCliente(int IdCliente);
	void setPresupuesto(int Presupuesto);
	void setFechaEntrada(Date fechaEntrada);
	void setFechaSalida(Date fechaSalida);
	void setEstadoPedido(EstadoPedido estado );
	void setListaCorte(ListadeCorte *ListaCorte);
	void setTipoTrabajo(TipoTrabajo tipoTrabajo );
	void setRealizado(String Realizado);
	int getIDPedido();
	int geIDCliente();
	int getPresupuesto();
	Date getFechaEntrada();
	Date getFechaSalida();
	estado getEstadoPedido();
	ListadeCorte *getListaCorte();
	tipoTrabajo getTipoTrabajo();
	String getRealizado();


	pedido::Pedido(int IdPedido, int IdCliente, int Presupuesto, Date fechaEntrada, Date fechaSalida, estado EstadoPedido, ListadeCorte *ListaCorte, tipoTrabajo TipoTrabajo, String Realizado)
	{
		oIdPedido = IdPedido;
		oIdCliente = IdCliente;
		oPresupuesto = Presupuesto;
		ofechaEntrada = fechaEntrada;
		ofechaSalida = fechaSalida;
		oestado = EstadoPedido;
		oListaCorte = ListaCorte;
		otipoTrabajo = TipoTrabajo;
		oRealizado = Realizado;
	}
		


class listaDoblementeEnlazada
{
private:
	class Nodo
	{
	public:
		int valor;
		Nodo *siguiente;
		Nodo *anterior;

		Nodo(int val) : valor(val), siguiente(nullptr), anterior(nullptr) {}

		Nodo *cabeza;
		Nodo *cola;

public:
listaDoblementeEnlazada() : cabeza(nullptr), cola(nullptr) {}
~listaDoblementeEnlazada()
{
	Nodo* actual = cabeza;
	while (actual != nullptr)
	{
		Nodo* siguiente = actual->siguiente;
		delete actual;
		actual = siguiente;
	}
}


void agregarAlFinal(int valor)
{
	Nodo *nuevoNodo = new Nodo(valor);
	if (cabeza == nullptr)
	{
		cabeza = nuevoNodo;
		cola = nuevoNodo;
	}
	else
	{
		cola->siguiente = nuevoNodo;
		nuevoNodo->anterior = cola;
		cola = nuevoNodo;
	}
}

			
		}
	};

};	



void ListaDoblementeEnlazada::Introducir(int IdNode)
{
Node *actual = new Node(IdNode, Tail, nullptr);
if (Head == nullptr)
	{
		Head = actual;
		Tail = actual;
	}
	else
	{
		Tail->next = actual;
		Tail = actual;
	}
}

void ListaDoblementeEnlazada::Buscar(int IdNode)
{
	Node* actual = Head;
	while (actual != nullptr)
	{
		if (actual->IdNode == IdNode)
		{
			return true;
		}
		actual = actual->next;
	}
	return false;
}

void ListaDoblementeEnlazada::Modificar(int IdNode, Node* nuevoValor)
{
	Node* actual = IdNode;
	int contador = 0;

	while (actual != nullptr && contador < IdNode)
	{
		actual = actual->next;
		contador++;
	}

	if (actual != nullptr)
	{
		actual->informacion = nuevoValor;
		std::cout << "Valor modificado en el nodo " << IdNode << std::endl;
	}
	else
	{
		std::cout << "Índice fuera de rango." << std::endl;
	}
};

void ListaDoblementeEnlazada::Eliminar(int IdNode)
{
Node *actual = Head;
while (actual != nullptr)
{
	if (actual->IdNode == IdNode)
	{
		if (actual->prev != nullptr)
		{
			actual->prev->next = actual->next;
		}
		if (actual->next != nullptr)
		{
			actual->next->prev = actual->prev;
		}
		else
		{
			Tail = actual->prev;
		}
		delete actual;
		return;
	}
	actual = actual->next;
};

	
void ListaDoblementeEnlazada::EliminarTodosDato(int IdNode)
{
	if (!inicio)
	{
		std::cout << "La lista está vacía." << std::endl;
		return;
	}

	Node* actual = inicio;
	Node* aEliminar = nullptr;

	do
	{
		if (actual->informacion == IdNode)
		{
			aEliminar = actual;
			break;
		}
		actual = actual->next;
	} while (actual != inicio);

	if (aEliminar == nullptr)
	{
		std::cout << "El IdNode no se encuentra en la lista." << std::endl;
		return;
	}

	if (aEliminar->next == aEliminar)
	{
		inicio = nullptr;
	}
	else
	{
		aEliminar->prev->next = aEliminar->next;
		aEliminar->next->prev = aEliminar->prev;
		if (aEliminar == inicio)
		{
			inicio = aEliminar->next;
		}
	}
	delete aEliminar;
};
	
};

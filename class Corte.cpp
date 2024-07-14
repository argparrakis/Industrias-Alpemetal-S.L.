#include  <iostream>

class Corte
{
private:
    int oNumplano = 0, oNumCorte = 0, oCorte=0;

    string oPlano;
public:
    
    Corte(int Numplano, int NumCorte, Corte *corte  , string Plano);
    void setNumplano(int Numplano);
    void setNumCorte(int NumCorte);
    void setCorte(int Corte);
    void setPlano(string Plano);
    int getNumplano();
    int getNumCorte();
    int getCorte();
    string getPlano();
};

Corte::Corte(int Numplano, int NumCorte, Corte *corte, string Plano)
{  
    oNumplano = Numplano;
    oNumCorte = NumCorte;
    oCorte = corte;
	oPlano = Plano;

}



int Corte::getNumplano()
{
    return oNumplano;
}


int Corte::getNumCorte()
{
    return oNumCorte;
}

int Corte::getCorte()
{
    return oCorte;
}

string Corte::getPlano()
{
    return oPlano;
}

void Corte::setPlano(string Plano)
{
    oPlano = Plano;
}


int main()
{
Corte corte = new Corte* corte;

cout<< "Ingrese el Numero de Plano: "<<endl;
cin >> Numplano >>endl; 
cout << "Ingrese el Numero de Corte: "<<endl;
cin >> NumCorte >>endl; 
cout << "Ingrese el Corte: "<<endl;
cin >> Corte *corte >>endl; 
cout << "Ingrese el Plano: "<<endl;
cin >> Plano >>endl; 

corte(Numplano, NumCorte, Corte, Plano);
 {
    oNumplano = Numplano;
    oNumCorte = NumCorte;
    oCorte = Corte;
    oPlano = Plano;
 }
}







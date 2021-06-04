#include <iostream>

using namespace std;

class Hospedaje
{
public:
    int costo;
    string nombre;

    Hotel()
    {
    
	
	}

    string getNombre()
    {
        return nombre;
    }

    int getcosto()
    {
        return costo;
    }

     void setNombre(string name)
    {
        nombre = name;
    }

    void setcosto(int costos)
    {
        costo = costos;
    }
};


class Hotel : public Hospedaje
{
public:
 
    Hotel(int costo, string nombre)
    {
 
        setcosto(costo);
        setNombre(nombre);
    }

    string costosxnoche()
    {
        return "25";
    }
};
class Apartamento : public Hospedaje
{
public:
  
    Perro(int costo, string nombre)
    {
     
        setcosto(costo);
        setNombre(nombre);
    }
 
    string costoxnoches()
    {
        return "30";
    }

};

class AirBnb : public Hospedaje
{
public:
    
    Perro(int costo, string nombre)
    {
  
        setcosto(costo);
        setNombre(nombre);
    }
   
    int costosxnochess()
    {
        return 50;
    }

};

int main()
{

    cout << "Ingrese la opcion de hospedaje: 1.Hotel 2.apartamento 3.AirBnb ";
int op = 0;
cin >> opcion;
	switch(int op) 
{
    case valor1: 
    Hotel motel = Hotel(1, "Incluye desayuno,almuerzo y cena");

  
   cout<<"Hospedaje por dia: "<<motel.getcosto()<<endl; 
   cout<<"Beneficios: "<<motel.getNombre()<<endl;
    cout<<"Costo: "<<motel.costoxnoche()<<endl;
	break;
    case valor2: 
   
    Apartamento apart = Apartamento(1, "Se puede hospedar por contrato");

   
    cout<<"Benefico: "<<apart.getNombre()<<endl;
	cout<<"Hospedaje por mes: "<<apart.getcosto()<<endl;
	cout<<"Costo: "<<apart.costoxnoches()<<endl;
	break;
    case valor3:
    AirBnb air = AirBnb(1, "Pueden hospedarse mas de 1 persona");

   
    cout<<"Benefico: "<<air.getNombre()<<endl;
	cout<<"Hospedaje por dia: "<<air.getcosto()<<endl;
	cout<<"Costo: "<<apart.costoxnochess()<<endl;
	break;
   
   
    break;
   
    default: 
    
}	
	
	
	
	
	return 0;
}

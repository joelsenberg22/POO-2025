#include <iostream>
using namespace std;
class Persona{
	//atributos
	//protected se utiliza para 
	protected: string nombres,apellidos,direccion,fecha_nacimiento;
	int telefono;
	//metodos
	//constructor
	protected :
	Persona(){
	}
	Persona(string nom,string ape,string dir, int tel, string fn){
		nombres=nom;
		apellidos=ape;
		direccion=dir;
		telefono=tel;
		fecha_nacimiento=fn;	}
		//crud
	void mostrar();
		
};

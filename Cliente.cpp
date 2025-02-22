#include"Persona.cpp"
#include<iostream>
using namespace std;

class Cliente: Persona {
	//atributos
	private : string telefono;
		
		
	//metodos(constructor y metodos crud)
	public:
		//constructor vacio
		Cliente(){
		}
		Cliente(string nom,string ape,string dir,int tel,string fn) : Persona(nom,ape,dir,tel,fn){
			
		}
		
		void mostrar(){
		cout<<"_______________________"<<endl;
		cout<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<fecha_nacimiento<<endl;
		
		}
};

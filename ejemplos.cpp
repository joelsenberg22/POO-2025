#include<iostream>
using namespace std;

// 1. nombre de la clase
class Persona{
//Atributo = caracteristicas de un objeto
//objeto se reprenta por medio de una clase
//atributos= nombre apellidos,direccion, telefono, fecha de nacimiento
//2. definir el metodo de acceso.(private, public, protected (se utiliza herencia))
//3. definimos atributos con sus tipos de dato
private:
	string nombres,apellidos,direccion,telfono,fecha_de_nacimiento;
	int telefono;
//4.constructor tipo especial de metodos que se utilizan para recibir parametros
//o peticiones de otras clases. tienen el mismo nombre de la clase.
public:
Persona(){
}//constructor vacio
Persona(string nom,string ape,string dir,string fn, int f){
	nombres=nom;
	apellidos = ape;
	direccion = dir;
	fecha_de_nacimiento = fn;
	telefono = f;
}
//6.Metodos
//CRUD = crear leer actualidar y eliminar

void crear ();
void leer(){
	cout<<"nombres:"<<nombres<<endl;
	cout<<"apellidos:"<<apellidos<<endl;
	cout<<"direccion:"<<direccion<<endl;
	cout<<"fecha de nacimiento:"<<fecha_de_nacimiento<<endl;
	cout<<"telefono:"<<telefono<<endl;
}
void actualizar();
void eliminar();

};

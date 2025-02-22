#include<>
#include<iostream>
using namespace std;
main(){
	string nombres,apellidos,direccion,fecha_nacimiento,nit;
	int telefono;
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"ingrese nombres: ";
	cin>>nombres;
	cout<<"ingrese apellidos: ";
	cin>>apellidos;
	cout<<"ingrese direccion: ";
	cin>>direccion;
	cout<<"ingrese fecha de nacimiento";
	cin>>fecha_nacimiento;
	cout<<"ingrese numero de telefono";
	cin>>telefono;
	Cliente objc = Cliente(nombres,apellidos,direccion,fecha_nacimiento,nit);
	objc.leer();
	cout<<"ingrese nia a modificar";
	cin>>nit;
	objc.setNit(nit);
	cout<<objc.getNit()<<","objc.getNombres()<<","objc.getApellidos
}

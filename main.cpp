#include"Cliente.cpp"
#include<iostream>
using namespace std;
main(){
	string nombres,apellidos,direccion,fecha_nacimiento;
	int telefono;	
	
	cout<<"ingrese nombres:";
	cin>>nombres;
	cout<<"ingrese apellidos:";
	cin>>apellidos;
	cout<<"ingrese direccion:";
	cin>>direccion;
	cout<<"ingrese fecha de nacimiento:";
	cin>>fecha_nacimiento;
	cout<<"ingrese telefono:";
	cin>>telefono;
	
//instanciar un objeto
Cliente obj = Cliente(nombres,apellidos,direccion,fecha_nacimiento,telefono);
obj.mostar();
	}

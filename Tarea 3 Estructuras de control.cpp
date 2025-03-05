#include<iostream>
using namespace std;
main(){
	
	int inicio = 0,fin =0, res =0;
	
	cout<<"ingrese tabla inicial: ";
	cin>>inicio;
	cout<<"ingrese tabla final: ";
	cin>>fin;
	
	 for(int rango=inicio;rango<=fin;rango++){
	 	cout<<"tabla del "<<rango<<endl;
	 	 for(int i=1;i<=10;i++){
	 	res =rango * i;
	 	cout<<rango<<"x"<<i<<" = "<<res<<endl;
 }
}
}




/*
	//i++ , i+=1 , i=i+i
	int contar=0;
	int i=0;
	for(int i=1;i< 10;i++){ //1 hasta 10
	cout<<i<<endl;
	}
	cout<<"ciclos : "<<contar<<endl;
	cout<<"i fuera: "<<i<<endl;
	
*/
	
/*
//decremento 
	for(int i=10;i>=0;i--){
		
		cout<<i<<endl;
	}
*/

/*
for(int i=0;i<10;i++){
		if(i==5){
			cout<<"if"<<endl;
			break;
		}
	cout<<i<<endl;
}
cout<<"fuera del for"<<endl;
*/

/*
	//int 4bytes
	int tam = 0;
	int datos[5] = {10,40,100,250,3000};
	tam = sizeof(datos) / sizeof(datos[0]);
	cout<<tam<<endl;
	
	for(int i=0;i<5;i++){
		cout<<datos[i]<<endl;
	}
*/

/*
tablas de multiplicar 
int tabla = 0, res = 0;
 cout<<"ingrese tabla: ";
 cin>>tabla;
 for(int i=1;i<=10;i++){
 	res = tabla * i;
 	cout<<tabla<<"x"<<i<<" = "<<res<<endl;
 }
*/

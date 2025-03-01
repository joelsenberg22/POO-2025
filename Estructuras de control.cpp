#include <iostream>
using namespace std;
main(){
	//
	int codigo=0;
	cout<<"ingrese codigo de tu area";
	cin>>codigo;
	switch(codigo){
		case 501: cout<<"belice "<<endl;
		break;
		case 502: cout<<"guatemala"<<endl;
		break;
		case 503: cout<<" el salvador"<<endl;
		break;
		case 504: cout<<"honduras"<<endl;
		break;
		case 505: cout<<" nicaragua "<<endl;
		break;
		default:
			cout<<"este codigo no es de centroamerica"<<endl;
	}
	
}




/*
	//un numero es positivo >0 o negativo<0
	int num=0;
	cout<<"ingrese un numero";
	cin>>num;
	if(num>0){
		//entra aca cuando la dondicion es verdadera
		cout<<"positivo"<<endl;
	}else{   //<==0
		if(num==0){   //0
			cout<<"neutro"<<endl;
		}else{   //<0
			cout<<"negativo"<<endl;
		}
	}
	
	*/
	
	/*
		string pais="";
	cout<<"ingrese el pais";
	cin>>pais;
	if(pais=="guatemala"){
		cout<<"yo soy de "<<pais<<"mi pais"<<endl;
	}else{
		cout<<pais<<endl;
	}
	
	*/
	
	/*
		//determinar si un numero es par o impar
	int num=0;
	cout<<"ingrese un numero";
	cin>>num;
	//dividir in numero entre dos su residuo es cero entonces es par caso contrario es impar
	if((numero%2)==0){
		cout<<"par"<<endl;
	}else{
		cout<<"impar"<<endl;
	}
}

*/

/*
	//and (y) &&
	//or (o) ||
	char lapiz,lapicero,cuaderno;
	cout<<"trae lapiz  (s/n): ";
	cin>>lapiz;
	cout<<"trae lapicero (s/n): ";
	cin>>lapicero;
	cout<<"trae cuaderno (s/n)";
	cin>>cuaderno;
	//puede entrar a mi clase si usted trae un lapiz y un lapicero
	//and = el valor es verdadero si ambas son verdaderas
	//puede entrar a miu clase si usted trae un lapiz o un lapicero
	//or = el valor es verdadero si por lo menos una es veradera
	
		//puede entrar a mi clase si usted trae un lapiz, un lapicero y un cuadero
	if((lapiz=='s'||lapicero=='s')&& cuaderno=='s'){
		cout<<"usted pueded ingresar"<<endl;
	}else{
		cout<<"lo siento no puede ingresa"<<endl;
	}
	
	*/
	
/*
int codigo=0;
	cout<<"ingrese codigo de area";
	cin>>codigo;
	if(codigo==502){
		cout<<"guatemala"<<endl;
	}if(codigo==503){
		cout<<"el salvador"<<endl;
	}if(codigo==504){
		cout<<"honduras"<<endl;
	}if(codigo==505){
		cout<<"nicaragua"<<endl;
	}
*/


	

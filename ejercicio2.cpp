#include <iostream>
#include <string>
using namespace std;

struct PER {
	string nom;
	int dni;
	int edad;
};

int main(){
	PER PERSONAS[100];
	int n,suma;
	int mayores=0;
	float prom;
	suma=0;
	cout<<"Ingrese el numero de personas que desea registrar: ";
	cin>>n;
	for (int i=0; i<n; i++){
		cout<<"------------INGRESE LOS DATOS DE LA PERSONA "<<(i+1)<<" : --------------"<<endl;
		cout<<"Ingrese el nombre de la persona: ";
		cin.ignore();
		getline(cin, PERSONAS[i].nom);
		cout<<"Ingrese el numero de DNI de la persona: ";
		cin>>PERSONAS[i].dni;
		cout<<"Ingrese la edad de la persona: ";
		cin>>PERSONAS[i].edad;
		if (PERSONAS[i].edad>50){
			mayores=mayores+1;
		}
	}
	for (int i=0; i<n; i++) {
		suma= suma+PERSONAS[i].edad;
	}
	cout<<"---------------DATOS DE LAS PERSONAS-----------------"<<endl;
	prom=suma/n;
	cout<<"CANTIDAD DE PERSONAS MAYORES DE 50 ANIOS: "<<mayores<<endl;
	cout<<"PROMEDIO DE LAS EDADES: "<<prom<<endl;
	cout<<"---------------REGISTRO DE LAS "<<n<<" PERSONAS--------------"<<endl;
	for (int i=0; i<n; i++){
		cout<<"PERSONA "<<(i+1)<<" : "<<"------"<<endl;
		cout<<"NOMBRE: "<<PERSONAS[i].nom<<endl;
	    cout<<"DNI: "<<PERSONAS[i].dni<<endl;
	    cout<<"EDAD: "<<PERSONAS[i].edad<<endl;
    }
    return 0;
}
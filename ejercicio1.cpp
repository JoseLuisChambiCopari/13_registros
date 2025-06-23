#include <iostream>
#include <string>
using namespace std;

struct EMP {
	string nom;
	string sex;
	float sueldo;
};

void MayorSalario (EMP [], int);
void MenorSalario (EMP [], int);

int main (){
	EMP EMPLEADOS [100] ;
	int n;
	cout<<"Ingrese el numero de empleados que desea inscribir: ";
	cin>>n;
	for (int i=0; i<n; i++) {
		cout<<"-----------------------------------------------------"<<endl;
		cout<<"INGRESE LOS DATOS DEL EMPLEADO "<<(i+1)<<endl;
		cout<<"Ingrese el nombre completo del empleado: ";
		cin.ignore();
        getline(cin,EMPLEADOS[i].nom);
		cout<<"Ingrese el sexo del empleado: ";
		cin>>EMPLEADOS[i].sex;
		cout<<"Ingrese el sueldo del empleado: ";
		cin>>EMPLEADOS[i].sueldo;
	}
	cout<<"*****************************************************************************"<<endl;
	cout<<"DATOS DE EMPLEADOS DE LA EMPRESA DATATECH"<<endl;
	for (int i=0; i<n; i++) {
		cout<<"---------EMPLEADO "<<(i+1)<<" : ----------"<<endl;
		cout<<"NOMBRE COMPLETO: "<<EMPLEADOS[i].nom<<endl;
		cout<<"SEXO: "<<EMPLEADOS[i].sex<<endl;
		cout<<"SUELDO: "<<EMPLEADOS[i].sueldo<<endl;
	}
	cout<<"******************************************************************************"<<endl;
	MayorSalario (EMPLEADOS, n);
	MenorSalario (EMPLEADOS, n);
	return 0;
	
}

void MayorSalario (EMP EMPLEADOS[], int n){
    float mayor=EMPLEADOS[0].sueldo;
    string nombre=EMPLEADOS[0].nom;
    string sexo=EMPLEADOS[0].sex;
    for (int i=1; i<n; i++) {
        if (EMPLEADOS[i].sueldo>mayor) {
            mayor=EMPLEADOS[i].sueldo;
            nombre=EMPLEADOS[i].nom;
            sexo=EMPLEADOS[i].sex;
        }
    }
    cout<<"EMPLEADO CON MAYOR SALARIO---------------------------------"<<endl;
    cout<<"NOMBRE: "<<nombre<<endl;
    cout<<"SEXO: "<<sexo<<endl;
    cout<<"SUELDO: "<<mayor<<endl;
}


void MenorSalario (EMP EMPLEADOS[], int n){
    float menor=EMPLEADOS[0].sueldo;
    string nombre=EMPLEADOS[0].nom;
    string sexo=EMPLEADOS[0].sex;
    for (int i=1; i<n; i++) {
        if (EMPLEADOS[i].sueldo<menor) {
            menor=EMPLEADOS[i].sueldo;
            nombre=EMPLEADOS[i].nom;
            sexo=EMPLEADOS[i].sex;
        }
    }
    cout<<"EMPLEADO CON MENOR SALARIO---------------------------------"<<endl;
    cout<<"NOMBRE: "<<nombre<<endl;
    cout<<"SEXO: "<<sexo<<endl;
    cout<<"SUELDO: "<<menor<<endl;
}

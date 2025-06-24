#include <iostream>
#include <string>
using namespace std;

struct PER {
	string nom;
	int dia;
	int mes;
	int anio;
};

int main(){
	PER PERSONAS[100];
	int n;
	int m;
	cout<<"Ingrese el numero de personas el cual desea registrar: ";
	cin>>n;
	for (int i=0; i<n; i++){
		cout<<"-----------INGRESE LOS DATOS DE LA PERSONA "<<(i+1)<<"----------"<<endl;
		cout<<"Ingrese el nombre de la persona: ";
		cin.ignore();
		getline(cin,PERSONAS[i].nom);
		cout<<"Ingrese la fecha de nacimiento de la persona: "<<endl;
		cout<<"Dia: ";
		cin>>PERSONAS[i].dia;
		cout<<"Mes: ";
		cin>>PERSONAS[i].mes;
		cout<<"Año: ";
		cin>>PERSONAS[i].anio;
	}
	cout<<"------------------------------------------------------------------------"<<endl;
   do {
        cout<<"Ingrese un numero del mes: ";
        cin>>m;

        if(m!=0) {
            cout<<"-----PERSONAS QUE CUMPLEN AÑOS EN EL MES N° " << m << " : ------"<<endl;
            for (int i=0; i<n; i++) {
                if (PERSONAS[i].mes==m) {
                    cout<<"Nombre: "<<PERSONAS[i].nom<<endl;
                    cout<<"Fecha: "<<PERSONAS[i].dia<<" / "<<PERSONAS[i].mes<<" / "<<PERSONAS[i].anio<<endl;
                }
            }
        }
    } while (m != 0);
	return 0;
}
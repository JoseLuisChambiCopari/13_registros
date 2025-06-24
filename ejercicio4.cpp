#include<iostream>
#include<string>
using namespace std;

struct ATL {
	string nom;
	string pais;
	string disciplina;
	int medallas;
};

int main() {
	ATL ATLETAS[100];
	int n;
	cout<<"Ingrese el numero de atletas que desea registrar: ";
	cin>>n;
	for (int i=0; i<n; i++){
		cout<<"-----------INGRESE LOS DATOS DEL ATLETA "<<(i+1)<<"----------"<<endl;
		cout<<"Ingrese el nombre: ";
		cin.ignore();
		getline(cin,ATLETAS[i].nom);
		cout<<"Ingrese el pais: ";
		cin>>ATLETAS[i].pais;
		cout<<"Ingrese la disciplina: ";
		cin>>ATLETAS[i].disciplina;
		cout<<"Ingrese la cantidad de medallas: ";
		cin>>ATLETAS[i].medallas;
    }
    cout<<"------------------------------------------------------------------------"<<endl;
    string BuscarPais;
	cout<<"Ingrese un pais para mostrar los atletas: ";
	cin>>BuscarPais;

	cout<<"------ATLETAS QUE PROVIENEN DE "<<BuscarPais<<"------"<<endl;
	int contador=0;
	for (int i=0; i<n; i++){
		if(ATLETAS[i].pais==BuscarPais){
			cout<<"Nombre: "<<ATLETAS[i].nom<<endl;
			cout<<"Disciplina: "<<ATLETAS[i].disciplina<<endl;
			cout<<"Medallas: "<<ATLETAS[i].medallas<<endl;
			contador=contador+1;
		}
	}
	if(contador==0){
		cout<<"No hay atletas registrados de ese pais."<<endl;
	}
	string maxNom=ATLETAS[0].nom;
	string maxPais=ATLETAS[0].pais;
	string maxDis=ATLETAS[0].disciplina;
	int maxMed=ATLETAS[0].medallas;

	for (int i=1; i<n; i++){
		if(ATLETAS[i].medallas>maxMed){
			maxNom=ATLETAS[i].nom;
			maxPais=ATLETAS[i].pais;
			maxDis=ATLETAS[i].disciplina;
			maxMed=ATLETAS[i].medallas;
		}
	}
	cout<<"------------------------------------------------------------------------"<<endl;
	cout<<"ATLETA CON MAYOR NUMERO DE MEDALLAS:"<<endl;
	cout<<"Nombre: "<<maxNom<<endl;
	cout<<"Pais: "<<maxPais<<endl;
	cout<<"Disciplina: "<<maxDis<<endl;
	cout<<"Medallas: "<<maxMed<<endl;

}
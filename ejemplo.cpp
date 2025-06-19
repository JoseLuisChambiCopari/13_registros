#include <iostream>
#include <string>
using namespace std;

struct EMP {
    int num;
    string nom;
    float ven[12],sal;
};

int main(){
    EMP EMPLEADOS[100] ;
    int n;
    cout<<"Ingrese el numero de empleados que desea inscribir: ";
    cin>>n;
    for (int i=0; i<n; i++) {
        cout<<"Ingrese el numero de orden del empleado que desea modificar sus datos: ";
        cin>>EMPLEADOS[i].num;
        cout<<"Ingrese el nombre completo del empleado : ";
        cin.ignore();
        getline(cin,EMPLEADOS[i].nom);
        for (int j=0; j<12; j++){
            cout<<"Ingrese la venta del empleado en el mes "<<(j+1)<<" : ";
            cin>>EMPLEADOS[i].ven[j];
        }
        cout<<"Ingrese el salario del empleado: ";
        cin>>EMPLEADOS[i].sal;
        cout<<"------------------------------------------------------------------"<<endl;
    }
    for (int i=0; i<n; i++) {
        cout<<"NUMERO DE ORDEN DEL EMPLEADO: "<<EMPLEADOS[i].num<<endl;
		cout<<"NOMBRE COMPLETO: "<<EMPLEADOS[i].nom<<endl;
        cout<<"VENTAS: "<<endl;
        for (int j=0; j<12; j++){
            cout<<"Mes "<<(j+1)<<": "<<EMPLEADOS[i].ven[j]<<"soles.    ";
        }
        cout<<" "<<endl;
        cout<<"SALARIO DEL EMPLEADO: ";
        cout<<EMPLEADOS[i].sal<<endl;
        cout<<"---------------------------------------------------------------"<<endl;
    }    
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

struct EMP {
    int num;
    string nom;
    float ven[12],sal;
};

void MayorVentas (EMP[], int );
void AumentodelSalario(EMP[], int);


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
            cout<<"Mes "<<(j+1)<<": "<<EMPLEADOS[i].ven[j]<<" unidades.    ";
        }
        cout<<" "<<endl;
        cout<<"SALARIO DEL EMPLEADO: ";
        cout<<EMPLEADOS[i].sal<<endl;
        cout<<"---------------------------------------------------------------"<<endl;
    }
    MayorVentas(EMPLEADOS, n);
    cout<<"------------------------------------------------------------------"<<endl;
    cout<<"INCREMENTO DE SALARIOS A EMPLEADOS QUE PASARON LAS 100 UNIDADES DE VENTA AL AÑO:"<<endl;
    AumentodelSalario(EMPLEADOS, n);
    return 0;
}

void MayorVentas (EMP EMPLEADOS[], int n) {
    int num_empleado=EMPLEADOS[0].num;
    string nombre_empleado=EMPLEADOS[0].nom;
    float total_ventas=0;
    for (int mes=0; mes<12; mes++) {
        total_ventas=total_ventas + EMPLEADOS[0].ven[mes];
    }
    for (int i = 1; i < n; i++) {
        float ventas_actuales=0;
        for (int mes=0; mes<12; mes++) {
            ventas_actuales = ventas_actuales+EMPLEADOS[i].ven[mes];
        }
        if (ventas_actuales>total_ventas) {
            total_ventas=ventas_actuales;
            num_empleado=EMPLEADOS[i].num;
            nombre_empleado=EMPLEADOS[i].nom;
        }
    }
    cout<<"EMPLEADO CON MAS VENTAS: "<<endl;
    cout<<"NUMERO: "<<num_empleado<<endl;
	cout<<"NOMBRE: " <<nombre_empleado<<endl; 
    cout<<"TOTAL DE VENTAS: "<<total_ventas<<" unidades en los 12 meses."<<endl;
}

void AumentodelSalario(EMP EMPLEADOS[], int n) {
    for(int i=0; i<n; i++){
        float total_unidades=0;
        for (int mes=0; mes<12; mes++) {
            total_unidades=total_unidades+EMPLEADOS[i].ven[mes];
        }
        if(total_unidades>100){
            float aumento=EMPLEADOS[i].sal * 0.10;
            EMPLEADOS[i].sal=EMPLEADOS[i].sal + aumento;
            cout<<"Se aplico un aumento del 10% en el salario a "<<EMPLEADOS[i].nom<<endl;
            cout<<"NUEVO SALARIO:"<<EMPLEADOS[i].sal<<" soles"<<endl;
        }
    }
}
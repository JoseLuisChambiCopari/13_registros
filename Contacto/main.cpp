#include<iostream>
#include <string>
#include "contacto.h"
using namespace std;

void leerCorreo(correo &, string, string);
void leerContacto(contactoEmail &, string, char, int, correo);
void imprimeContacto(contactoEmail &);
void imprimeContactoLineal (contactoEmail &, int );

int main(){
    int n, op, id;
    string nom, user, domain;
    char sex;
    int edad;
    correo email;
    contactoEmail cont, lista[100];
    n = 0;
    do{
        system("cls");
        cout<<"Menu de opciones -------------------------"<<endl;
        cout<<"1. Agregar contacto"<<endl;
        cout<<"2. Modificar contactos"<<endl;
        cout<<"3. Mostrar contactos"<<endl;
        cout<<"4. Mostrar listado de contactos correspondiente a un servidor de correo"<<endl;
        cout<<"5. Eliminar un contacto"<<endl;
        cout<<"6. Buscar contacto por email"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Elige una opcion: "; cin>>op;
        switch(op){
            case 1:
                cout<<"Ingrese los datos de un usuario: "<<endl;
                cin.ignore();
                cout<<"Ingrese el nombre del contacto: "; getline(cin,nom);
                cout<<"Ingrese el sexo (M/F): "; cin>>sex;
                cout<<"Ingrese la edad: "; cin>>edad;
                cout<<"Ingrese el correo electronico (usuario@dominio): "<<endl;
                cout<<"\tIngrese el usuario: "; cin>>user;
                cout<<"\tIngrese el dominio: "; cin>>domain;
                
                leerCorreo(email,user,domain);
                leerContacto(cont,nom,sex,edad,email);
                //imprimeContacto(cont);

                lista[n] = cont;
                n++;
                system("pause");
                break;
            case 2:{
                cout<<"MODIFICAR CONTACTOS ****************************************"<<endl;
                cout<<"Id"<<endl;
                for (int i=0; i<n; i++){
                    cout<<i+1<<". ";
                    imprimeContactoLineal(lista[i], i);
                    cout<<"\n";
                }
                cout<<"--------------------------------------------------------------"<<endl;
                cout<<"Ingrese el Id del contacto a modificar: ";
                cin>>id;
                id=id-1;
                contactoEmail &c = lista[id];
                char resp;
                cout<<"Desea cambiar el nombre? (S/N): ";
                cin>>resp;
                if(resp == 's'|| resp== 'S') {
                    cout<<"\tIngrese el nuevo nombre: ";
                    cin.ignore();
                    getline(cin,c.nom);
                }
                cout<<"Desea cambiar el sexo? (S/N): ";
                cin>>resp;
                if (resp=='s'||resp=='S') {
                    cout<<"\tIngrese el nuevo sexo: ";
                    cin>>c.sex;
                }
                cout<<"Desea cambiar la edad? (S/N): ";
                cin>>resp;
                if(resp == 's'|| resp== 'S') {
                    cout<<"\tIngrese la nueva edad: ";
                    cin>>c.edad;
                }
                cout<<"Desea cambiar el email? (S/N): ";
                cin>>resp;
                if(resp == 's'|| resp== 'S') {
                    cout<<"Ingrese el nuevo EMAIL: "<<endl;
                    cout<<"\tIngrese el usuario: ";
                    cin>>c.email.user;
                    cout<<"\tIngrese el dominio: ";
                    cin>>c.email.domain;
                }
            	system("pause");
            	break;
            }    
            case 3:
                cout<<"MOSTRAR CONTACTOS ******************************************"<<endl;
                for(int i = 0; i < n; i++){
                    cout<<"Contacto #"<<i+1<<endl;
                    imprimeContacto(lista[i]);
                    cout<<endl;
                }
                system("pause");
                break;
            case 4:
            	
            	system("pause");
            	break;
			case 5:
				
				system("pause");
				break;
			case 6:
				
				system("pause");
			    break;     
            case 0:
                cout<<"Esta seguro de salir? (S/N): ";

                break;
            default:
                cout<<"Opcion no valida!"<<endl;
                system("pause");
                break;
        }
    } while(op != 0);
    return 0;
}


#include <iostream>
#include <string>

using namespace std;

int main()
{
    string aux;
    int numeros[10], opc, suma = 0, dato, datos = 0;
    
    do
    {
        cout<<"\n--------------------------------"<<endl;
        cout<<"******* MENU ***********"<<"\nIngrese una opcion"
            <<"\n1-Llenar arreglo"
            <<"\n2-Mostrar datos del arreglo"
            <<"\n3-sumar datos arreglo"
            <<"\n4-buscar un dato"
            <<"\n5-Salir: ";
        getline(cin, aux);
        opc = stoi(aux);
        
        switch(opc)
        {
            
            case 1: cout<<"*** LLENAR EL ARREGLO****"<<endl;
                    for(int i = 0; i < 10; i++)
                    {
                        cout<<"Digite el dato en posicion ["<<i<<"] = " ;
                        getline(cin, aux);
                        numeros[i] = stoi(aux);
                    }
                    break;
            case 2: cout<<"**** MOSTRANDO DATOS DEL ARREGLO"<<endl;
                    for(int j = 0; j < 10; j++)
                        cout<<numeros[j]<<"\t";
                    break;
                    
            case 3: cout<<"***** SUMAR DATOS DEL ARREGLO"<<endl;
                    for (int i = 0; i < 10; i++)
                        suma = suma + numeros[i];
                    cout<<"La suma de datos del arreglo es: "<<suma<<endl;
                    break;
            case 4: cout<<"***** BUSCAR UN DATO EN UN ARREGLO"<<endl;
                    cout<<"Digite un dato a buscar: ";
                    getline(cin, aux);
                    dato = stoi(aux);
                    for (int i = 0; i < 10; i++) {
                        if (numeros[i] == dato)
                            datos += 1;
                    }
                    cout<<dato << " se ha encontrado "<<datos<<" veces"<<endl;
                    break;
            default : cout<<"Opcion de menú inválida"<<endl;
        }
            
        
        
    }while(opc != 5);
    cout<<"Chao!"<<endl;
    
    
}

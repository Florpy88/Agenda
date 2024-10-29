#include<iostream>
using namespace std;
int opcion;
Contacto contacto;

void menu(){
	do {
        cout << "\tMenu:\n";
        cout << "1. Agregar contacto\n";
        cout << "2. Buscar contacto\n";
        cout << "3. Mostrar todos los contactos\n";
        cout << "4. Salir\n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        limpiarPantalla();

        switch (opcion) {
            case 1:
                cout << "Ingrese el nombre: ";
                cin.ignore(); // Para evitar problemas con el getline después de cin
                getline(cin, contacto.nombre);
                cout << "Ingrese el telefono: ";
                getline(cin, contacto.telefono);
                cout << "Ingrese el email: ";
                getline(cin, contacto.email);
                agregarContacto(contacto);
                esperarYLimpiar();
                break;
            case 2:
                cout << "Ingrese el nombre a buscar: ";
                cin.ignore();
                getline(cin, contacto.nombre);
                buscarContacto(contacto.nombre);
                esperarYLimpiar();
                break;
            case 3:
                mostrarContactos();
                esperarYLimpiar();
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida." << endl;
        }
    } while (opcion != 4);

}



    


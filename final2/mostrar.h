#include<iostream>
using namespace std;


// Función para mostrar todos los contactos
void mostrarContactos() {
    ifstream archivo("agenda.txt");
    string linea;

    if (archivo.is_open()) {
        cout << "Lista de contactos:" << endl;
        while (getline(archivo, linea)) {
            int pos1 = linea.find(',');
            string nombre = linea.substr(0, pos1);
            int pos2 = linea.find(',', pos1 + 1);
            string telefono = linea.substr(pos1 + 1, pos2 - pos1 - 1);
            string email = linea.substr(pos2 + 1);

            cout << "Nombre: " << nombre << "  Telefono: " << telefono << "  Email: " << email << endl;
        }
        archivo.close();
    } else {
        cout << "Error al abrir el archivo." << endl;
    }
}

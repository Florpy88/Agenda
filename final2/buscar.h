#include<iostream>
using namespace std;


// Función para buscar un contacto por nombre
void buscarContacto(const string& nombre) {
    ifstream archivo("agenda.txt");
    string linea;
    bool encontrado = false;

    if (archivo.is_open()) {
        while (getline(archivo, linea)) {
            int pos1 = linea.find(',');
            string nombreArchivo = linea.substr(0, pos1);
            int pos2 = linea.find(',', pos1 + 1);
            string telefono = linea.substr(pos1 + 1, pos2 - pos1 - 1);
            string email = linea.substr(pos2 + 1);

            if (nombreArchivo == nombre) {
                cout << "Nombre: " << nombreArchivo << endl;
                cout << "Celular: " << telefono << endl;
                cout << "Email: " << email << endl << endl;
                encontrado = true;
                break;
            }
        }
        archivo.close();
    } else {
        cout << "Error al abrir el archivo." << endl;
    }

    if (!encontrado) {
        cout << "Contacto no encontrado." << endl;
    }
}

#include<iostream>
using namespace std;


struct Contacto {
    string nombre;
    string telefono;
    string email;
};


// Función para agregar un contacto al archivo
void agregarContacto(const Contacto& contacto) {
    ofstream archivo("agenda.txt", ios::app);
    if (archivo.is_open()) {
        archivo << contacto.nombre << "," << contacto.telefono << "," << contacto.email << endl;
        archivo.close();
        cout << "Contacto agregado exitosamente." << endl;
    } else {
        cout << "Error al abrir el archivo." << endl;
    }
}



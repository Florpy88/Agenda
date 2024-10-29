#include<iostream>
using namespace std;


void limpiarPantalla() {
    system("cls");  // Ejecuta el comando "cls" del sistema
}



void esperarYLimpiar() {
    cout << "\nPresione Enter para continuar...";
    cin.ignore().get();  // Pausa esperando Enter
    limpiarPantalla();
}

//ejercicio1
#include <iostream>

using namespace std;

int main() {
    int num, i=1;

    cout << "Ingresa un numero para mostrar su tabla de multiplicar: ";
    cin >> num;

    while (i <= 10) {
        cout << num << " x " << i << " = " << num*i << endl;
        i++;
    }

    return 0;
}
//ejercicio 2
#include <iostream>

using namespace std;

int main() {
    int num1 = 5, num2 = 8, num3 = 9;

    // Tabla de multiplicar del 5
    cout << "Tabla de multiplicar del 5:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << num1 << " x " << i << " = " << num1*i << endl;
    }

    // Tabla de multiplicar del 8
    cout << "Tabla de multiplicar del 8:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << num2 << " x " << i << " = " << num2*i << endl;
    }

    // Tabla de multiplicar del 9
    cout << "Tabla de multiplicar del 9:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << num3 << " x " << i << " = " << num3*i << endl;
    }

    return 0;
}
//ejercicio 3
#include <iostream>

using namespace std;

int main() {
    int dia;

    cout << "Ingresa un numero del 1 al 7 para indicar un dia de la semana: ";
    cin >> dia;

    switch(dia) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "El dia " << dia << " es un dia laboral" << endl;
            break;
        case 6:
        case 7:
            cout << "El dia " << dia << " no es un dia laboral" << endl;
            break;
        default:
            cout << "El numero ingresado no es valido. Ingresa un numero del 1 al 7." << endl;
            break;
    }

    return 0;
}
//ejercicio 4

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string nombre, carnet;
    int opcion;

    // Verificar si el archivo existe
    ifstream archivo("C:/examen.txt");
    if (archivo.is_open()) {
        cout << "El archivo ya existe. Desea modificar la informacion? (1 = Si, 0 = No): ";
        cin >> opcion;

        // Si el usuario quiere modificar la informacion, pedir los nuevos datos
        if (opcion == 1) {
            cout << "Ingresa tu nombre: ";
            cin >> nombre;

            cout << "Ingresa tu carnet: ";
            cin >> carnet;

            // Abrir el archivo en modo escritura para sobreescribir los datos
            ofstream archivo("C:/examen.txt");
            archivo << nombre << endl;
            archivo << carnet << endl;
            archivo.close();

            cout << "Informacion modificada exitosamente." << endl;
        }
            // Si el usuario no quiere modificar la informacion, leer los datos y mostrarlos
        else {
            getline(archivo, nombre);
            getline(archivo, carnet);

            cout << "Nombre: " << nombre << endl;
            cout << "Carnet: " << carnet << endl;
        }
        archivo.close();
    }
        // Si el archivo no existe, crearlo y guardar los datos
    else {
        cout << "Ingresa tu nombre: ";
        cin >> nombre;

        cout << "Ingresa tu carnet: ";
        cin >> carnet;

        ofstream archivo("C:/examen.txt");
        archivo << nombre << endl;
        archivo << carnet << endl;
        archivo.close();

        cout << "Informacion guardada exitosamente." << endl;
    }

    return 0;
}
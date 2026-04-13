#include <iostream>
#include <string>
using namespace std;

int main() {
    // Credenciales correctas (hardcoded)
    string usuarioCorrecto = "admin";
    string passwordCorrecto = "Segura123!";

    string usuario, password;
    int intentos = 0;
    bool acceso = false;

    while (intentos < 3 && !acceso) {
        cout << "\n--- Intento " << (intentos + 1) << " de 3 ---" << endl;

        cout << "Usuario: ";
        cin >> usuario;
        cout << "Contraseña: ";
        cin >> password;

        if (usuario == usuarioCorrecto && password == passwordCorrecto) {
            cout << "¡Acceso concedido!" << endl;
            acceso = true;
        } else {
            cout << "Credenciales incorrectas." << endl;
            intentos++;
        }
    }

    if (!acceso) {
        cout << "CUENTA BLOQUEADA" << endl;
    }

    return 0;
}
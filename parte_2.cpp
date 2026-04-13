#include <iostream>
#include <string>
using namespace std;

int main() {
    // =============================================
    // CREDENCIALES HARDCODED (solo para pruebas)
    // En producción, nunca almacenar contraseñas
    // en texto plano dentro del código fuente
    // =============================================
    string usuarioCorrecto = "admin";
    string passwordCorrecto = "Segura123!";

    // Variables para almacenar la entrada del usuario
    string usuario, password;

    // Contador de intentos fallidos
    int intentos = 0;

    // Bandera que indica si el acceso fue exitoso
    bool acceso = false;

    // Bucle que permite hasta 3 intentos de inicio de sesión
    while (intentos < 3 && !acceso) {

        // Muestra el número del intento actual (1-indexado)
        cout << "\n--- Intento " << (intentos + 1) << " de 3 ---" << endl;

        // Solicita el nombre de usuario
        cout << "Usuario: ";
        cin >> usuario;

        // Solicita la contraseña
        cout << "Contraseña: ";
        cin >> password;

        // Verifica si ambas credenciales coinciden con las correctas
        if (usuario == usuarioCorrecto && password == passwordCorrecto) {
            cout << "¡Acceso concedido!" << endl;

            // Marca el acceso como exitoso para salir del bucle
            acceso = true;

        } else {
            // Informa al usuario que las credenciales son incorrectas
            cout << "Credenciales incorrectas." << endl;

            // Incrementa el contador de intentos fallidos
            intentos++;
        }
    }

    // Si se agotaron los 3 intentos sin éxito, bloquea la cuenta
    if (!acceso) {
        cout << "CUENTA BLOQUEADA" << endl;
    }

    return 0; // Fin del programa
}
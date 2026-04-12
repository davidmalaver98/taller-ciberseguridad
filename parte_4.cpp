#include <iostream>
#include <string>
using namespace std;

int main() {

    // ---- DECLARACIÓN DE ARREGLOS ----
    // Guardamos los nombres de usuario de los 5 intentos
    string usuarios[5];
    // Guardamos true si el acceso fue exitoso, false si falló
    bool exitoso[5];

    // ---- CREDENCIALES CORRECTAS ----
    // Estas son las únicas credenciales válidas del sistema
    string usuarioCorrecto  = "admin";
    string contrasenaCorrrecta = "1234";

    // ---- PRIMER FOR: capturar los 5 intentos ----
    for (int i = 0; i < 5; i++) {

        string user, pass;

        cout << "\n--- Intento " << (i + 1) << " ---" << endl;

        // Pedimos el nombre de usuario
        cout << "Usuario: ";
        cin >> user;

        // Pedimos la contraseña
        cout << "Contrasena: ";
        cin >> pass;

        // Guardamos el usuario en el arreglo en la posición i
        usuarios[i] = user;

        // Verificamos si AMBOS datos son correctos
        // Si lo son, exitoso[i] = true; si no, exitoso[i] = false
        exitoso[i] = (user == usuarioCorrecto && pass == contrasenaCorrrecta);
    }

    // ---- CONTADORES para el reporte ----
    int totalExitosos = 0;
    int totalFallidos = 0;
    int total = 5; // total de intentos (lo usamos para calcular el porcentaje)

    cout << "\n========== REPORTE DE ACCESOS ==========" << endl;

    // ---- SEGUNDO FOR: imprimir el reporte ----
    for (int i = 0; i < 5; i++) {

        // Imprimimos el nombre del usuario guardado
        cout << "Usuario: " << usuarios[i];

        // Revisamos si su intento fue exitoso o fallido
        if (exitoso[i]) {
            cout << " --> OK" << endl;
            totalExitosos++; // sumamos al contador de exitosos
        } else {
            cout << " --> FALLIDO" << endl;
            totalFallidos++; // sumamos al contador de fallidos
        }
    }

    // ---- CALCULAR TASA DE FALLO ----
    // Usamos (float) para que la división no sea entera y obtener decimales
    float tasa = ((float)totalFallidos / total) * 100;

    // Imprimimos el resumen final
    cout << "\nExitosos : " << totalExitosos << endl;
    cout << "Fallidos : " << totalFallidos << endl;
    cout << "Tasa de fallo: " << tasa << "%" << endl;

    // ---- ALERTA DE SEGURIDAD ----
    // Si más del 60% de los intentos fallaron, mostramos una advertencia
    if (tasa > 60.0) {
        cout << "\n⚠️  ALERTA DE SEGURIDAD: Tasa de fallo superior al 60%!" << endl;
    }

    return 0;
}
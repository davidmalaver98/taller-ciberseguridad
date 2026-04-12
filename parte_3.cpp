#include <iostream>
#include <string>
using namespace std;

int main() {
    // Variables para guardar el mensaje original y el desplazamiento
    string mensaje;
    int desplazamiento;

    // Pedimos al usuario el mensaje (sin espacios)
    cout << "Ingrese el mensaje: ";
    cin >> mensaje;

    // Pedimos el número de posiciones a desplazar (1-25)
    cout << "Ingrese el desplazamiento: ";
    cin >> desplazamiento;

    // String donde iremos construyendo el mensaje cifrado
    string cifrado = "";

    // Recorremos cada carácter del mensaje uno por uno
    for (int i = 0; i < mensaje.length(); i++) {
        char c = mensaje[i];

        if (c >= 'a' && c <= 'z') {
            // Es minúscula:
            // 1. (c - 'a') convierte la letra a número del 0 al 25
            // 2. (+ desplazamiento) le suma el corrimiento
            // 3. (% 26) hace que vuelva al inicio si pasa la 'z'
            // 4. (+ 'a') lo convierte de vuelta a carácter
            c = (c - 'a' + desplazamiento) % 26 + 'a';

        } else if (c >= 'A' && c <= 'Z') {
            // Es mayúscula: misma lógica pero usando 'A' como base
            c = (c - 'A' + desplazamiento) % 26 + 'A';

        }
        // Si el carácter no es letra (número, símbolo, etc.), se deja igual

        // Agregamos el carácter cifrado (o sin cambio) al resultado
        cifrado += c;
    }

    // Mostramos el mensaje final cifrado
    cout << "Mensaje cifrado: " << cifrado << endl;

    return 0;
}
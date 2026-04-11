#include <iostream>
#include <string>
using namespace std;

int main() {
    //variables creadas
    string password;
    bool tieneMayuscula = false;
    bool tieneNumero = false;
    bool tieneSimboloEspecial = false;
    //ingreso de contraseña
    cout << "Ingrese contraseña: ";
    cin >> password;
    //for para validar reglas
    for (int i = 0; i < password.length(); i++) { 
        if (password[i] >= 'A' && password[i] <= 'Z') {  
            tieneMayuscula = true;                         
        }
        if (password[i] >= '0' && password[i] <= '9') {
            tieneNumero = true;
        }
        switch (password[i]) {
            case '!':
            case '@':
            case '#':
            case '$':
            case '%':
            case '&':
            case '*':
                tieneSimboloEspecial = true;
                break;
        }
    }
    //variable que necesita la lectura de la contraseña
    bool tieneLongitud = password.length() >= 8;
    //variable de puntaje para validar el nivel de la contraseña
    int puntaje = tieneMayuscula + tieneNumero + tieneSimboloEspecial + tieneLongitud;
    //estructura que evalua el puntaje
    switch (puntaje) {
        case 0:
            cout << "Nivel: DÉBIL" << endl;
            break;
        case 1:
            cout << "Nivel: DÉBIL" << endl;
            break;
        case 2:
            cout << "Nivel: DÉBIL" << endl;
            break;
        case 3:
            cout << "Nivel: MEDIA" << endl;
            break;
        case 4:
            cout << "Nivel: FUERTE" << endl;
            break;
        }
    
    return 0;
}


   
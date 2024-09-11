// Materia: Programacion I, paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha de creación: 04/09/2024
// Numero de ejercicio: 6
// Problema planteado: Adivinar el numero
#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;
int main() 
{
    srand(time(0));  
    int numeroPensado = rand() % 51; 
    int intento, numeroUsuario, minRango = 0, maxRango = 50;
    cout << "Estoy pensando un número entre 0 y 50.\n";
    for (int intento = 1; intento <= 5; intento++) 
    {
        cout << "Intento " << intento << "\n";
        cout << "? ";
        cin >> numeroUsuario;
        if (numeroUsuario == numeroPensado) 
        {
            cout << "¡Felicitaciones! Adivinaste el número.\n";
            break;
        } else if (numeroUsuario < numeroPensado) 
        {
            minRango = numeroUsuario;
            cout << "El número está entre " << minRango << " y " << maxRango << ".\n";
        } else 
        {
            maxRango = numeroUsuario;
            cout << "El número está entre " << minRango << " y " << maxRango << ".\n";
        }
        if (intento == 5 && numeroUsuario != numeroPensado) 
        {
            cout << "Lo siento, se te acabaron los intentos. El número era " << numeroPensado << ".\n";
        }
    }
    return 0;
}
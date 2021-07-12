#include "game-tools.h"

void afficherTexteEnCouleur(string chaine, Couleur couleur, bool retourALaLigne)
{
    HANDLE idTerminal = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(idTerminal, couleur);
    cout << chaine;
    SetConsoleTextAttribute(idTerminal, gris);
    if (retourALaLigne)
    {
        cout << endl;
    }
}

void afficherTexteEnCouleur(char caractere, Couleur couleur, bool retourALaLigne)
{
    HANDLE idTerminal = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(idTerminal, couleur);
    cout << caractere;
    SetConsoleTextAttribute(idTerminal, gris);
    if (retourALaLigne)
    {
        cout << endl;
    }
}

void afficherNombreEnCouleur(double nombre, Couleur couleur, bool retourALaLigne)
{
    HANDLE idTerminal = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(idTerminal, couleur);
    cout << nombre;
    SetConsoleTextAttribute(idTerminal, gris);
    if (retourALaLigne)
    {
        cout << endl;
    }
}
#include "game-tools.h"

#include <cstdlib> // pour la fonction rand
#include <time.h>  // // pour réinitialiser rand via time
#include <conio.h> // pour la fonction _getch utilisée dans la procédure pause()
int random(int min, int max)
{
    srand((unsigned int)time(0));
    return rand() % (max + 1 - min) + min;
}

void pause(unsigned int dureeEnSecondes)
{
    if (dureeEnSecondes == 0)
    {
        char touche;
        touche = _getch();
        touche = ' ';
        cout << touche << endl;
    }
    else
    {
        const unsigned short int UNE_MILLISECONDE = 1000;
        Sleep(dureeEnSecondes * UNE_MILLISECONDE);
    }
}

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
/**
 * @file game-tools.cpp
 * @author Patrick Etcheverry
 * @brief Corps du module game-tools
 * @date 2021-07-12
 */
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

void effacer(void)
{
    HANDLE idTerminal;
    CONSOLE_SCREEN_BUFFER_INFO caracteristiquesTerminal;
    DWORD count;
    DWORD nbreCellulesDansTerminal;
    COORD coordonneesOrigine = {0, 0};

    idTerminal = GetStdHandle(STD_OUTPUT_HANDLE);
    if (idTerminal == INVALID_HANDLE_VALUE)
    {
        return;
    }

    /* Calculer le nombre de cellules du terminal */
    if (!GetConsoleScreenBufferInfo(idTerminal, &caracteristiquesTerminal))
    {
        return;
    }
    nbreCellulesDansTerminal = caracteristiquesTerminal.dwSize.X * caracteristiquesTerminal.dwSize.Y;

    /* Remplir le terminal avec des espaces */
    if (!FillConsoleOutputCharacter(idTerminal, (TCHAR)' ', nbreCellulesDansTerminal, coordonneesOrigine, &count))
    {
        return;
    }

    /*Remplir le terminal avec les couleurs courantes */
    if (!FillConsoleOutputAttribute(
            idTerminal,
            caracteristiquesTerminal.wAttributes,
            nbreCellulesDansTerminal,
            coordonneesOrigine,
            &count))
    {
        return;
    }

    /* Déplacer le curseur au début du terminal */
    SetConsoleCursorPosition(idTerminal, coordonneesOrigine);
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

#ifndef GAME_TOOLS_H
#define GAME_TOOLS_H

#include <windows.h> // pour afficher du texte en couleur
#include <iostream>
using namespace std;

enum Couleur
{
    gris = 7,
    bleu = 9,
    vert = 10,
    cyan = 11,
    rouge = 12,
    violet = 13,
    jaune = 14,
    blanc = 15
};

void afficherTexteEnCouleur(string chaine, Couleur couleur, bool retourALaLigne = false);

void afficherTexteEnCouleur(char caractere, Couleur couleur, bool retourALaLigne = false);

void afficherNombreEnCouleur(double nombre, Couleur couleur, bool retourALaLigne = false);

int random(int min, int max);

void pause(unsigned int dureeEnSecondes = 0);

void effacer();

#endif

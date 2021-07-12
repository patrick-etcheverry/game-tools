#include "game-tools.h"
#include <iostream>
using namespace std;

int main(void)
{
    // Afficher des nombres en couleur
    cout << "** Des nombres en couleur **" << endl;
    afficherNombreEnCouleur(5, bleu, true);
    afficherNombreEnCouleur(4.5, vert, true);
    afficherNombreEnCouleur(3, cyan, true);
    afficherNombreEnCouleur(2.5, rouge, true);
    afficherNombreEnCouleur(1, violet, true);
    afficherNombreEnCouleur(0.5, jaune, true);
    afficherNombreEnCouleur(0, blanc, true);
    cout << endl;

    // Afficher des textes en couleur
    cout << "** Du texte en couleur **" << endl;
    afficherTexteEnCouleur("Tous ", bleu, false);
    afficherTexteEnCouleur("les ", vert, false);
    afficherTexteEnCouleur("programmeurs ", cyan, false);
    afficherTexteEnCouleur("sont ", rouge, false);
    afficherTexteEnCouleur("des ", violet, false);
    afficherTexteEnCouleur("optimistes", jaune, true);

    // Afficher un entier aléatoire compris en 0 et 100
    cout << "Un entier aleatoire compris entre 0 et 100 : ";
    cout << random(0, 100) << endl;

    return 0;
}

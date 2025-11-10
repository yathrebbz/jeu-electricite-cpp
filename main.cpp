<<<<<<< HEAD
#include "ClassesMeres.hpp"
#include "ClassesFilles.hpp"
#include <memory>
#include <iostream>

int main() {
    JeuDeMotsElectriques jeu;
    
    // Ajout des différents termes électriques
    jeu.ajouterTerme(std::make_unique<Composant>());
    jeu.ajouterTerme(std::make_unique<Unite>());
    jeu.ajouterTerme(std::make_unique<Phenomene>());
    jeu.ajouterTerme(std::make_unique<Instrument>());
    jeu.ajouterTerme(std::make_unique<Theorie>());
    
    // Démarrage du jeu
    jeu.demarrerJeu();
    
    return 0;
=======
#include "ClassesMeres.hpp"
#include "ClassesFilles.hpp"
#include <memory>
#include <iostream>

int main() {
    JeuDeMotsElectriques jeu;
    
    // Ajout des différents termes électriques
    jeu.ajouterTerme(std::make_unique<Composant>());
    jeu.ajouterTerme(std::make_unique<Unite>());
    jeu.ajouterTerme(std::make_unique<Phenomene>());
    jeu.ajouterTerme(std::make_unique<Instrument>());
    jeu.ajouterTerme(std::make_unique<Theorie>());
    
    // Démarrage du jeu
    jeu.demarrerJeu();
    
    return 0;
>>>>>>> 2653c0219f527182b7041a2cbcc4458b0fe1934f
}
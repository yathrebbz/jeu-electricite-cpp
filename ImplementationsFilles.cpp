#include "ClassesFilles.hpp"

// Implémentation des classes dérivées
Composant::Composant() : 
    TermeElectrique("Condensateur",
                   "Composant électrique qui stocke l'énergie dans un champ électrique",
                   {
                       "Je stocke l'énergie électrique",
                       "Ma capacité se mesure en Farads",
                       "Je peux me charger et me décharger",
                       "Je suis souvent utilisé dans les filtres électroniques",
                       "Je bloque le courant continu mais laisse passer le courant alternatif"
                   }) {}

Unite::Unite() : 
    TermeElectrique("Volt",
                   "Unité de mesure de la tension électrique ou force électromotrice",
                   {
                       "Je mesure la différence de potentiel électrique",
                       "Mon nom vient d'un physicien italien",
                       "Je suis essentiel pour décrire la tension",
                       "Avec l'ampère et l'ohm, je forme un trio célèbre",
                       "On me mesure avec un voltmètre"
                   }) {}

Phenomene::Phenomene() : 
    TermeElectrique("Court-circuit",
                   "Connexion de faible résistance entre deux points à potentiels différents",
                   {
                       "Je provoque souvent une étincelle",
                       "Je peux déclencher un disjoncteur",
                       "Je suis une connexion anormale",
                       "Je génère un courant très intense",
                       "Je peux être dangereux et causer des incendies"
                   }) {}

Instrument::Instrument() : 
    TermeElectrique("Oscilloscope",
                   "Instrument de mesure visualisant les signaux électriques dans le temps",
                   {
                       "Je montre les formes d'onde",
                       "J'ai un écran avec une grille de division",
                       "Je peux mesurer la fréquence et l'amplitude",
                       "Je suis l'œil de l'électronicien",
                       "Mes courbes révèlent les secrets des signaux"
                   }) {}

Theorie::Theorie() : 
    TermeElectrique("Loi d'Ohm",
                   "Loi fondamentale qui relie tension, courant et résistance",
                   {
                       "Je m'exprime par U = R × I",
                       "Je porte le nom d'un physicien allemand",
                       "Je suis la base de l'électricité",
                       "Je lie trois grandeurs fondamentales",
                       "Sans moi, les calculs de circuit seraient difficiles"
                   }) {}
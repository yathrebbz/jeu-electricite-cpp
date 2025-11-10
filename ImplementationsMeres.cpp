#include "ClassesMeres.hpp"
#include "ClassesFilles.hpp"
#include <iostream>
#include <algorithm>

// Implémentation de TermeElectrique
TermeElectrique::TermeElectrique(const std::string& nom, const std::string& definition,
                               const std::vector<std::string>& indices)
    : nom(nom), definition(definition), indices(indices) {}

void TermeElectrique::afficherIndices() const {
    std::cout << "\n💡 INDICES :" << std::endl;
    for(size_t i = 0; i < indices.size(); ++i) {
        std::cout << "   " << (i + 1) << ". " << indices[i] << std::endl;
    }
}

bool TermeElectrique::verifierReponse(const std::string& reponse) const {
    std::string reponseMin = reponse;
    std::string nomMin = nom;
    
    // Convertir en minuscules pour la comparaison
    std::transform(reponseMin.begin(), reponseMin.end(), reponseMin.begin(), ::tolower);
    std::transform(nomMin.begin(), nomMin.end(), nomMin.begin(), ::tolower);
    
    return reponseMin == nomMin;
}

std::string TermeElectrique::getNom() const {
    return nom;
}

std::string TermeElectrique::getDefinition() const {
    return definition;
}

// Implémentation de JeuDeMotsElectriques
JeuDeMotsElectriques::JeuDeMotsElectriques() : score(0), tentativeActuelle(0) {}

void JeuDeMotsElectriques::ajouterTerme(std::unique_ptr<TermeElectrique> terme) {
    termes.push_back(std::move(terme));
}

void JeuDeMotsElectriques::demarrerJeu() {
    std::cout << "🔌 BIENVENUE AU JEU DES MOTS ÉLECTRIQUES ! 🔌" << std::endl;
    std::cout << "Devinez le terme électrique à partir des indices donnés." << std::endl;
    std::cout << "==============================================" << std::endl;
    
    for(tentativeActuelle = 0; tentativeActuelle < static_cast<int>(termes.size()); ++tentativeActuelle) {
        auto& terme = termes[tentativeActuelle];
        
        std::cout << "\n🎯 TERME " << (tentativeActuelle + 1) << "/" << termes.size() << std::endl;
        terme->afficherIndices();
        
        std::string reponse;
        std::cout << "\nVotre réponse: ";
        std::getline(std::cin, reponse);
        
        if(terme->verifierReponse(reponse)) {
            std::cout << "✅ CORRECT ! Bravo !" << std::endl;
            std::cout << "Définition: " << terme->getDefinition() << std::endl;
            score++;
        } else {
            std::cout << "❌ INCORRECT ! La réponse était: " << terme->getNom() << std::endl;
            std::cout << "Définition: " << terme->getDefinition() << std::endl;
        }
        
        std::cout << "\n----------------------------------------------" << std::endl;
    }
    
    afficherScore();
}

void JeuDeMotsElectriques::afficherScore() const {
    std::cout << "\n🎊 PARTIE TERMINÉE !" << std::endl;
    std::cout << "SCORE FINAL: " << score << "/" << termes.size() << std::endl;
    
    if(score == static_cast<int>(termes.size())) {
        std::cout << "🌟 EXCELLENT ! Vous êtes un expert en électricité !" << std::endl;
    } else if(score >= termes.size() * 0.7) {
        std::cout << "👍 TRÈS BIEN ! Bonne connaissance du domaine !" << std::endl;
    } else if(score >= termes.size() * 0.5) {
        std::cout << "📚 PAS MAL ! Continuez à apprendre !" << std::endl;
    } else {
        std::cout << "💡 NE ABANDONNEZ PAS ! L'électricité s'apprend avec patience !" << std::endl;
    }
}
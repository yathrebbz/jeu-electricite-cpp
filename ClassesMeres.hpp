#ifndef CLASSES_MERES_HPP
#define CLASSES_MERES_HPP

#include <iostream>
#include <string>
#include <vector>
#include <memory>

// Classe de base pour tous les termes électriques
class TermeElectrique {
protected:
    std::string nom;
    std::string definition;
    std::vector<std::string> indices;
    
public:
    TermeElectrique(const std::string& nom, const std::string& definition, 
                   const std::vector<std::string>& indices);
    virtual ~TermeElectrique() = default;
    
    virtual void afficherIndices() const;
    virtual bool verifierReponse(const std::string& reponse) const;
    std::string getNom() const;
    std::string getDefinition() const;
};

// Classe pour gérer le jeu
class JeuDeMotsElectriques {
private:
    std::vector<std::unique_ptr<TermeElectrique>> termes;
    int score;
    int tentativeActuelle;
    
public:
    JeuDeMotsElectriques();
    void ajouterTerme(std::unique_ptr<TermeElectrique> terme);
    void demarrerJeu();
    void afficherScore() const;
};

#endif
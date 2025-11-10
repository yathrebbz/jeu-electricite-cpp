#ifndef CLASSES_FILLES_HPP
#define CLASSES_FILLES_HPP

#include "ClassesMeres.hpp"
#include <vector>

// Classes dérivées pour différents types de termes électriques
class Composant : public TermeElectrique {
public:
    Composant();
};

class Unite : public TermeElectrique {
public:
    Unite();
};

class Phenomene : public TermeElectrique {
public:
    Phenomene();
};

class Instrument : public TermeElectrique {
public:
    Instrument();
};

class Theorie : public TermeElectrique {
public:
    Theorie();
};

#endif
<<<<<<< HEAD
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

=======
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

>>>>>>> 2653c0219f527182b7041a2cbcc4458b0fe1934f
#endif
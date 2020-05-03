#ifndef __ELEMENTFACTURABLE_H__
#define __ELEMENTFACTURABLE_H__
#include <string>

class ElementFacturable {
protected:
    std::string nom;
public:
    // Constructeur par défaut
    ElementFacturable(std::string nom) {
        this->nom = nom;
    }
    std::string getNom(){
        return this->nom;
    }

    virtual ~ElementFacturable() {}
    // Méthode virtuelle pure
    virtual float calculerMontantFacturer() = 0;

};

#endif // __ELEMENTFACTURABLE_H__


#ifndef __ELEMENTFACTURABLE_H__
#define __ELEMENTFACTURABLE_H__
#include <string>

class ElementFacturable {
protected:
    std::string nom;
public:
    // Constructeur par d�faut
    ElementFacturable(std::string nom) {
        this->nom = nom;
    }
    std::string getNom(){
        return this->nom;
    }

    virtual ~ElementFacturable() {}
    // M�thode virtuelle pure
    virtual float calculerMontantFacturer() = 0;

};

#endif // __ELEMENTFACTURABLE_H__


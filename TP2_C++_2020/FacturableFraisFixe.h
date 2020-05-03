#ifndef __FACTURABLEFRAISFIXE_H__
#define __FACTURABLEFRAISFIXE_H__
#include <string>
#include "elementacturable.h"

class FacturableFraisFixe : public ElementFacturable {
private:
    int prix;
public:
    FacturableFraisFixe(std::string nom, int prix) :ElementFacturable(nom) {
        this->nom = nom;
        this->prix = prix;
    }
    float calculerMontantFacturer() {
        float montant_taxe_vente_produit = (this->prix * 8) / 100;
        float montant_taxe_additionnelle_produit = (this->prix * 7) / 100;
        float montant_taxe_total_produit = montant_taxe_vente_produit + montant_taxe_additionnelle_produit;
        float montant_total_produit = this->prix + montant_taxe_total_produit;
        return montant_total_produit;
    }
    ~FacturableFraisFixe() {}
};

#endif // __FACTURABLEFRAISFIXE_H__

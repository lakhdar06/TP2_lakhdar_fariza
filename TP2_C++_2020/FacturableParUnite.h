#ifndef __FACTURABLEPARUNITE_H__
#define __FACTURABLEPARUNITE_H__
#include <string>
#include "elementacturable.h"

class FacturableParUnite : public ElementFacturable {
protected:
    int quantite;
    int prix;

public:
    FacturableParUnite(std::string nom, int quantite, int prix) :ElementFacturable(nom) {
        this->nom = nom;
        this->quantite = quantite;
        this->prix = prix;
    }
    float calculerMontantFacturer() {
        float montant_taxe_vente_produit = ((this->quantite * this->prix) * 8) / 100;
        float montant_taxe_hebergement_produit = ((this->quantite * prix) * 5) / 100;
        float montant_taxe_total_produit = montant_taxe_vente_produit + montant_taxe_hebergement_produit;
        float montant_total_produit = (this->quantite * this->prix) + montant_taxe_total_produit;

        return montant_total_produit;
    }
     ~FacturableParUnite() {}
};

#endif // __FACTURABLEPARUNITE_H__

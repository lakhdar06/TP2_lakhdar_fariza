#include <iostream>
#include "elementacturable.h"
#include "FacturableParUnite.h"
#include "FacturableFraisFixe.h"
#include <map>
#include "nuitexception.h"
#include "qantitexception.h"
#include <string>
#include <iostream>

int main()
{
  std::map <int, ElementFacturable* > elementFacturable;
    bool fin = false;
    std::cout << "=====Menu Principal======" << std::endl;
    do {
        std::cout << "1.- Ajouter des Nuitees    : 100$" << std::endl;
        std::cout << "2.- Ajouter des Repas      : 20$" << std::endl;
        std::cout << "3.- Ajouter un Acces au spa: 75$" << std::endl;
        std::cout << "4.- Ajouter un Accse au gym: 50$" << std::endl;
        std::cout << "5.- Afficher la Facture et quitter" << std::endl;
        std::cout << "Veuillez selectionner votre choix : " << std::endl;
        int choix;
        std::cin >> choix;

        switch (choix) {
        case 1:
        {
            int nombre_unites;
            std::cout << "Entrez le nombre de nuits passe : ";
            std::cin >> nombre_unites;
            try {
                if (nombre_unites<0) throw QantitException();
                ElementFacturable* nuitees = new FacturableParUnite("Nuit", nombre_unites, 100);
                if (elementFacturable.count(1) == 1) throw NuitException();
                elementFacturable[1] = nuitees;
                std::cout << "--Nuitee ajouter avec succee--" << std::endl;
            }
            catch (const std::exception & exception) {
                std::cout << exception.what() << std::endl;
            }
        }
        break;
        case 2:
        {
            int nombr_unites;
            std::cout << "Entrez le nombre de repas : ";
            std::cin >> nombr_unites;
            ElementFacturable* repas = new FacturableParUnite("Repas", nombr_unites, 20);
            elementFacturable[2] = repas;
            std::cout << "--Repas ajouter avec succee--" << std::endl;
        }
        fin = false;
        break;
        case 3:
        {
            ElementFacturable* AccesAuspa = new FacturableFraisFixe("Acces au spa",75);
            elementFacturable[3] = AccesAuspa;
            std::cout << "--AccesAuSpa ajouter avec succee--" << std::endl;
        }
        fin = false;
        break;
        case 4:
        {
            ElementFacturable* AccesAugym = new FacturableFraisFixe("Acces au gym", 50);
            elementFacturable[4] = AccesAugym;
            std::cout << "--AccesAuGym ajouter avec succee--" << std::endl;
        }
        fin = false;
        break;

        case 5:
        {
            float facture_totale = 0;
            std::cout << "---------------------------------------------" << std::endl;
            for (std::map<int, ElementFacturable*>::iterator iter = elementFacturable.begin(); iter != elementFacturable.end(); ++iter) {
                std::cout << iter->first << ":";
                std::cout << " Element Facture a payer: " << iter->second->getNom()<<":   " << iter->second->calculerMontantFacturer();
                std::cout << std::endl;
                facture_totale += iter->second->calculerMontantFacturer();
            }
            std::cout << "---------------------------------------------" << std::endl;
            std::cout << "Facture Total General a Payer ======== " << facture_totale << std::endl;
            fin = true;

        }
        break;
        };
    } while (!fin);

    std::cout << "Au revoir  !" << std::endl;  
}


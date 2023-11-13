#pragma once
#include <array>
#include <iostream>

enum class EntreUtilisateur { haut, bas, gauche, droite, debut_partie, fin_partie };

class Grille {
    public:
        Grille(        );
        void changer_grille(EntreUtilisateur entre);
        //mettre le tableau de la grille en type pour getGrille
        unsigned getGrille();
        unsigned getScore();

        friend std::ostream& operator << (std::ostream& os, Grille _grille);

    private:
        std::array <std::array<unsigned,4>,4>_grille;
        void deplacer();
        void fusionner();
        void ajout_2();
};
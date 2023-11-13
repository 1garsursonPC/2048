#pragma once
#include <array>
#include <iostream>

enum class enum_direction { haut, bas, gauche, droite };

class Grille {
    public:
        Grille(        );
        void changer_grille(enum_direction);
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
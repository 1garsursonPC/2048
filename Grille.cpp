#pragma once
#include "Grille.h"

class Grille {
    public:
        Grille(){

            

        }

        void changer_grille(EntreUtilisateur);
        //mettre le tableau de la grille en type pour getGrille

        std::array <std::array<unsigned,4>,4> getGrille(){
            return _grille;
        };
        unsigned getScore(){
            return _score;
        };

        friend std::ostream& operator << (std::ostream& os, const Grille Grille_obj){
            std::array <std::string,4> ligne ;
            std::string ligne_separation = "---------------------"; 

            int i, j;
            for(i=0;i<4;i++){
                ligne[i]="|";
                for(j=0;j<4;j++){
                    ligne[i]+=Grille_obj._grille[i][j]+"|";
                }
            }
            
            for(i=0;i<4;i++){

            os << ligne_separation << std::endl
               << ligne[i]         << std::endl
               ;
            }
            os<< ligne_separation << std::endl;
        };

    private:
        std::array <std::array<unsigned,4>,4>_grille;
        unsigned _score=0;
        void deplacer();
        void fusionner();
        void ajout_2();

};
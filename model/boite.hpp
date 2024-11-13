#pragma once

#include "joueur.hpp"
#include "ball.hpp"
#include "raquette.hpp"
#include "mur.hpp"

class Boite{
    public:
        Boite();
        ~Boite();
    
    private:
        int taille_y;
        int taille_x;

        Joueur joueur;
        Ball ball;
        Raquette raquette;
        Mur mur;
};
#pragma once

class Raquette{
    public:
        Raquette(
            int taille,
            unsigned couleur,
            int position_x,
            int position_y
        );

    private:
        int vitesse{0};
        int position_x;
        int position_y;
        int taille;
        unsigned couleur;

};
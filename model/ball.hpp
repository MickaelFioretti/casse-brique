#pragma once

class ball{
    public:
        ball(
            unsigned couleur,
            int vitesse_y,
            int vitesse_x,
            int position_y,
            int position_x
        );

    private:
        unsigned couleur;
        int vitesse_y;
        int vitesse_x;
        int position_y;
        int position_x;
};
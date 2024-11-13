#pragma once

#include "brique.hpp"

#include<vector>
#include<memory>

class Mur{
    public:
        Mur(int nb_brique_x, int nb_brique_y);
    
    private:
    int nb_brique_x;
    int nb_brique_y;
    std::vector<std::unique_ptr<Brique>> brique;
};
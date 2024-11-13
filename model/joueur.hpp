#pragma once

#include <string>

class Joueur{
    public:
        Joueur(const std::string &name);

    private:
        std::string name;
        int vie{3};
        int score{0};
};
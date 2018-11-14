#include <iostream>
#include <vector>

#include "domino.h"

std::vector<Domino> initializeDominoes()
{
    std::vector<Domino> dominoes;
    dominoes.push_back(Domino(5, 2));
    dominoes.push_back(Domino(4, 6));
    dominoes.push_back(Domino(1, 5));
    dominoes.push_back(Domino(6, 7));
    dominoes.push_back(Domino(2, 4));
    dominoes.push_back(Domino(7, 1));
    return dominoes;
}

int main(int argc, char* args[])
{
    std::vector<Domino> dominoes = initializeDominoes();
    // You have the list of Dominoes
    // Order them into one snake where the adjacent dominoes have the same numbers on their adjacent sides
    // eg: [2, 4], [4, 3], [3, 5] ...
    std::vector<Domino> copies;
    std::vector<Domino> temp;
    temp.push_back(dominoes[0]);

    for (int i = 0; i < dominoes.size(); ++i) {
        if(temp[0].getValues().second == dominoes[i].getValues().first)
        {
            copies.push_back(temp[0]);
            temp.pop_back();
            temp.push_back(dominoes[i]);
            i = 0;
        }
        else if(copies.size() == dominoes.size()-1)
        {
            copies.push_back(temp[0]);
        }
    }

    for (int j = 0; j < copies.size(); ++j) {
        std::cout << copies[j].toString() << "\t";
    }

    return 0;
}
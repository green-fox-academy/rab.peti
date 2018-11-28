#include <iostream>
#include <vector>

#include "domino.h"

std::vector<Domino> initializeDominoes() {
    std::vector<Domino> dominoes;
    dominoes.push_back(Domino(5, 2));
    dominoes.push_back(Domino(4, 6));
    dominoes.push_back(Domino(1, 5));
    dominoes.push_back(Domino(6, 7));
    dominoes.push_back(Domino(2, 4));
    dominoes.push_back(Domino(7, 1));
    return dominoes;
}

int main(int argc, char *args[]) {
    std::vector<Domino> dominoes = initializeDominoes();
    std::vector<Domino> inOrder;
    std::vector<Domino> temp;
    temp.push_back(dominoes[0]);

    for (int i = 0; i < dominoes.size(); ++i) {
        if(temp[0].getValues().second == dominoes[i].getValues().first)
        {
            inOrder.push_back(temp[0]);
            temp.pop_back();
            temp.push_back(dominoes[i]);
            i = 0;
        }
        else if(inOrder.size() == dominoes.size()-1)
        {
            inOrder.push_back(temp[0]);
        }
    }
    for (int j = 0; j < inOrder.size(); ++j) {
        std::cout << inOrder[j].toString() << "\t";
    }
    return 0;
}
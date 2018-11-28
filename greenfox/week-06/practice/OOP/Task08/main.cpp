#include <iostream>
#include <vector>
#include "dice_set.h"

int main(int argc, char *args[]) {
    // You have a `DiceSet` class which has a list for 6 dices
    // You can roll all of them with roll()
    // Check the current rolled numbers with getCurrent()
    // You can reroll with roll()
    // Your task is to roll the dices until all of the dices are 6
    DiceSet diceSet;
    diceSet.roll();
    bool stop = false;
    int counter = 0;
    while (!stop) {
        for (int i = 0; i < diceSet.getCurrent().size(); ++i) {
            while (diceSet.getCurrent(i) != 6) {
                diceSet.roll(i);
                counter++;
            }
        }
        stop = true;
        std::cout << "I had to roll: " << counter << " times." << std::endl;
        for (int j = 0; j < 6; ++j) {
            std::cout << diceSet.getCurrent(j) <<" | ";
        }
    }

    return 0;
}
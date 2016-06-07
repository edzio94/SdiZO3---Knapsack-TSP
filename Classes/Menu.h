//
// Created by lukasz on 6/6/16.
//

#ifndef SDIZO_PROJECT3_MENU_H
#define SDIZO_PROJECT3_MENU_H


#include "TSP_BruteForce.h"
#include "BackpackBruteForce.h"
#include "DataLoader.h"

class Menu {
    BackpackBruteForce backpackBruteForce = NULL;
    TSP_BruteForce tsp_bruteForce = NULL;
    DataLoader dataLoader;

public:
    Menu();
    void mainMenu();
    void backpackMenu();
    void tspMenu();

};


#endif //SDIZO_PROJECT3_MENU_H

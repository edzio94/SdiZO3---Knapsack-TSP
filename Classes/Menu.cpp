//
// Created by lukasz on 6/6/16.
//

#include <printf.h>
#include "Menu.h"

void Menu::mainMenu() {
    printf("1. Problem plecakowy \n");
    printf("2. Problem komiwojażera \n");
    printf("3. Wyjdź z programu\n");

}

void Menu::backpackMenu() {
    printf("1. Załaduj dane z pliku \n");
    printf("2. Pokaż tablice\n");
    printf("3. Pokaż wynik\n");
}

void Menu::tspMenu() {
    printf("1. Załaduj dane z pliku\n");
    printf("2. Pokaż tablice\n");
    printf("3. Pokaż wynik\n");
}

Menu::Menu() {
    tsp_bruteForce = TSP_BruteForce(NULL);
    backpackBruteForce = BackpackBruteForce(NULL);
}






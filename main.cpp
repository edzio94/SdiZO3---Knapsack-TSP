#include <iostream>
#include <algorithm>
#include <vector>
#include <chrono>
#include "Classes/BackpackBruteForce.h"
#include "Classes/DataLoader.h"
#include "Classes/Menu.h"

int main() {

    BackpackBruteForce backpackBruteForce= NULL;

  DataLoader dataLoader;


   TSP_BruteForce b(5);

    Menu menu;
    bool end = false;
    while(!end)
    {
        menu.mainMenu();
        int x;
        int tmp;
        std::cin>>x;
        switch(x)
        {
            case 1:
                menu.backpackMenu();

                std::cin >>tmp;
                if(tmp == 1)
                {
                    dataLoader.inputDataToClasses(backpackBruteForce);
                    break;
                }
                else if (tmp == 2)
                {
                    backpackBruteForce.printValues();
                    break;
                }
                else if (tmp == 3)
                {
                    backpackBruteForce.bureForce();
                    backpackBruteForce.printResult();
                    break;
                }
                else
                break;
            case 2:
                menu.tspMenu();
            std::cin >> tmp;
                if (tmp == 1 )
                {
                    dataLoader.inputDatatoTSP(b);
                    break;
                }
                else if (tmp == 2)
                {
                    b.printArray();
                    break;
                }
                else if (tmp == 3)
                {
                    int c;
                    printf("Podaj miasto od którego chcesz zacząć: ");
                    std::cin >> c;
                    b.makeTSP(c);
                    b.printResult();
                    break;
                }
                else
                break;
            case 3:
                end = true;
                break;
        }
    }

    return 0;
}
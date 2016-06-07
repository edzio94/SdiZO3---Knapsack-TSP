//
// Created by lukasz on 5/24/16.
//

#ifndef SDIZO_PROJECT3_DATALOADER_H
#define SDIZO_PROJECT3_DATALOADER_H


#include <fstream>
#include "BackpackBruteForce.h"
#include "TSP_BruteForce.h"

class DataLoader {
private:
    std::fstream file;
    public:
    void inputDataToClasses(BackpackBruteForce &backpack);
    void inputDatatoTSP(TSP_BruteForce &bruteForce);

};


#endif //SDIZO_PROJECT3_DATALOADER_H

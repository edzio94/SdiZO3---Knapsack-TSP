//
// Created by lukasz on 5/24/16.
//

#ifndef SDIZO_PROJECT3_BACKPACKBRUTEFORCE_H
#define SDIZO_PROJECT3_BACKPACKBRUTEFORCE_H


#include <vector>

class BackpackBruteForce {

    std::vector<std::pair<int,int>> result;

    std::vector<std::pair<int,int>> Values;

    int limit;
    int size;

    int weightSum;
    int weightValue;
public:
    BackpackBruteForce(int limit);

    void addValues(int,int);

    void bureForce();
    void printValues();
    void printResult();



};


#endif //SDIZO_PROJECT3_BACKPACKBRUTEFORCE_H

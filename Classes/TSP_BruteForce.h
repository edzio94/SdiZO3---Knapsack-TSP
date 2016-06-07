//
// Created by lukasz on 6/6/16.
//

#ifndef SDIZO_PROJECT3_TSP_BRUTEFORCE_H
#define SDIZO_PROJECT3_TSP_BRUTEFORCE_H


#include <vector>

class TSP_BruteForce {
public:
    int size;
    int ** tab;
    bool * alreadyBeen;
    int totalCost;
    std::vector<int> perm;
    std::vector<int> result;
    TSP_BruteForce(int size);
    void inputData(int u, int v, int weight);
    void makeTSP(int city);

    void printResult();

    void printArray();
};


#endif //SDIZO_PROJECT3_TSP_BRUTEFORCE_H

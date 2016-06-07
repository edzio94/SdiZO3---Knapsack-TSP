//
// Created by lukasz on 6/6/16.
//
#include <limits>
#include <algorithm>
#include "TSP_BruteForce.h"

TSP_BruteForce::TSP_BruteForce(int size) {
    tab = new int*[size];
    for (int i = 0 ; i < size;i++)
    {
        perm.push_back(i);
        tab[i] = new int [size];
        for (int j = 0 ; j < size; j++)
        {
            tab[i][j] = 0;
        }
    }

    this->totalCost = std::numeric_limits<int>::max();
    printf("Limit = %d \n",totalCost);
    this->size = size;

}

void TSP_BruteForce::inputData(int u, int v, int weight) {
        tab[u][v] = weight;
}

void TSP_BruteForce::makeTSP(int city) {
    int x = 0;
    int step = city;
    int tmpCost;
    perm.push_back(city);
    do{

        if(perm[0] == city && perm[perm.size()-1] == city) {

            tmpCost = 0;


            for (int i = 1; i < perm.size(); i++) {


                tmpCost+= tab[step][perm[i]];
                step = perm[i];
            }

            tmpCost+= tab[step][perm[perm.size()-1]];
            step = perm[perm.size()-1];

            if (tmpCost < this->totalCost)
            {

                this->totalCost = tmpCost;
                //std::copy(perm.begin(),perm.end(),result.begin());
                this->result = perm;



            }

            //printf("0 \n");
        }
    }while(std::next_permutation(perm.begin(),perm.end()));



}

void TSP_BruteForce::printResult() {
printf("Result \n");
    printf("%d ",result[0]);
    for(int i = 1 ; i < result.size();i++)
    {
        printf(" -> %d",result[i]);
    }
    printf(" \n Total Cost: %d \n",totalCost);
}

void TSP_BruteForce::printArray() {
    for( int i=0;i < size;i++)
    {
        printf("\n\n");
        for(int j=0;j < size;j++)
            printf("\t%d",tab[i][j]);
    }
}










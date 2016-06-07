//
// Created by lukasz on 5/24/16.
//

#include <iostream>
#include "DataLoader.h"

void DataLoader::inputDataToClasses(BackpackBruteForce &backpack) {
    std::string path;
    printf("Path: ");
    std::cin >> path;

    file.open(path,std::ios::in);

    int capacity,numberOfItems;

    file >> capacity;
    file >> numberOfItems;

    backpack = BackpackBruteForce(capacity);
    for (int i = 0 ; i < numberOfItems;i++)
    {
        int size,value;
        file >> size;
        file >> value;

        backpack.addValues(size,value);
    }

}

void DataLoader::inputDatatoTSP(TSP_BruteForce &bruteForce) {

    std::string path;
    printf("Path: ");
    std::cin >> path;
  //  path = "data_TSP.txt";
    file.open(path,std::ios::in);
    int size;
    file >> size;
    bruteForce = TSP_BruteForce(size);
    std::vector<int> v;
    int k;
    while(!file.eof())
    {
        file >> k;
        v.push_back(k);
    }

    int c = 0;
    int int_counter = 0;
    printf("Size: %d \n",v.size());
    for (int i = 0; i  < v.size();i++)
    {

            printf("Adding[%d][%d] = %d \n",c,int_counter,v[i]);
            bruteForce.inputData(c,int_counter,v[i]);

        int_counter++;
        if (int_counter==bruteForce.size)
        {
            c++;
            int_counter = 0;
        }
    }

}




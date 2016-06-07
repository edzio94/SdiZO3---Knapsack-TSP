//
// Created by lukasz on 5/24/16.
//

#include <algorithm>
#include <iostream>
#include <iomanip>
#include "BackpackBruteForce.h"

BackpackBruteForce::BackpackBruteForce( int limit) {

    this->limit =limit;

}

void BackpackBruteForce::addValues(int size, int value) {
    this->Values.push_back(std::make_pair(size,value));
}

void BackpackBruteForce::bureForce() {
std::vector<bool> v(this->Values.size());
this->weightSum = this->weightValue = 0;
    printf("Limit: %d\n",this->limit);
    for (int x = 1; x <= this->Values.size();x++)
    {
        std::fill(v.begin()+this->Values.size() - x ,v.end(),true);

        do {
            std::vector<std::pair<int,int>> tmp;
            int value = 0;
            int weight = 0;
  //          printf("======");
            for (int i = 0 ; i < this->Values.size();i++)
            {
                if (v[i]){
                    tmp.push_back(std::make_pair(Values[i].first,Values[i].second));
                    weight += Values[i].first;
//                    printf("Weight: %d\n",Values[i].first);
//                    printf("Value : %d\n",Values[i].second);
                    value += Values[i].second;
                }
            }
            if(value >weightValue && weight <= this->limit)
            {
                result = tmp;
                weightValue = value;
                weightSum = weight;

            }
//            printf("Weight\tValues\n");
//            printf("%d\t%d\n",weight,value);

        }while (std::next_permutation(v.begin(),v.end()));

    }

}

void BackpackBruteForce::printResult() {
    std::vector<std::pair<int,int>>::iterator it;
    std::cout<< "Weight" << std::setw(10) << "Value" << std::endl;
    for (it = result.begin(); it != result.end();++it)
    {
        std::pair<int,int> tmp = *it;
     //   printf("%d - %d \n",tmp.first,tmp.second);
        std::cout <<"  "<<tmp.first << std::setw(10) << tmp.second << std::endl;
    }

    printf("Total weight: %d\n",weightSum);
    printf("Total value: %d\n",weightValue);


}

void BackpackBruteForce::printValues() {
    std::vector<std::pair<int,int>>::iterator it;
    std::cout<< "Weight" << std::setw(10) << "Value" << std::endl;
    for (it = Values.begin() ; it != Values.end();++it ) {
        std::pair<int,int> tmp = *it;
        std::cout << "  " << tmp.first << std::setw(10) << tmp.second << std::endl;
    }
}










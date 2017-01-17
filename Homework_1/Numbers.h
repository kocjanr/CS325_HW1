//
//  Numbers.h
//  Homework_1
//
//  Created by Ryan Kojan on 1/15/17.
//  Copyright © 2017 Ryan Kojan. All rights reserved.
//

#ifndef Numbers_h
#define Numbers_h

#include <vector>
#include <algorithm>
using namespace std;

class Numbers{

public:
    std::vector<int> vector;

    void addToVector(int input)
    {
        vector.push_back(input);
    }
    
    void closestPairs()
    {
        std::vector<int> pairs;
        
        //Removes the 00 from the vector when the user exits the DO WHILE loop in main.h
        vector.pop_back();
        
        sortInOrder();
        
        for (int i = 0; i < vector.size(); i++) {
            if(plusOne(vector[i], vector[i+1]) == 1){
                pairs.push_back(vector[i]);
                pairs.push_back(vector[i+1]);
            }
        }
        
        print(pairs);
    }
    
    int plusOne(int a, int b)
    {
        if (b  == a+1) {
            return 1;
        }
        if (a == b){
            return 0;
        }
        else
            return -1;
    }
  
    void sortInOrder()
    {
        sort(vector.begin(), vector.end());
    }
    
    void print(std::vector<int> input)
    {
        for (int i = 0; i < input.size(); i++) {
            cout << input[i] << " ";
        }
    }
};


#endif /* Numbers_h */

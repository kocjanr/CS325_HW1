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
    
    std::vector<int> _vector;
    long _midpoint;

    void addToVector(int input)
    {
        _vector.push_back(input);
    }
    
    void popLast(){
        _vector.pop_back();
    }
    
    void bruteForce(){
        closestPairs(_vector);
    }
    
    void recursion(){
        closestPairsRec(_vector, _vector.size());
    }
    
private:
    
    void closestPairs(std::vector<int> input)
    {
        std::vector<int> pairs;
        
        sortInOrder();
        
        for (int i = 0; i < _vector.size(); i++) {
            if(plusOne(_vector[i], _vector[i+1]) == 1){
                pairs.push_back(_vector[i]);
                pairs.push_back(_vector[i+1]);
            }
        }
        
        print(pairs);
    }

    void closestPairsRec(std::vector<int>& input, long size ) {
        
        if (size <= 3) {
            closestPairs(input);
            return;
        }

        sortInOrder();
        
        std::vector<int> leftSide;
        std::vector<int> rightSide;
        _midpoint = input.size() / 2;
        
        for (long  i = 0; i < _midpoint; i++) {
            leftSide.push_back(_vector[i]);
        }

        closestPairsRec(leftSide, leftSide.size());
        
        for (long j = _midpoint; j < size; j++) {
            rightSide.push_back(_vector[j]);
        }
        
        closestPairsRec(rightSide, rightSide.size());

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
        sort(_vector.begin(), _vector.end());
    }
    
    void print(std::vector<int> input)
    {
        for (int i = 0; i < input.size(); i++) {
            cout << input[i] << " ";
        }
    }
};

#endif /* Numbers_h */

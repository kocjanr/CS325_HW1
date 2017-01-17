//
//  main.cpp
//  Homework_1
//
//  Created by Ryan Kojan on 1/15/17.
//  Copyright © 2017 Ryan Kojan. All rights reserved.
//

#include <iostream>
#include "Numbers.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Numbers collection = *new Numbers();
    int input;
    int exit = 00;
    
    cout << "Enter any number, enter 00 to stop entering numbers" << endl;
    
    do
    {
        cout << "Enter number: ";
        cin >> input;
        
        collection.addToVector(input);
        
    }while(input != exit);
    
    cout << "The closet pairs are: ";
    collection.closestPairs();
    
    return 0;
}

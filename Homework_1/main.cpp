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
    
    cout << "Enter 00 to quit." << endl;
    
    do
    {
        cout << ">: ";
        cin >> input;
        
        collection.addToVector(input);
        
    }while(input != exit);
    
    //Removes 00 from exiting do while loop
    collection.popLast();
    
    collection.bruteForce();
    cout << endl;
    
    collection.recursion();
    cout << endl;
    
    return 0;
}
//
//  StringController.cpp
//  StringProject
//
//  Created by Williamson, Todd on 2/2/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#include "StringController.hpp"
#include <iostream>
#include <string>

using namespace std;

StringController :: StringController()
{
    wordz = "words is here";
}

void StringController :: start()
{
    cout << wordz << endl;
    
    wordLength();
}

void StringController :: wordLength()
{
    int count = wordz.size();
    cout << "number of words int the string is: " << count << endl;
    cout << "The size method works like the length method in Java" << endl;
    
    string temp = wordz.substr(3);
    cout << temp << endl;
}

bool StringController :: hasWords()
{
    
    
    return false;
}

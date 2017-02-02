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

void StringController :: start()
{
    cout << wordsAgain << endl;
    
    wordLength();
}

int StringController :: wordLength()
{
    string str("Words here");
    
    cout << wordsAgain.size() << endl;
    
    return 0;
}

bool StringController :: hasWords()
{
    return false;
}

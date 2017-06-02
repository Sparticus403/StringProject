//
//  StringController.hpp
//  StringProject
//
//  Created by Williamson, Todd on 2/2/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef StringController_hpp
#define StringController_hpp

#include <string>
using namespace std;

class StringController
{
private:
    void wordLength();
    string wordz;
    bool hasWords();
    int * numbers;
    int numberSize;
    void buildIntArray();
    double * moreNumbers;
    int moreNumberSize;
    void buildDoubleArray();
public:
    StringController();
    void start();
};

#endif /* StringController_hpp */

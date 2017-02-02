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

class StringController
{
private:
    int wordLength();
    std::string wordsAgain = "theese is words";
    bool hasWords();
public:
    void start();
};

#endif /* StringController_hpp */

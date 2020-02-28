//
//  leaf.h
//  SB_CompositePattern72
//
//  Created by Scott Bing on 2/27/20.
//  Copyright © 2020 Scott Bing. All rights reserved.
//

#ifndef Leaf_h
#define Leaf_h

#include <iostream>


#include "Component.h"

class Leaf: public Component
{
    // 1. Scalar class   3. "isa" relationship
    int value;
  public:
    Leaf(int val)
    {
        value = val;
    }
    void traverse()
    {
        std::cout << value << ' ';
    }
};

#endif

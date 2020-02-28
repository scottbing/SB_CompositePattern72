//
//  Component.h
//  SB_CompositePattern72
//
//  Created by Scott Bing on 2/27/20.
//  Copyright © 2020 Scott Bing. All rights reserved.
//

#ifndef Component_h
#define Component_h


// 2. Create an "interface" (lowest common denominator)
class Component
{
  public:
    virtual void traverse() = 0;
};

#endif

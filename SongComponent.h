//
//  SongComponent.h
//  SB_CompositePattern72
//
//  Created by Scott Bing on 2/27/20.
//  Copyright © 2020 Scott Bing. All rights reserved.
//

#ifndef SongComponent_h
#define SongComponent_h

#include "SongComponent.h"

class SongComponent
{
public:
    virtual std::string getSongName() {
        std::bad_function_call bfc;
        throw(bfc);
    }
    virtual std::string getBandName(){
        std::bad_function_call bfc;
        throw(bfc);
    };
    virtual int getSongYear(){
        std::bad_function_call bfc;
        throw(bfc);
    }
    
    virtual void add(SongComponent* newComponent) {
        std::bad_function_call bfc;
        throw(bfc);
    }
    
    virtual void remove(SongComponent* newComponent) {
        std::bad_function_call bfc;
        throw(bfc);
    }
    
    virtual SongComponent* getSongComponent(int songIndex){
        std::bad_function_call bfc;
        throw(bfc);
    }
    
    virtual void displaySongInfo() = 0;
};


#endif /* SongComponent_h */

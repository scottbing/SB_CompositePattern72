//
//  SongGroup.h
//  SB_CompositePattern72
//
//  Created by Scott Bing on 2/27/20.
//  Copyright © 2020 Scott Bing. All rights reserved.
//

#ifndef SongGroup_h
#define SongGroup_h

#include <vector>
#include "SongComponent.h"

class SongGroup: public SongComponent
{
    
    std::vector < SongComponent* > songComponents;
    
  public:
    
    void displaySongInfo() {
        for (int i = 0; i < songComponents.size(); i++)
        // 5. Use polymorphism to delegate to children
            songComponents[i]->displaySongInfo();
    };
    
    
    void add(SongComponent *ele)
    {
        songComponents.push_back(ele);
    }
    
    void remove(int index)
    {
        songComponents.erase(songComponents.begin() + index);
    }
};

#endif /* SongGroup_h */

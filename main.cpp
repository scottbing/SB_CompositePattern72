//
//  main.cpp
//  SB_CompositePattern72
//
//  Created by Scott Bing on 2/27/20.
//  Copyright © 2020 Scott Bing. All rights reserved.
//

#include <iostream>
#include "SongComponent.h"
#include "Song.h"
#include "SongGroup.h"
#include "Leaf.h"
#include "Composite.h"

int main(int argc, const char * argv[])
{
    
  SongComponent* song = new Song("Gimme Chocolate!!", "BABYMETAL", 2016);
  SongComponent* song2 = new Song("Mashimaro", "Tamio Okuda", 2000);
  
  SongComponent* sg = new SongGroup();
  sg->add(song);
  sg->add(song2);
  sg->displaySongInfo();
  std::cout << std::endl;
  //sg->remove(0);
  sg->displaySongInfo();
 /*
  Composite containers[4];
  
  int i;
  for (i = 0; i < 4; i++)
    for (int j = 0; j < 3; j++)
      containers[i].add(new Leaf(i *3+j));

  for (i = 1; i < 4; i++)
    containers[0].add(&containers[i]);

  for (i = 0; i < 4; i++)
  {
    containers[i].traverse();
    std::cout << std::endl;
  }
    */
}

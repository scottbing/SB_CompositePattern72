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

int main(int argc, const char * argv[])
{
    
    SongComponent* song = new Song("Industrial", " is a style of experimental music that draws on transgressive and provocative themes", 2013);
    SongComponent *industrialMusic = new SongGroup();
    
    industrialMusic->add(song);
    industrialMusic->displaySongInfo();
    
    SongComponent* song2 = new Song("\nHeavy Metal", " is a genre of rock that developed in the late 1960s, largely in the UK and in the US", 2017);
    SongComponent *heavyMetalMusic = new SongGroup();
    
    heavyMetalMusic->add(song2);
    heavyMetalMusic->displaySongInfo();
    
    SongComponent* song3 = new Song("\nDubstep", " is a genre of electronic dance music that originated in South London, England", 2017);
    SongComponent *dubstepMusic = new SongGroup();
    
    dubstepMusic->add(song3);
    dubstepMusic->displaySongInfo();
    
    // Top level component that holds everything
    SongComponent* song4 = new Song("Song List", "Every Song available", 2017);
    SongComponent *everySong = new SongGroup();
    everySong->add(song4);
    
    // Composite that holds individual groups of songs
    // This holds Songs plus a SongGroup with Songs

    everySong->add(industrialMusic);
    industrialMusic->add(new Song("Head Like a Hole", "NIN", 1990));
    industrialMusic->add(new Song("Headhunter", "Front 242", 1988));

    industrialMusic->add(dubstepMusic);
    dubstepMusic->add(new Song("Centipede", "Knife Party", 2012));
    dubstepMusic->add(new Song("Tetris", "Doctor P", 2011));

    // This is a SongGroup that just holds Songs
    everySong->add(heavyMetalMusic);
    heavyMetalMusic->add(new Song("War Pigs", "Black Sabath", 1970));
    heavyMetalMusic->add(new Song("Ace of Spades", "Motorhead", 1980));
    
    everySong->displaySongInfo();

    // Homework 7.2 Part 5
    SongComponent *electronicMusic = new SongGroup();
    electronicMusic->add(industrialMusic);
    electronicMusic->add(dubstepMusic);
    
    electronicMusic->displaySongInfo();
    
    // establish Speedcore and ExtraTone Hierarchy
    SongComponent* song5 = new Song("\nExtraTone", " is a genre of electronic music that  that is characterized by a high tempo and aggressive themes", 2017);
    SongComponent *speedCore = new SongGroup();
    SongComponent *extraTone = new SongGroup();
    extraTone->add(song5);
    extraTone->add(new Song("Crazy Beauties", "Diabarha", 2014));
    extraTone->add(new Song("Alone in the Dark", "Cemetary Keeper", 2013));
    extraTone->add(new Song("Vampires", "Faces of Humanity", 2013));
    
    speedCore->add(extraTone);
    
    speedCore->displaySongInfo();
    
    

}

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


void SongListGenerator::main(std::vector<std::wstring> &args)
{
	
	SongComponent *industrialMusic = new SongGroup(L"Industrial", L"is a style of experimental music that draws on transgressive and provocative themes");
	SongComponent *heavyMetalMusic = new SongGroup(L"\nHeavy Metal", L"is a genre of rock that developed in the late 1960s, largely in the UK and in the US");
	SongComponent *dubstepMusic = new SongGroup(L"\nDubstep", L"is a genre of electronic dance music that originated in South London, England");

	// Top level component that holds everything
	SongComponent *everySong = new SongGroup(L"Song List", L"Every Song Available");
	
	// Composite that holds individual groups of songs
	// This holds Songs plus a SongGroup with Songs
	everySong->add(industrialMusic);

	Song tempVar(L"Head Like a Hole", L"NIN", 1990);
	industrialMusic->add(&tempVar);

	Song tempVar2(L"Headhunter", L"Front 242", 1988);
	industrialMusic->add(&tempVar2);

	industrialMusic->add(dubstepMusic);

	Song tempVar3(L"Centipede", L"Knife Party", 2012);
	dubstepMusic->add(&tempVar3);

	Song tempVar4(L"Tetris", L"Doctor P", 2011);
	dubstepMusic->add(&tempVar4);

	// This is a SongGroup that just holds Songs
	everySong->add(heavyMetalMusic);

	Song tempVar5(L"War Pigs", L"Black Sabath", 1970);
	heavyMetalMusic->add(&tempVar5);

	Song tempVar6(L"Ace of Spades", L"Motorhead", 1980);
	heavyMetalMusic->add(&tempVar6);

	DiscJockey *crazyLarry = new DiscJockey(everySong);
	crazyLarry->getSongList()
	
	delete crazyLarry;
	delete everySong;
	delete dubstepMusic;
	delete heavyMetalMusic;
	delete industrialMusic;
	
}


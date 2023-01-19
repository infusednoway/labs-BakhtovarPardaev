#pragma once
#include <iostream>
#include <string>
#include "Sovetnik.h"
#include "Igrok.h"
using namespace std;

class Game_Pardaev
{
public:
	int numPlayers;
	Game_Pardaev()
	{
	}
	Game_Pardaev(int kol);
	
	vector<Igrok> players;
	vector<Sovetnik> advisers;
	int year;
	int phase;
	string enemy;
	void Faza1();
	void Faza2();
	void Faza3();
	void Faza4();
	void Faza5();
	void Faza6();
	void Faza7();
	void Faza8();
	void Start();
	~Game_Pardaev()
	{

	}
};
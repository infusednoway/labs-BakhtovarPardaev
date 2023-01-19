#pragma once
#include <iostream>
#include <string>
#include "Sovetnik.h"
#include "Igrok.h"
using namespace std;

class Game_Pardaev
{
public:
	vector<Igrok> players;
	vector<Sovetnik> advisers;
	int year=1;
	int phase;
	int numPlayers;
	string enemy;
	void Faza1(Igrok& igrok);
	void Faza2();
	void Faza3();
	void Faza4();
	void Faza5();
	void Faza6();
	void Faza7();
	void Faza8();
	void Start();
	void dobzdanie(Igrok& igr);
	Game_Pardaev()
	{
	}
	Game_Pardaev(int kol);
	~Game_Pardaev()
	{

	}
};
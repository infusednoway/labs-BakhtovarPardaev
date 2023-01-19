#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "Sovetnik.h"
#include "Igrok.h"
#include "Igra.h"
using namespace std;


Game_Pardaev::Game_Pardaev(int kol)
{
    numPlayers = kol;
}

void Game_Pardaev::Faza1() 
{
    cout << "FAZA 1: " << std::endl;
    int q;
    cout << "vvesti\n";
    cin>> q;
    for (int i = 0; i < numPlayers; i++) 
    {
        Igrok player;
        cout << "Enter player " << i + 1 << " name: ";
        cin >> player.name;
        player.gold = 5;
        player.wood = 5;
        player.tokens = 5;
        player.cube1 = 0;
        player.cube2 = 0;
        player.cube3 = 0;
        player.additionalCube = 0;
        player.hasAdviser = false;
        player.militaryRegister = 0;
        player.victoryPoints = 0;
        players.push_back(player);
    }
}

void Game_Pardaev::Start()
{
  for(int i=1; year<6; year++ )
  {
      cout << i << "-y god\n";
        Faza1();
        i++;
  }
}



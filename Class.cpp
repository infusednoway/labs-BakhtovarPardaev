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
    for (int i = 0; i < numPlayers; i++)
    {
        Igrok player;
        cout << "Enter player " << i + 1 << " name: ";
        cin >> player.name;
        player.gold = 1;
        player.wood = 0;
        player.tokens = 0;
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

void Game_Pardaev::Faza1(Igrok& igrok)
{
    cout << "FAZA 1: " <<endl;
    
    for (int i = 0; i < numPlayers; i++) 
    {
        cout << "Enter player " << i + 1 << " name: ";
        cin >> igrok.name;
        igrok.gold = 1;
        igrok.wood = 0;
        igrok.tokens = 0;
        igrok.cube1 = 0;
        igrok.cube2 = 0;
        igrok.cube3 = 0;
        igrok.additionalCube = 0;
        igrok.hasAdviser = false;
        igrok.militaryRegister = 0;
        igrok.victoryPoints = 0;
        players.push_back(igrok); 
      
    }
}

void Faza2()
{

}
void Faza3()
{
    
}
void Faza4()
{

}
void Faza5()
{

}
void Faza6()
{

}
void Faza7()
{

}
void Faza8()
{

}



void Game_Pardaev:: dobzdanie(Igrok& igr)
{
    string zd;
    cin >> zd;
    igr.buildings.push_back(zd);
}

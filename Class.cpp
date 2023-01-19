#include <iostream>
#include <string>
#include <fstream>
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
        player.kol_building = 0;
        players.push_back(player);

    }
}

 void Game_Pardaev::por_hoda()
{ 
    int i = 0;
    for (; i<numPlayers; i++)
    {
        if (players[i].cube1 > 0) 
        {
            players[i].rezult_bros1 += rand() % 6 + 1;
            players[i].cube1--;
        }
        if (players[i].cube2 > 0)  
        {
            players[i].rezult_bros2 += rand() % 6 + 1;
            players[i].cube2--;
        }
        if (players[i].cube3 > 0)  
        {
            players[i].rezult_bros3 += rand() % 6 + 1;
            players[i].cube3--;
        }
        players[i].poryadok = players[i].rezult_bros1 + players[i].rezult_bros2 + players[i].rezult_bros3;
    }
}

 void  Game_Pardaev::select_sovetn()
 {
     int i = 0;
     if (players[i].poryadok < players[i + 1].poryadok && players[i].poryadok < players[i + 2].poryadok)
     {
         
     }

     if (players[i + 1].poryadok < players[i].poryadok && players[i + 1].poryadok < players[i + 2].poryadok)
     {
        
     }

     if (players[i + 2].poryadok < players[i + 1].poryadok && players[i + 2].poryadok < players[i].poryadok)
     {
        
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

void Game_Pardaev::Faza2()
{
    por_hoda();
    select_sovetn();

}

void Game_Pardaev::Faza3(Igrok& igrok)
{
    int i = 0;
    
        if (players[i].kol_building > players[i + 1].kol_building && players[i].kol_building > players[i + 2].kol_building)
        {
            players[i].victoryPoints++;  
        }

        if (players[i+1].kol_building > players[i].kol_building && players[i+1].kol_building > players[i + 2].kol_building)
        {
            players[i].victoryPoints++;
        }

        if (players[i+2].kol_building > players[i+1].kol_building && players[i+2].kol_building > players[i].kol_building)
        {
            players[i+2].victoryPoints++;
        }
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

void In_From_fayl(Igrok& unit)
{
    fstream gamefayl;
    gamefayl.open("gamefayl.txt");

    if (gamefayl.is_open())
        cout << "YES\n";
    else
        cout << "NO\n";
   

}


void Game_Pardaev:: dobzdanie(Igrok& igrok)
{
    string zd;
    cin >> zd;
    igrok.buildings.push_back(zd);
    igrok.kol_building++;

}

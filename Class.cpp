#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "Header.h"
#include "Header1.h"
using namespace std;

/*Game_Pardaev::Game_Pardaev()
{

}

Game_Pardaev::Game_Pardaev(int kol)
{
	int* mas;
	mas = new int[6];
	for (;;)
	{
		cout << "";

	}

	year = 0;
	int gold=0;
	int derevo=0;
	int kamen=0;
	int zheton=0;
	int warestr=0;
	int ochki=0;
	int year=0;
	int faza=0;
}*/



class Player 
{
public:
    std::string name;
    int gold;
    int wood;
    int tokens;
    int cube1;
    int cube2;
    int cube3;
    int additionalCube;
    bool hasAdviser;
    int militaryRegister;
    int victoryPoints;
    std::vector<std::string> buildings;
};

//class Adviser 
//{
//public:
//    std::string name;
//    std::string playerName;
//};

class Game_Surname 
{
public:
    std::vector<Player> players;
    std::vector<Adviser> advisers;
    int year;
    int phase;
    std::string enemy;
    void phase1();
    void phase2();
    void phase3();
    void phase4();
    void phase5();
    void phase6();
    void phase7();
    void phase8();
    void applyBattleResults(Player& player, int battleResult, std::vector<Adviser>& advisers, int year, std::string enemy);
    void start();
};

void Game_Surname::start() 
{
    phase1();
    phase3();
    phase5();
}

void Game_Surname::phase1() 
{
    std::cout << "Phase 1: Initialization" << std::endl;
    // Initialize players
    std::cout << "Enter number of players: ";
    int numPlayers;
    std::cin >> numPlayers;

    for (int i = 0; i < numPlayers; i++) 
    {
        Player player;
        std::cout << "Enter player " << i + 1 << " name: ";
        std::cin >> player.name;
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

void Game_Surname::phase2() 
{
    std::cout << "Phase 2: Hire Advisers" << std::endl;

    // loop through all players
    for (int i = 0; i < players.size(); i++) {
        std::cout << "Player: " << players[i].name << std::endl;

        // check if player has enough resources to hire an advisor
        if (players[i].gold >= 2 && players[i].tokens >= 1) {
            std::cout << "Advisers available for hire: King, Trader, Builder" << std::endl;
            std::cout << "Enter the name of the advisor you want to hire: ";
            std::string advisorName;
            std::cin >> advisorName;

            // check if advisor is available
            bool advisorAvailable = false;
            for (int j = 0; j < advisers.size(); j++) {
                if (advisers[j].name == advisorName && advisers[j].playerName.empty()) {
                    advisorAvailable = true;
                    break;
                }
            }

            if (advisorAvailable) {
                // hire advisor
                players[i].gold -= 2;
                players[i].tokens -= 1;
                players[i].hasAdviser = true;

                Adviser advisor;
                advisor.name = advisorName;
                advisor.playerName = players[i].name;
                advisers.push_back(advisor);
                std::cout << "Advisor hired successfully!" << std::endl;
            }
            else {
                std::cout << "Advisor not available. Hiring failed." << std::endl;
            }
        }
        else {
            std::cout << "Not enough resources to hire an advisor." << std::endl;
        }

        std::cout << std::endl;
    }
}

void Game_Surname::phase3() 
{
    std::cout << "Phase 3: Building" << std::endl;

    // loop through all players
    for (int i = 0; i < players.size(); i++) 
    {
        std::cout << "Player: " << players[i].name << std::endl;

        // check if player has enough resources to build
        if (players[i].gold >= 2 && players[i].wood >= 1) 
        {
            std::cout << "Buildings available for construction: Market, Sawmill, Smithy" << std::endl;
            std::cout << "Enter the name of the building you want to construct: ";
            std::string buildingName;
            std::cin >> buildingName;

            // check if building is available
            bool buildingAvailable = false;
            for (int j = 0; j < players[i].buildings.size(); j++) 
            {
                if (players[i].buildings[j] == buildingName) {
                    buildingAvailable = true;
                    break;
                }
            }

            if (!buildingAvailable) 
            {
                // construct building
                players[i].gold -= 2;
                players[i].wood -= 1;
                players[i].buildings.push_back(buildingName);
                std::cout << "Building constructed successfully!" << std::endl;
            }
            else 
            {
                std::cout << "Building already constructed." << std::endl;
            }
        }
        else 
        {
            std::cout << "Not enough resources to construct a building." << std::endl;
        }

        std::cout << std::endl;
    }
}

void Game_Surname::phase4() 
{
    std::cout << "Phase 4: Production" << std::endl;

    // loop through all players
    for (int i = 0; i < players.size(); i++) 
    {
        std::cout << "Player: " << players[i].name << std::endl;

        // check if player has a sawmill
        bool hasSawmill = false;
        for (int j = 0; j < players[i].buildings.size(); j++) 
        {
            if (players[i].buildings[j] == "Sawmill") 
            {
                hasSawmill = true;
                break;
            }
        }

        if (hasSawmill) 
        {
            players[i].wood++;
            std::cout << "1 wood produced at the sawmill." << std::endl;
        }
        else 
        {
            std::cout << "Sawmill not constructed. No wood produced." << std::endl;
        }

        // check if player has a smithy
        bool hasSmithy = false;
        for (int j = 0; j < players[i].buildings.size(); j++) 
        {
            if (players[i].buildings[j] == "Smithy") 
            {
                hasSmithy = true;
                break;
            }
        }


        if (hasSmithy) 
        {
            players[i].tokens++;
            std::cout << "1 token produced at the smithy." << std::endl;
        }
        else 
        {
            std::cout << "Smithy not constructed. No tokens produced." << std::endl;
        }

        std::cout << std::endl;
    }
}

void Game_Surname::phase5() 
{
    std::cout << "Phase 5: Military" << std::endl;

    // loop through all players
    for (int i = 0; i < players.size(); i++) 
    {
        std::cout << "Player: " << players[i].name << std::endl;

        // check if player has enough resources to recruit soldiers
        if (players[i].gold >= 2 && players[i].tokens >= 1) 
        {
            std::cout << "Enter the number of soldiers you want to recruit: ";
            int numSoldiers;
            std::cin >> numSoldiers;

            // recruit soldiers
            players[i].gold -= 2;
            players[i].tokens -= 1;
            players[i].militaryRegister += numSoldiers;
            std::cout << numSoldiers << " soldiers recruited successfully!" << std::endl;
        }
        else 
        {
            std::cout << "Not enough resources to recruit soldiers." << std::endl;
        }

        std::cout << std::endl;
    }

    std::cout << "Enemy attack!" << std::endl;

    // loop through all players
    for (int i = 0; i < players.size(); i++) 
    {
        std::cout << "Player: " << players[i].name << std::endl;

        // calculate total defense value
        int defenseValue = players[i].militaryRegister;
        for (int j = 0; j < advisers.size(); j++)
        {
            if (advisers[j].playerName == players[i].name && advisers[j].name == "King") 
            {
                defenseValue += 2;
                break;
            }
        }
        for (int j = 0; j < players[i].buildings.size(); j++) 
        {
            if (players[i].buildings[j] == "Wall") 
            {
                defenseValue++;
            }
        }

        int battleResult = rand() % 2; // 0 = loss, 1 = win
        applyBattleResults(players[i], battleResult, advisers, year, enemy);

        std::cout << std::endl;
    }
}


void Game_Surname::applyBattleResults(Player& player, int battleResult, std::vector<Adviser>& advisers, int year, std::string enemy) 
{
    if (battleResult == 0) 
    {
        std::cout << "Battle lost. Defense value: " << player.militaryRegister << std::endl;
        player.militaryRegister = std::max(0, player.militaryRegister - 1);
    }
    else
    {
        std::cout << "Battle won. Defense value: " << player.militaryRegister << std::endl;
        player.victoryPoints++;
    }
}

int main() 
{
    srand(time(0));
    Game_Surname game;
    game.start();
    return 0;
}



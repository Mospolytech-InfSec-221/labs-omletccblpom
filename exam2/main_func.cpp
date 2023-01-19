#include <iostream>
#include "Game_ledyaev.h"
#include <vector>

Game_ledyaev::Game_ledyaev(int num_players)
{
	year = 1;
	phase = 1;
	players = std::vector<Player>(num_players);
}

void Game_ledyaev::phase1()
{
	phase = 2;
}

void Game_ledyaev::phase2()
{
	phase = 3;
}

void Game_ledyaev::phase3()
{
	phase = 4;
}

void Game_ledyaev::phase4()
{
	phase = 5;
}

void Game_ledyaev::phase5()
{
	phase = 6;
}

void Game_ledyaev::phase6()
{
	phase = 7;
}

void Game_ledyaev::phase7()
{
	phase = 8;
}

void Game_ledyaev::phase8()
{
	phase = 1;
	year++;
}

void defense_level(const char* enemy_name, int king_help, Player& player)
{
}
/*#include <iostream>
#include <time.h>
#include "Game_ledyaev.h"

using namespace std;

void Game_ledyaev::cube_roll()
{
	int cube1;
	int cube2;
	int cube3;
	int bonus_cube;
	
	srand(time(NULL));

	char cubesides[6] = { '1', '2', '3', '4','5','6'};
	int roll = rand() % 5;
	cout << cubesides[roll];
}
void Game_ledyaev::phase1()
{

}
void Game_ledyaev::phase2()
{

}
void Game_ledyaev::phase3()
{

}
void Game_ledyaev::phase4()
{

}
void Game_ledyaev::phase5()
{

}
void Game_ledyaev::phase6()
{

}
void Game_ledyaev::phase7()
{

}

void Game_ledyaev::phase8()
{

}*/
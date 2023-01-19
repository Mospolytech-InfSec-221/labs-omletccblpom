#include <iostream>
#include <vector>

class Player {
public:
	std::string name;
	Resource resource;
	std::vector<Building> buildings;
	Advisor advisor;
	bool has_messenger;
	int po;
	int military;

	void roll_cubes();
	int total_cubes();
};

class Goods {
public:
	int gold;
	int wood;
	int stone;

	int total() {
		return gold + wood + stone;
	}
};

class Advisor {
public:
	std::string name;
	std::string player_name;

};

class Building {
public:
	std::string name;
};

class Cube {
public:
	int min;
	int max;
	int value;

	Cube() {
		min = 1;
		max = 6;
		value = min;
	}

	Cube(int min_in, int max_in) {
		min = min_in;
		max = max_in;
		value = min;
	}

	void roll();
};

class Resource {
public:
	Goods goods;
	int tokens;
	Cube cube[3];
	Cube cube_white;
	bool has_cube_white;
};

class Enemy {
public:
	std::string name;
	int force;
	Goods lost_goods;
	int lost_po;
	int got_po;
	int got_goods;
};

class Game_ledyaev {
public:
	Game_ledyaev(int num_players);
	void phase1();
	void phase246();
	void phase3();
	void phase5();
	void phase7();
	void phase8();

	std::vector<Player> players;
	std::vector<Advisor> advisors;
	int year;
	int phase;
	Enemy enemy;

private:
	void phase246_bones();
	void phase246_advisor();
	void advisor_help(const char *advisor_name, Player &player);
	void building(const char *advisor_name, Player &player);
	void select_good(Player &player, int num);
};

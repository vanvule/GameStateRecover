#pragma once
#include <vector>
#include <string>
#include <map>
#include <iostream>
#include <fstream>
using namespace std;

//các hằng số tương ứng với từng nhân vật
#define NOCTIS_CHR_NAME "Noctis"
#define NOCTIS_AP_PER_LEVEL 1200
#define NOCTIS_HP_PER_LEVEL 15

#define PROMPTO_CHR_NAME "Prompto"
#define PROMPTO_AP_PER_LEVEL 1500
#define PROMPTO_HP_PER_LEVEL 18

#define GLADIOLUS_CHR_NAME "Gladiolus"
#define GLADIOLUS_AP_PER_LEVEL 800
#define GLADIOLUS_HP_PER_LEVEL 30

#define IGNIS_CHR_NAME "Ignis"
#define IGNIS_AP_PER_LEVEL 950
#define IGNIS_HP_PER_LEVEL 22

#define TEAM_CHR_NAME "Team"
#define FIGHT_ACT_NAME "Fight"
#define COOK_ACT_NAME "Cook"
#define SLEEP_ACT_NAME "Sleep"

#define COOK_GAINED_AP 2000

//lớp mô tả thông tin của nhân vật
class Character
{	
	string _name;
	int _hp;
	int _level;
	int _ap;
	int _apPerLevel;
	int _hpPerLevel;
		
public:
	string getName();
	int getLevel();
	int getAP();
	int getHP();
	int getAPPerLevel();
	int getHPPerLevel();

	void setName(string name);
	void setLevel(int level);
	void setHP(int hp);
	void setAP(int ap);
	void setAPPerLevel(int apPerLevel);
	void setHPPerLevel(int hpPerLevel);

	//phương thức thay đổi HP, AP, level
	void changeHP(int gainedHP);
	void changeAP(int gainedAP);
	void changeLevel(int gainedLv = 1);
	

	Character();
	~Character();
};


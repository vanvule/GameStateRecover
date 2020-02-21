#include "Character.h"



Character::Character()
{
}


Character::~Character()
{
}


string Character::getName()
{
	return _name;
}

int Character::getLevel()
{
	return _level;
}

int Character::getAP()
{
	return _ap;
}

int Character::getHP()
{
	return _hp;
}

int Character::getAPPerLevel()
{
	return _apPerLevel;
}

int Character::getHPPerLevel()
{
	return _hpPerLevel;
}


void Character::setName(string name) 
{ 
	_name = name; 
}

void Character::setLevel(int level) 
{ 
	_level = level; 
}

void Character::setHP(int hp) 
{ 
	_hp = hp; 
}

void Character::setAP(int ap) 
{
	_ap = ap; 
}

void Character::setAPPerLevel(int apPerLevel) 
{ 
	_apPerLevel = apPerLevel; 
}

void Character::setHPPerLevel(int hpPerLevel) 
{ 
	_hpPerLevel = hpPerLevel; 
}

void Character::changeHP(int gainedHP)
{
	_hp += gainedHP;
}

void Character::changeAP(int gainedAP)
{
	_ap += gainedAP;
}

void Character::changeLevel(int gainedLv)
{
	_level += gainedLv;
}
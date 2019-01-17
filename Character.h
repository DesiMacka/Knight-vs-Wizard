#pragma once
#include <string>
#include <ctime>
#include <cmath>

using namespace std;

class Character
{
public:

	Character(string NAM, int ATT, int HEA, int DEF);

	virtual ~Character();

	int  GetHealth();

	void SetHealth(int newHealth);

	virtual bool IsDefeated() = 0;

	virtual int Attack();

	virtual int Defense();

private:
	string NAME;
	int ATTACK;
	int HEALTH;
	int DEFENSE;
};

Character::Character(string NAM, int ATT, int HEA, int DEF)
{
	NAME = NAM;
	ATTACK = ATT;
	HEALTH = HEA;
	DEFENSE = DEF;
}

Character::~Character()
{
	// Do nothing
}

int Character::GetHealth()
{
	return HEALTH;
}

void Character::SetHealth(int newHealth)
{
	HEALTH = newHealth;
}

bool Character::IsDefeated()
{
	return false;
}

int Character::Attack()
{
	return rand() % ATTACK;
}

int Character::Defense()
{
	return rand() % DEFENSE;
}
#pragma once

#include "Character.h"

class Wizard : public Character{
public:
	Wizard(string NAM, int ATT, int HEA, int DEF, int SPELL);

	virtual ~Wizard() {};

	virtual int Attack();

	virtual bool IsDefeated();

private:
	int SPELL_ATT;
};

Wizard::Wizard(string NAM, int ATT, int HEA, int DEF, int SPELL)
	: Character(NAM, ATT, HEA, DEF)
{
	SPELL_ATT = SPELL;
}

int Wizard::Attack()
{
	if (rand() % 5 == 0)
	{
		return rand() % SPELL_ATT;
	}

	return Character::Attack();
}

bool Wizard::IsDefeated()
{
	if (GetHealth() <= 0)
	{
		//cout << "GAME OVER!!! King Arthur won!" << endl;
		return true;
	}
	else
		return false;
}
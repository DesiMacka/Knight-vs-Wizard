#pragma once

#include "Character.h"

class Knight : public Character
{
public:
	Knight(string NAM, int ATT, int HEA, int DEF);

	virtual ~Knight();

	virtual bool IsDefeated();
};

Knight::Knight(string NAM, int ATT, int HEA, int DEF)
	:Character(NAM, ATT, HEA, DEF)
{
	// Do nothing
}

Knight::~Knight()
{
	// Do nothing
}

bool Knight::IsDefeated()
{
	if (GetHealth() <= 0)
	{
		//cout << "GAME OVER!!! Merlin won!" << endl;
		return true;
	}
	else
		return false;
}
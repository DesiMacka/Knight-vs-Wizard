//3/May/2017
//Hello human!
//This code uses encapsulation, inheritance and polymorphism
//to play out a "skills competition" between a wizard and a knight 
//Written by Desi, CIS 2542-001, Homework(5).

#include <iostream>
#include "Character.h"
#include "Knight.h"
#include "Wizard.h"

using namespace std;

int main()
{

	cout << "LET THE GAMES BEGIN!!!" << endl;

	int count1 = 0, count2 = 0;

	for (int i = 0; i < 10000; ++i)
	{
		Character *p[] =
		{
			//the Knight wins more often of a ratio 7:3
			//balance gets close if attack strength and defense
			//is increased by a value of 1 for the Wizard

			//new Wizard("Merlin", 4, 18, 6, 10),
			new Wizard("Merlin", 3, 18, 5, 10),
			new Knight("King Arthur", 6, 20, 4),
		};

		int att1, att2, def1, def2;

		while (!p[0]->IsDefeated() && !p[1]->IsDefeated())
		{
			att1 = p[0]->Attack();
			att2 = p[1]->Attack();
			def1 = p[0]->Defense();
			def2 = p[1]->Defense();


			if (att2 > def1)
			{
				p[0]->SetHealth(p[0]->GetHealth() - abs(att2 - def1));
			}
			if (att1 > def2)
			{
				p[1]->SetHealth(p[1]->GetHealth() - abs(att1 - def2));
			}
		}

		if (p[0]->IsDefeated())
		{
			count2++;
		}
		else
		{
			count1++;
		}

		delete p[0];
		delete p[1];
	}


	cout << "King Arthur won " << count2 << " times." << endl;
	cout << "Merlin won " << count1 << " times." << endl;

	system("pause");
	return 0;
}

/* 
 * File:   CrazyRandomSword.cpp
 * Author: Mohammed <mmn17@my.fsu.edu>
 * 
 * Created on Febuary 2, 2017, 4:20 PM
 */

#include <cmath>
#include <ctime>
#include <cstdlib>
#include "CrazyRandomSword.h"

CrazyRandomSword::CrazyRandomSword(): Weapon("Crazy Random Sword",0)
{
	srand(time(0));
	hitPoints = rand()%93+7;
}

double CrazyRandomSword::hit(double armor)
{
	srand(time(0));
	armor -= (rand() % static_cast<int>(armor / 3 - 2) + 2);
	return hitPoints-armor;
}
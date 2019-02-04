/* 
 * File:   SimpleHammer.cpp
 * Author: Mohammed <mmn17@my.fsu.edu>
 * 
 * Created on Febuary 2, 2019
 */
#include <string>
#include "SimpleHammer.h"

double SimpleHammer::hit(double armor)
{
	double damage = hitPoints;
	if (armor >= 30){
		damage -= armor;
    }
	if (damage < 0){ 
		return 0;
    }
	return damage;
}


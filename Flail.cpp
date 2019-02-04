/* 
 * File:   Flail.cpp
 * Author: Mohammed <mmn17@my.fsu.edu>
 * 
 * Created on Febuary 2, 2019
 */

#include <string>
#include "Flail.h"

double Flail::hit(double armor)
{
	double damage = hitPoints;
	if (armor > 20){
		damage -= armor * damage/100;
    }
	return damage;
}

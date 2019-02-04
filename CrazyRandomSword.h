/* 
 * File:   CrazyRandomSword.h
 * Author: Mohammed <mmn17@my.fsu.edu>
 * 
 * Created on Febuary 2, 2017, 4:20 PM
 */

#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazzRandomSword: public Weapon{
    public:
        CrazzRandomSword() : Weapon("Crazz Random Sword",//generater random//) {}

        virtual ~CrazzRandomSword() {};

        virtual double hit(double armor);
};





#endif /* CRAZYRANDOMSWORD_H */
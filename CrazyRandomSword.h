/* 
 * File:   CrazyRandomSword.h
 * Author: Mohammed <mmn17@my.fsu.edu>
 * 
 * Created on Febuary 2, 2019
 */

#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon{
    public:
        CrazyRandomSword();

        double hit(double armor);
};


#endif /* CRAZYRANDOMSWORD_H */

/* 
 * File:   SimpleHammer.h
 * Author: Mohammed <mmn17@my.fsu.edu>
 * 
 * Created on Febuary 2, 2017
 */

#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

    class Flail: public Weapon{
        public:
            SimpleHammer(): Weapon("Simple Hammer",25){}

            double hit(double armor);
    };

#endif /* SIMPLEHAMMER_H */


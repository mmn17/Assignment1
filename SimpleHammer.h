/* 
 * File:   SimpleHammer.h
 * Author: Mohammed <mmn17@my.fsu.edu>
 * 
 * Created on Febuary 2, 2017, 4:20 PM
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

    class Flail: public Weapon{
        public:
            SimpleHammer(): Weapon("Simple Hammer",25){}

            virtual ~SimpleHammer(){}

            virtual double hit(double armor);
    };

#endif /* SIMPLEHAMMER_H */


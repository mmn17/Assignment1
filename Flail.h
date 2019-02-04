/* 
 * File:   Flail.h
 * Author: Mohammed <mmn17@my.fsu.edu>
 * 
 * Created on Febuary 2, 2019
 */

#include <string>
#include "Weapon.h"

#ifndef FLAIL_H
#define FLAIL_H

    class Flail: public Weapon{
        public:
            Flail(): Weapon("Flail",60){}

            double hit(double armor);
    };

#endif /* FLAIL_H */

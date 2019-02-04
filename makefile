main:   main.o Flail.o CrazyRandomSword.o SimpleHammer.o Weapon.o WeaponFactory.o CommonSword.o CommonSpear.o
	g++ main.o Flail.o CrazyRandomSword.o SimpleHammer.o Weapon.o WeaponFactory.o CommonSword.o CommonSpear.o -o main

main.o: main.cpp Weapon.h WeaponFactory.h
	g++ -c main.cpp

Flail.o:	Flail.cpp Flail.h Weapon.h 
	g++ -c Flail.cpp

Weapon.o:	Weapon.cpp Weapon.h 
	g++ -c Weapon.cpp

CrazyRandomSword.o:	CrazyRandomSword.cpp CrazyRandomSword.h Weapon.h
	g++ -c CrazyRandomSword.cpp

WeaponFactor.o:	WeaponFactory.cpp WeaponFactor.h Weapon.h 
	g++ -c WeaponFactor.cpp

SimpleHammer.o: SimpleHammer.cpp SimpleHammer.h Weapon.h 
	g++ -c SimpleHammer.cpp 

CommonSword.o:	CommonSword.cpp CommonSword.h Weapon.h 
	g++ -c CommonSword.cpp 

CommonSpear.o:	CommonSpear.cpp CommonSpear.h Weapon.h 
	g++ -c CommonSpear.cpp 

clean:
	rm --force *.o menu

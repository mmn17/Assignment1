menu:   main.o Flail.o CrazyRandomSword.o SimpleHammer.o Weapon.o WeaponFactor.o CommonSword.o CommonSpear.o
	g++ main.o Flail.o CrazyRandomSword.o SimpleHammer.o Weapon.o WeaponFactor.o CommonSword.o CommonSpear.o -o menu

main.o: Weapon.h WeaponFactor.h
	g++ -c main.cpp


Flail.o:	Flail.h Weapon.h 
	g++ -c Flail.cpp
Weapon.o:	Weapon.h 
	g++ -c Weapon.cpp
CrazyRandomSword.o:	CrazyRandomSword.h Weapon.h
	g++ -c CrazyRandomSword.cpp
WeaponFactor.o:	WeaponFactor.h Weapon.h 
	g++ -c WeaponFactor.cpp
SimpleHammer.o: SimpleHammer.h Weapon.h 
	g++ -c SimpleHammer.cpp 
CommonSword.o:	CommonSword.h Weapon.h 
	g++ -c CommonSword.cpp 
CommonSpear.o:	CommonSpear.h Weapon.h 
	g++ -c CommonSpear.cpp 

clean:
	rm --force *.o menu
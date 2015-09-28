#ifndef ANIMALIA_H
#define ANIMALIA_H
#include <string>
using namespace std;


/*
The classes Animal and Mammal have already been made for you by another team. Your mission, should you choose to
accept it, is to extend Animal meaningfully by creating another subtype in addition to Mammal, one of them mythological.

When you're done with that, go another round by extending Mammal to include two other mammals, one of them human and the
other non-human.

Human should have powers of speech and thought, represented by class methods that do something entertaining.

Humans must think before speaking, but do not have to think very well, depending on the type of human you are trying
to simulate.

Your non-human type can have powers of speech, but do not have to have powers of thought.

Kudos, and possibly more, for entertaining Matt.
*/

enum Sex {MALE, FEMALE, HERM};
enum HairType {BALD, NORMAL, EXTREME};
enum HoardType {GOLD, PRINCESSES, TOASTERS};
enum ElementType {FIRE, WATER, ICE};

class Animal
{
private:
	Sex sex;
	int birthYear;
public:
	Animal(Sex s, int year) : sex(s), birthYear(year) { }
	int Age(int);
};

class Mammal : public Animal
{
private:
	HairType hair;
public:
	Mammal(Sex s, int year) : Animal(s,year), hair(NORMAL) { } // Default hairtype is normal
	Mammal(Sex s, int year, HairType h) : Animal(s,year), hair(h) { } // Otherwise, let them set the hairtype
	int Speek();
};

class Dragon : public Animal
{
private:
	bool canFly;
	HoardType hoard;
	ElementType breath;
public:
	Dragon(Sex s, int year) : Animal(s, year), canFly(true), hoard(PRINCESSES), breath(FIRE) {} //default is princess-stealing flying fire-breathing dragon
	Dragon(Sex s, int year, bool flight, HoardType h, ElementType e) : Animal(s, year), canFly(flight), hoard(h), breath(e) {}
};

class Human : public Mammal
{
private:
	string name;
public:
	Human(Sex s, int year) : Mammal(s, year, BALD) {}//humans are pretty much bald, usually
	string introduce();
};

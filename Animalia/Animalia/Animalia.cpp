#include "Animalia.h"
#include<iostream>

int Mammal::Speek()
{
	std::cout << "...melifluous noise...";
	return 0;
}

int Animal::Age(int curYear)
{
	//curYear - birthYear == age
	return curYear - birthYear;
}

void Human :: introduce() {
	cout << "Hello, my name is " + name + ". ";
}
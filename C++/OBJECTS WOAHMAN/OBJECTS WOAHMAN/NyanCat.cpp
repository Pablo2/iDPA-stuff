#include "NyanCat.h"

#include <iostream>
NyanCat::NyanCat(void)
{ 
	color = 0;
	nyanCount = 0;
	dimensions = 1.5;
	name = "Ronald the Nyan Cat ";
	hasLazers = true;
	isRainbow = true;

}


NyanCat::~NyanCat(void)
{
	nyanCount = 0;
	cout << name << "ran into a meteor." << endl;
}

void NyanCat::fly()
{
	cout << name << "is flying!" << endl;
}

void NyanCat::nyan()
{
	cout << "Nyan" << endl;
	nyanCount++;
}

void NyanCat::move(int direction)
{
	cout << name << "flew in a circle" << endl;
}
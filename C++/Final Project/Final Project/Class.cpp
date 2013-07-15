#include "Class.h"

#include <iostream>

char a;
char s;
char d;
char w;

Class::Class(void)
{
	name = "Bob";
	dimensions =
	InteractWithObjects = true;
	color = 0;

}
void Class::move(int direction)
{
	cout << name << " moved." << endl;
}


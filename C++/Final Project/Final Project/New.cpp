#include <iostream>
#include <string>
#include "Class.h"
using namespace std;

void  testClass()
{
	Class* whatever = new Class();
	whatever-> interactWithObjects = true;
	(*whatever) .interactWithObjects = true;

	whatever->move();


}
void main()
{
	char w;
	char a;
	char s;
	char d;






	system("pause");
}
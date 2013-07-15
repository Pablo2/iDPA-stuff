#pragma once
#include<string>

using namespace std;

class Class
{
public:
	Class(void);
	~Class(void);
	
	int color;
	double dimensions;
	string name;
	bool interactWithObjects();


	void move(int direction)
};


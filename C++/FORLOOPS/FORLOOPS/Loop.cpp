#include <iostream>
#include <string>

using namespace std;



void main()
{
	for(int i = 0; i< 99; i = i++)
	{
		
		if (i%3==0)
				{
					cout << ("Fizz");
				}
		
		if(i%5==0)
				{
					cout << ("Buzz");
				}
		
	cout << i << endl; }
	
	
	system("pause");
}
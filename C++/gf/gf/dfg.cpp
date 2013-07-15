#include<iostream>
#include<string>

using namespace std;

void main()
{
    cout << "Enter number:" << endl;
    int d;
    cin >> d;

	while(d!=1)
	{
		if(d % 2 == 0)
			d = d/2;
	
		else if (d % 2 == 1) 
		{
			d = 3*d + 1;
		}
	
		cout << d << endl;
	}
	
	
	system("pause");
}
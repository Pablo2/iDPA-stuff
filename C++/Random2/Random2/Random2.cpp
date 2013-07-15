#include <stdlib.h> 
#include <time.h>    
#include <iostream>
#include <string>

using namespace std;

void main()
{
    long secs = time(NULL); 
    srand (secs);      
	for(;;)
	cout << rand();
	system("pause");
}
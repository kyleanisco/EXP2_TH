#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
    int n = 22, first = 0, second = 1, nextTerm = 0;


    cout << "Fibonacci Series:\n";

    for (int i = 1; i <= n; ++i)
    {
    
        if(i == 1)
        {
            cout << " " << first << " , ";
            continue;
        }
        if(i == 2)
        {
            cout << second <<" , ";
            continue;
        }
        nextTerm = first + second;
        first = second;
        second = nextTerm;
        
        
        
        if (nextTerm==10946)
        {
        	cout << nextTerm << " ";
			break;
		} 
		else
		{
			cout << nextTerm << " , ";
		}
		
	}
	getch();
	return 0;
}





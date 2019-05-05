#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

    int main()
  	{
  		int counter;
  		int i; 
  		counter=1;
  		
  		for (i=1; i<=10; i++)
  		{
  			cout << i << " , ";
  			counter ++;
		}
		
		for (counter=12; counter <=30; )
  		{
  			if (counter==30)
  			{
			cout << counter << " ";
			break;
		}
		else
		{
			cout << counter << " , ";
  			counter +=2;
		}
		}
  		
		getch ();
		return 0;  		
	}

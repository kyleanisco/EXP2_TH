#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

    int main()
    {
    
    	char package;
    	int hours;
    
    cout << "The following subscription packages for Internet access are available for purchase:\n";
    cout << "=====================================================================================\n";
    cout << "Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr.\n";
    cout << "Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr.\n";
    cout << "Package C: For P1995/mo of unlimited access is provided.\n";
    cout << "=====================================================================================\n";
	cout << "Enter the package purchased:\n";
	cin >> package;
	   cout << "=====================================================================================\n";
	cout << "Enter the number of hours used:\n";
	cin >> hours;
	   cout << "=====================================================================================\n";	

	if(package == 'A' || package == 'a')
	{if (hours <= 10)
	cout<<"\nYour monthly fee is: P995";
	else cout<<"\nYour monthly fee is: P"<<995+(hours-10)*20;}

	if(package == 'B' || package == 'b')
	{if (hours <= 20)
	cout<<"\nYour monthly fee is: P1495";
	else cout<<"\nYour monthly fee is: P"<<1495 +(hours - 20)*10;}

	if(package == 'C' || package == 'c')
	cout<<"\nYour monthly fee is: P1995";	
        getch();
        return 0;
    }


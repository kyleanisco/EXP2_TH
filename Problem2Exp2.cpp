#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
   {

  int previous;                
  int current;       
  int demand=35;        
  double charge_per_gallon=1.10;       
  int latecharge=20;         
  int gallons;          
  double bill;          
  char unpaid_balance;  
  char y;      
  cout<<endl<<"Enter Previous Meter Reading: ";
  cin>>previous;      
  cout<<endl<<"Enter Current Meter Reading: ";
  cin>>current;       
  cout<<endl<<"Did Customer Pay The Previous Bill? (Press 1 for Yes and 0 for No): ";
  cin>>unpaid_balance;        
  gallons=current-previous;
  if (unpaid_balance== '1')       
  {
   bill=(charge_per_gallon*gallons)+demand;
  }
  else
  {
   bill=(charge_per_gallon*gallons)+demand+latecharge; 
  }
  cout<<endl<<"=============================================================="<<endl;
  cout<<endl<<"Water Bill = "<<bill<<" php"<<endl;    
 
getch();
return 0;
}



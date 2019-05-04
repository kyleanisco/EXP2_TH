#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main(){
   int n, sum=0;
   do{
   
   cout<<"Enter a number: "; 
   cin>>n;

  if(n<=0){
      cout<<"Thank you.";
   }
   else{
    
     int i=1;
     while(i<=n){
	 sum=sum+i;
	 i++;
     }
     cout<<"The sum of all whole numbers from 1 to "<< n << " is "<<sum<< ". \n";
   }
   sum=0;
} while (n!=0);  
 getch();
    return 0;

}




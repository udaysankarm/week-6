#include<iostream>
using namespace std;
int main()
{
 
  int i,j;
  for(i=0;i<5;i++) //main loop
     {
        cout<<"\n"; //jumping to next line
      
	for(j=0;j<(5-i);j++)//loop for printing each row
	 {
           cout<<" ";


	 }
         for(j=0;j<(5);j++)//loop for printing each row
	 {
           cout<<"*";


	 }


     }

 return 0;
}

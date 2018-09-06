#include<iostream>
using namespace std;
int main()
{
 
  int i,j; //declatration of variable to control loop 
  for(i=0;i<5;i++) //main for loop
     {  
        cout<<"\n"; //jumping to next line
	for(j=0;j<5-i;j++)
        cout<<" ";
        if((i>0)&&(i<4))  //condition to differtiate  2nd 3rd and 4th row
	cout<<"*   *";   //output for 2nd 3rd and 4th row

	else
	 {
	  for(j=0;j<5;j++) //loop for printing each star
	    {

            cout<<"*"; //printing each star

	    }
	 }
     }
 cout<<endl; 
 return 0;
}


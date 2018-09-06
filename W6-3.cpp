#include<iostream>
using namespace std;
int main()
{
 
  int i,j;
  for(i=1;i<6;i++) //main loop
     {
        cout<<"\n"; //jumping to next line
         //differtiate between different rows
         if(i==1||i==5) // condition if it is 1st or 5th row
          {
 	   for(j=1;j<6;j++) //loop to print 5 stars
	   cout<<"*";
	  }
          else if(i==2||i==4) //condition to check whether the row is 2nd or 4th  
          {
 	   for(j=1;j<6;j++)//loop to print the stars
            if(j==1||j==2||j==4||j==5)//checking the row in which the star is to be printed
	     cout<<"*";          //printing at 1st, 2nd , 4th and 5th position 
	    else
             cout<<" ";          //leaving a blank space
            
	  }
	  else                 //condition to identify 3rd row
	   for(j=1;j<6;j++)   //loop to print stars
	    {
             if(j==1||j==3||j==5) //checking the position for ist 3rd and 5th position
             cout<<"*";           //printing at the  ist 3rd and 5th position
             else 
             cout<<" "; //printing blank at 2nd and 4th place
	    }
      

     }

 return 0;
}

/* program to determine if no is even or not*/
#include<iostream>
using namespace std;

int main()
{       //declare the variables 
	int x,y ;
	//ask user about the variable to be analysed
	cout<<"enter  no. "<< endl;
	cin>> x ;
	//define a function
	y = x %2 ;
	//condition starts
	if(y==0 ) 
		{
		cout<< x <<" is even"<< endl;
		}
	else   {
	     cout<< x <<" is odd"<< endl;
		}
	//condition ends	
return 0;
}	
	   

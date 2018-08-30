/*program to determine if no is positive,negative or zero  */
#include<iostream>
using namespace std;

int main()
{       //declare the variables 
	int x ;
	//ask user about the variable to be analysed
	cout<<"enter  no. "<< endl;
	cin>> x ;
	//condition starts
	if(x<0)
		{
		cout<< x <<" is negative"<< endl;
		}
	else if(x>0)
		{
		cout <<x <<" is positive" << endl;
		}
	else{ 
		cout << x << " is zero" << endl;}
	//condition ends 
	return 0;
}

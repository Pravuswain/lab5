/*program to print all natural no. in decreasing order*/
#include<iostream>
using namespace std;

int main()
{	int  n ;
	cout<< " enter the starting no " << endl;
	cin>> n ;
	
	//loop begins
	while(n>0)
	{ 	
	 cout<< n<< ","; 
	--n; 
	}
	//to break the loop
	return 0 ;
}	

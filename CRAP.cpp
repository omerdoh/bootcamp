#include <iostream>
using namespace std;

int main()
{
	cout << "hello world"<<endl ;
	
	
	int b = 0;
	for (int a = 1; a<=1000; a=a+1) 
	{
		b = b + a; 
	}
	cout << b << endl;


	int c = 0 ;
	for (int d = 1; d <= 1000; d=d+1)
	{ 
		c = c + 4*((-1)^(d+1))/((2*d)-1); 
	}
	cout << "Estimated value for pi is " << c << endl;



















}




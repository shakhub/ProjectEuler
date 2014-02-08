#include"header.h"

/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/
void prob7()
{
	int count = 0;
	unsigned long long x =1;

	while(count!=10000)//ending with 10000 because my prime function doesnt include 2 as prime
	{
		x=x+2;
		if(prime(x))
			count++;
		
	}
	cout<<"10001st prime is" << x<<endl;
	cin.get();
}
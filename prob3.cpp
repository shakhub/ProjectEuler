#include"header.h"

/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

bool prime(unsigned long long x)
{
	/*
	INPUT : x (input the number to check if prime or not)
	OUPUT : returns true/false 
	*/
	unsigned long long i;
	bool value = true;
	for(i=3;i<(x/2);i=i+2)
	{
		if(x%i==0)
		{
			value = false;
			break;
		}
	}
	return value;
}

void prob3()
{
		//to find the largest prime factor of a number
	
	unsigned long long num = 600851475143;
	unsigned long long i=0;
	unsigned long long factor=0;
	unsigned long long smallFactor =0;

	for(i=3;i<(num/2);i=i+2)
	{
		if(num%i==0)
		{
			smallFactor = i;
			if(prime(i))
			{
				factor = i;
			}
		}
	}

	cout<<factor<<endl;
	cin.get();
	
}
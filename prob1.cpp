#include"header.h"
/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/
void prob1()
{
		//code to find the sum the numbers that are divisible by a and b below n
	//Eg : find the sum of all the numbers that are divisible by 3 and 5 below 1000. (not exclude the intersections)
	
	unsigned long n = 1000;
	unsigned long count;
	unsigned long a =3;
	unsigned long b =5;
	unsigned long c,d;
	unsigned long sum =0;
	c = MIN(a,b);
	d = MAX(a,b);
	cout<<c<<"min"<<endl;
	cout<<d<<"max"<<endl;
	for(count=c;count<n;count++)
	{
		if(count%c == 0)
		{
			sum+=count;
		}
		if(count>=d)
		{
			if(count%c!=0 && count%d == 0)
			{
				sum+=count;
			}
		}

	}

	cout<<sum<<endl;
	cin.get();
	
}

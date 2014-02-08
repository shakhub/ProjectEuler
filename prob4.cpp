#include"header.h"
/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

bool palindrome(int i)
{
	int x[6]={0};
	int j=0,count=0,count1=0;
		while(i>0)
		{
			x[count] = i%10;
			i = i/10;
			count++;
		}

	if(count%2==0)
		count1=count/2;
	else
		count1=(count-1)/2;
	int countFlag=0;
	for(j=0;j<count1;j++)
	{		
		if(x[j]!=x[count-j-1])
			return false;
	}
	return true;

}

bool palin(int i)
{
	int x[15]={0};
	int count=0;
	int count1=0;

	while(i>0)
	{
		x[count]=i%10;
		i=i/10;
		count++;
	}

	if(x[0]==x[count-1])
	{
		if(count%2==0)
			count1=count/2;
		else
			count1=(count-1)/2;
		
		for(int j=0;j<count1;j++)
		{
			if(x[j]!=x[count-j-1])
				return false;
		}
		return true;
	}
	return false;
}
void prob4()
{
		//To find largest palindrome using 2 three digit numbers
	
	int n=100;
	int n1=999*999;
	int max=0;
	int d[2] = {0};
	int cnt=0;
	int res1=0;
	int res2=0;

	while(n<n1)
	{
		d[0]=0;
		d[1]=0;
		if(palin(n))
		{
			cnt=0;
			for(int i=999;i>99;i--)
			{
				if(cnt==2)
					break;
				if(n%i == 0)
				{
					d[cnt]=i;
					cnt++;

				}
			}

			if(d[0]*d[1]==n)
			{
				if(n>max)
				{
					max=n;
					res1 = d[0];
					res2 = d[1];
				}
			}
		}
		n++;
	}
	cout<< max << " is the highest palindrome " <<endl;
	cin.get();
}
#include <stdio.h>

int gcd(int a, int b)
{
	int c = 0;
	if(a>b)
	{
		if((c=a%b)!=0)
		{
			gcd(b,c);
		}
		else
		{
			return b;
		}
	}
	else if(a<b)
	{
		gcd(b,a);
	}
	return 1;
}

int gcd2(int a, int b)
{
	int temp;
	while(b != 0)
	{
		temp = a%b;
		a = b;
		b = temp;
	}
	return a;
}

int gcd3(int a, int b)
{
	if(b != 0)
		gcd3(b, a%b);
	else
		return a;
}

int main()
{
	int a = 54;
	int b = 27;

	int value = gcd3(a,b);
	
	printf("relsult:[%d]\n",value);
	
	return 0;
}

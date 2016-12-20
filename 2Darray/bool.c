#include <stdio.h>

int main()
{
	if(0)
	{
		int a = 0x84;
		unsigned int b = 0x84000000;
		printf("a: 0x%x\n", a);
		printf("a': 0x%x\n", a>>1);
		printf("b: 0x%x\n", b);
		printf("b': 0x%x\n", b<<1);
	}
	
	if(0)
	{
		unsigned short a, b;
		short d, e;
		
		d = 0xff;
		e = -0xff;
		a = 0xaa;
		b = 0xa1;
		printf ("%x %x %x\n", d << 1, e << 1, e >> 1);
		//那麼 A & B 只有在兩者皆為 1 的時候才會 1，A | B 則是兩者有ㄧ者為1的時候就會1，
		//而A XOR B 是 A 與 B 不相等的時候為 1，NOT 則是單純地 0 變  1、1 變 0
		printf ("%x %x %x %x\n", a & b, a | b, a ^ b, ~a);
	}
	
	if(0)
	{
		int a = 0;
		
		if(a==0)
		{
			printf("a==0\n");
		}
		if(a=1)
		{
			printf("a==1\n");
		}
		printf("a==%d\n",a);
	}
	
	if(0)
	{
		int a=2, b=1, c;
		if ((a==2)||(c=b--)) {
			a++;
		}
		printf("a: %d\n", a);
	}
	
    return 0;
}

#include <stdio.h>

//global variable will initial to 0, put to .bss
static int var_a;
//put to .data
//static int var_a2 = 1;
int var_b;
int *var_p;
int main()
{
	//static int i = 0;

	//++i;
	//i++;
	//printf("%d\n",i);
	//i++;
	//++i;
	//printf("%d\n",i);
	//printf("================\n");

	int var_c;
	static int var_d;
	//Use "objdump -t a.out" to check
	printf("var_a:[%p]\n",&var_a);
	//printf("var_a2:[%p]\n",&var_a2);
	
	printf("var_b:[%p]\n",&var_b);
	printf("var_c:[%p]\n",&var_c);
	//it will put behind var_a , static variable will inital first .
	printf("var_d:[%p]\n",&var_d);
	
	/*
	var_a:[0x6009b4]
	var_b:[0x6009c0]
	var_c:[0x7ffff57bce0c]
	var_d:[0x6009b8]
	*/
	
	printf("p:[%p]\n",var_p);
	printf("p:[%s]\n",var_p);
	printf("*p:[%d]\n",*var_p);
	//sleep(1000);
	return 0;
}

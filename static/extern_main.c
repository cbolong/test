#include <stdio.h>

int main()
{
	
	//wrong , because need to initial first and assign value
	//extern double ex_i = 100;
	extern double ex_i ;
	printf("extern value:[%f]\n",ex_i);

	ex_i = 100;

	printf("extern value:[%f]\n",ex_i);

	return 0;
}

/*
gcc extern_main.c extern_par.c 
*/

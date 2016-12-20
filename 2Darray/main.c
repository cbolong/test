#include <stdio.h>

int main()
{
	if(0)
	{
		int arr[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
		printf("arr: %p\n", arr);
		printf("arr: %p\n", &arr);
		printf("arri+1: %p\n", *(arr+1));
		printf("*(*(arr+1)): %d\n", *(*(arr+1)));
		printf("*(*(arr+1)+1): %d\n", *(*(arr+1)+1));
		printf("(*(arr+1))[1]: %d\n", (*(arr+1))[1]);
    }
	if(0)
	{
		int array[5] = {0,1,2,3,4};
		int* i;
		
		i = array;
		printf("array: [%p]\n", array);
		printf("&array: [%p]\n", &array);
		printf("array: [%d]\n",array[2]);
		printf("i: [%d]\n",*(i+2));
		
	}
	if(1)
	{
		int a = 0x84;
		unsigned int b = 0x84000000;
		printf("a: 0x%x\n", a);
		printf("a': 0x%x\n", a>>1);
		printf("b: 0x%x\n", b);
		printf("b': 0x%x\n", b<<1);
	}
    return 0;
}

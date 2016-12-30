#include <stdio.h>
//https://goo.gl/DGpUXy
#define SUM(x,y) x+y
#define SUM2(x,y) (x+y)
/*int square(volatile int *var)
{
    int    local_var = *var;

    return local_var * local_var;
}*/

int square(volatile int *var)
{
    return *var **var;
}


int main(void)
{
    int    var = 5;
	
    printf("result: %d\n", square(&var));
	//2+3*5
	printf("SUM:[%d]\n",SUM(2,3)*5);
	printf("SUM2:[%d]\n",SUM2(2,3)*5);
    return 0;
}
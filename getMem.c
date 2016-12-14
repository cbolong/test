#include <stdio.h>
#include <stdlib.h>
#include <string.h>

getMen(char *str)
{
	str = (char*)malloc(100);
}

char* getMen2()
{
	char *str;
	str = (char*)malloc(100);
	return str;
}

int main()
{
	char *str = NULL;
	//getMen(str);
	str = getMen2();
	strcpy(str, "Hello world");
	printf("%s\n",str);

	return 0;
}

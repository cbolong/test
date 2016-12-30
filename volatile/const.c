#include <stdio.h>
#include<ctype.h>

const int a = 1;

void checkStr(char* str)
{
	printf("checkStr:[%s]\n",str);
	printf("checkStr:[%c]\n",*(str+2));
	printf("checkStr:[%c]\n",*(str+4));
}

//https://goo.gl/1UvyI
void toUp(const char* str)
{
	printf("Debug:[%s]\n",str);
	char *Source = (char *)str;
	while(*Source)
	{
		*Source = toupper(*Source);
		Source++;
	}
	printf("Debug:[%s]\n",str);
}

int main(void)
{
	//assignment of read-only variable
	//a = 2;
	//printf("%d\n",a);
    char str[] = "hello world";
	checkStr(str);
	printf("Before toUp:[%s]\n",str);
	toUp(str);
	printf("After toUp:[%s]\n",str);

    return 0;
}
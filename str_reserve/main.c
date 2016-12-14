#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "abcdefgh";
	char temp;
	int len = strlen(str)-1;
	int i = 0;
	printf("%s\n",str);
	printf("%d\n",len);

	for(i=0; i<=len/2; i++)
	{
		
		temp = str[i];
		str[i] = str[len-i];
		str[len-i] = temp;
	}
	printf("%s\n",str);
	
	return 0;
}

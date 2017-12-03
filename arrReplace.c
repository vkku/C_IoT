#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define LEN 100

void modifyArr(char* str)
{
	int i = 0;
	while(*str)
	{
		if( isalpha(*str) )
		{
			*str = toupper(*str);
		}
		else if(*str == ' ')
		{
			*str = '_';
		}
	 str++;
	}
}

int main()
{
	char *str;
	int i = 0;
	str = (char *)calloc(LEN, sizeof(char));
	printf("\nEnter String\n");
	fgets(str, 100, stdin);
	modifyArr(str);
	printf("\nMy percept -> %s \n", str);
	printf("\nArr located at : -> %p\n",str);
}



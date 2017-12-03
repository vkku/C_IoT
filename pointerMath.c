#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i = 0, length = 0;
	char *str = calloc(100, sizeof(char));
	printf("\nEnter String to observe Pointer Math\n");
	fgets(str, 100, stdin);
	length = strlen(str);
	for(i = 0 ; i < length ; i++)
	{
		//printf("%2c",*(str + i) );
		putchar( *(str + i) );
	}

	return 0;
}

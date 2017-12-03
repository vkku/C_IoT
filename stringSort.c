#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int compare(const void* a, const void* b)
{
	return ( *(char*)a -  *(char*)b );
}


int main()
{
	char str[100];
	int length;
	printf("\nEnter String\n");
	fgets(str, 100, stdin);
	printf("\nYou've Entered -> %s", str);
	length = strlen(str)/sizeof(char);
	qsort(str, length, sizeof(char), compare);
	printf("\nLook what you did to me -> %s\n", str);

}

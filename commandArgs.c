#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv)
{
 int noDec = 16;
 if(argc <= 0)
	exit(0);
 printf("\nThe count of Parameters is : %2d\n", argc);
 while(argc)
 {
	printf("\nArgument %2d : %s\n",argc--, argv[argc]);
 }
 printf("Float Casted Value : %.1f\n", (float)noDec);
 return 0;
}

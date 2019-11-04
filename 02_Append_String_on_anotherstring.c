#include<stdio.h>
#include<conio.h>
#include<string.h>



int main()
{
	char source[100];
	char destination[100]={"My name is "};
	
	printf("\nSource:%s",source);
	printf("\nDestination: %s",destination);
	
	printf("\nEnter you name\n");
	gets(source);
	int i=0;
	while(destination[i]!='\0')
	{
		i++;
	}
	int j=0;
	while(source[j]!='\0')
	{
		destination[i] = source[j];
		i++;
		j++;
	}
	destination[i]='\0';
	printf("\nEntered Name:%s",source);
	printf("\nUpper case converted: %s",destination);
	
	return 0;
}

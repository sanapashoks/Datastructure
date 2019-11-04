#include<stdio.h>
#include<conio.h>
#include<string.h>



int main()
{
	char name[100];
	char upper[100];
	printf("Enter you name\n");
	gets(name);
	int i=0;
	while(name[i]!='\0')
	{
		if((name[i]>='a') && (name[i]<='z'))
		{
			upper[i]  =name[i] - 32;
		}
		else
		{
			upper[i] = name[i];
		}
		i++;
	}
	upper[i]='\0';
	printf("\nEntered Name:%s",name);
	printf("\nUpper case converted: %s",upper);
	
	return 0;
}

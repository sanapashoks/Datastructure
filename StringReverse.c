#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(int argc, char* argv[])
{
	char string[20];
	printf("Enter string:\n");
	gets(string);
	int size;
	size = strlen(string);
	
	printf("Size: %d\n",size);
	
	if(size<=20)
	{
		size--;
		int i=0;
		// with extra variable
//		for(i=0;i<=size/2;i++)
//		{
//			printf("Before, iteration%d\n",i);
//			printf("String[%d]=%c |",i,string[i]);
//			printf("String[%d]=%c\n",i,string[size-i]);
//			char temp = string[i];
//			string[i] = string[size-i];
//			string[size-i]=temp;
//			
//			printf("After, iteration%d\n",i);
//			printf("String[%d]=%c |",i,string[i]);
//			printf("String[%d]=%c\n",i,string[size-i]);
//		}

	// without extra variable
	for(i=0;i<size/2;i++)
	{
		printf("Before, iteration%d\n",i);
			printf("String[%d]=%c |",i,string[i]);
			printf("String[%d]=%c\n",i,string[size-i]);
			string[i]= string[i] + string[size-i];
			string[size-i] = string[i] - string[size-i];
			
			string[i] = string[i] - string[size-i];
			printf("After, iteration%d\n",i);
			printf("String[%d]=%c |",i,string[i]);
			printf("String[%d]=%c\n",i,string[size-i]);
	}
		printf("Altered string: %s",string);
	}
	else
	{
		printf("Allocated size not suffucient\n");
	}
	return 0;
}

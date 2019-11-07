#include<stdio.h>

//char arr[25]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y'};
char arr[25]={'A','B','C','D','E','F','G','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char refarr[26];
int main()
{
	char ch;
	int i;

	//------------------------------------------------------	
	for(ch='A';ch<='Z';ch++)
	{
		refarr[ch-65]=ch;
	}
	for(i=0;i<(sizeof(refarr)/sizeof(char));i++)
	{
		printf("RefArr Data%d:%c\n",i,refarr[i]);
	}
	//-----------------------------------------------------
	printf("----Search in Array----\n");
	char ch1=0;
	for(ch=0;ch<25;ch++)
	{
		if(arr[ch]!=refarr[ch1])
		{
			printf("Missing:%c\n",refarr[ch1]);
			ch1++;
		}
//		printf("\nch index:%d, ch1 index: %d\n",ch,ch1);
		ch1++;
	}
	if(ch==ch1)
	{
		printf("Missing:%c\n",refarr[ch1]);
	}
	printf("ch index:%d, ch1 index: %d",ch,ch1);
	printf("\n----END----");
	return 0;
}

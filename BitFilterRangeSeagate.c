#include<stdio.h>



int main()
{
	int num1,M,L;
	int val1;
	int i,mask=0;
	
	printf("Enter Number\n");
	scanf("%d",&val1);
	printf("Enter MSB Bit number\n");
	scanf("%d",&M);
	printf("LSB Bit number\n");
	scanf("%d",&L);

	for(i=L;i<=M;i++)
	{
		mask|=(0x01<<i);
	}
	printf("Mask: 0x%X\n",mask);

	
	int val2=0;
	
	val2|=(val1&mask);
	printf("0x%X\n",val1);
	printf("0x%X\n",val2);
	
	return 0;
}

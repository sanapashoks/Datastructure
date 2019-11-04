#include<stdio.h>

#define MERGE(A,B)	(B##A)	

int main()
{
	printf("%d\n\n",MERGE(12,23));
	int a,b,x,y;
	a=11;
	b=22;
	x=1;
	y=(x!=0)?b:a;
	printf("%d",y);
	return 0;
	
}

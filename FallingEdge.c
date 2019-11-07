#include<stdio.h>




int main()
{
	int i,value, pvalue,tmp=0;
	while(1)
	{
		printf("Enter number\n");
		scanf("%d",&value);
//		cout<<(sizeof(value)*8)<<endl;
		for(i=0;i<=(sizeof(value)*8)-1;i++)
		{
//			cout<<"stage1"<<endl;
			if(pvalue & (0x0001<<i))
			{
				if((pvalue&(0x0001<<i)) ^(value&(0x0001<<i)))
				{
					printf("Falling\n");
					printf("i: %d\n",i);
					printf("tmp: 0x%X\n",tmp|=(0x01<<i));
				}
			}
		}
		pvalue = value;
	}
}

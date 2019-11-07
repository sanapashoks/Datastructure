#include<iostream>

using namespace std;
char arr[25];
int main()
{
	char ch;
	int i=-1;
	//sort array before process
	int arr[]={-1,1,3,4,5,7,8,9,10,11,13,14,15};
	printf("array size:%d\n", sizeof(arr)/sizeof(int));

	int j=arr[0];
	for(i=0;i<arr[(sizeof(arr)/sizeof(int))-1];i++)
	{
		if(arr[i]!=j)
		{
			printf("missing:%d\n",j);
			j++;
		}
		j++;
	}
	
	
	
	return 0;
}

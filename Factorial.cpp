#include<iostream>

using namespace std;

int factorial(int val)
{
	if(val == 1)
	{
		return val;
	}
	val*=factorial(val-1);
	
	return val;
}

int main()
{
	int num, result=1;
	cout<<"Enter Number"<<endl;
	cin>>num;
	//num = factorial(num);
//	cout<<"Factorial:"<<num<<endl;
	while(num!=1)
	{
		result *= num;
		num = num-1;
	}
	cout<<"Factorial:"<<result<<endl;
	return 0;
	
}

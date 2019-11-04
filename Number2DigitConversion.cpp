#include<iostream>


int main(int argc, char* argv[])
{
	int value;
	int digit[4];
	std::cout <<"enter any number"<<std::endl;
	std::cin>>value;
	int i=3;
	while(value!=0)
	{
		std::cout<<"Value at"<<i<<" "<<value<<std::endl;
		digit[i] = value%10;
		value = value/10;
		i--;
	}
	for(i=0;i<4;i++)
	std::cout<<"Digit["<<i<<"]: "<<digit[i]<<std::endl;
	
	return 0;
}

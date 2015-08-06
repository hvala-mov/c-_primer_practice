#include<iostream>
int main (void){
	int num_1,num_2,temp;
	std::cout<<"Please input two numbers:";
	std::cin>>num_1>>num_2;
	while(num_1>num_2){
		std::cout<<"Input error,try again:";
		std::cin>>num_1>>num_2;
	}
	temp=num_1;
	while(temp<=num_2){
		std::cout<<temp++<<std::endl;
	}
	return 0;
}

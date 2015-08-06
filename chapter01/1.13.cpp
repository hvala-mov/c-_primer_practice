#include<iostream>
int main (void){
	int sum = 0;
	for(int num = 50;num <= 100;++num){
		sum+=num;
	}
	std::cout<<sum<<std::endl;
	for(int i = 10;i >= 0;--i){
		std::cout<<i<<std::endl;
	}
	std::cout<<"please input two number:";
	int num_1,num_2;
	std::cin>>num_1>>num_2;
	while(num_1>num_2){
		std::cout<<"input error,try again:";
		std::cin>>num_1>>num_2;
	}
	for(int temp = num_1;temp <= num_2;++temp){
		std::cout<<temp<<std::endl;
	}
	return 0;
}

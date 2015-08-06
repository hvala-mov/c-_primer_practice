#include<iostream>
int main (void){
	int temp,sum=0;
	while(std::cin>>temp){
		sum += temp;
	}
	std::cout<<sum<<std::endl;
	return 0;
}

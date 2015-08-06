#include<iostream>
int main (void){
	int num=50,sum=0;
	while(num<=100){
		sum+=num++;
	}
	std::cout<<sum<<" "<<num<<std::endl;
	return 0;
}

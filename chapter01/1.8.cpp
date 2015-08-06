#include<iostream>
int main (void){
	std::cout<<"/*"<<std::endl;
	std::cout<<"*/"<<std::endl;
	//std::/*"*/"*/<<endl;
	std::cout<</*"*/"/*"/*"*/;
	return 0;
}

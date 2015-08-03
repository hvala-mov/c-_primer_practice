#include<iostream>
int main (void){
    std::cout<<"please input two numbers:";
    int x,y;
    std::cin>>x>>y;
    std::cout<<x
        <<"+"
        <<y
        <<"="
        <<x+y
        <<std::endl;
    return 0;
}

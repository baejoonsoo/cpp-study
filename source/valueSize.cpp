#include <iostream>
#include <cstdio>

int main(){
    std::cout<<"short : "<<sizeof(short)<<std::endl;
    std::cout<<"int : "<<sizeof(int)<<std::endl;
    std::cout<<"long int : "<<sizeof(long int)<<std::endl;
    std::cout<<"long long int : "<<sizeof(long long int)<<std::endl;
    std::cout<<"char : "<<sizeof(char)<<std::endl;
    std::cout<<"float : "<<sizeof(float)<<std::endl;
    std::cout<<"double : "<<sizeof(double)<<std::endl;
    std::cout<<"long double : "<<sizeof(long double)<<std::endl;

    // short : 2
    // int : 4
    // long int : 8
    // long long int : 8
    // char : 1
    // float : 4
    // double : 8
    // long double : 16
}
#include <iostream>

int main(){
    //명시적 형변환
    //type의 변환을 명시적으로 type을 정해 변환한다.

    // static_cast<int>(value)
    int value1=65;
    std::cout<<"value1(65) -> "<<static_cast<char>(value1)<<std::endl;
    std::cout<<"66 -> "<<static_cast<char>(66)<<std::endl;

    std::cout<<"--------------------------------\n";

    int iValue{123};
    double dValue{1.234};

    std::cout<<"iValue(123) -> "<<static_cast<double>(iValue)<<std::endl;
    std::cout<<"dValue(1.234) -> "<<static_cast<int>(dValue)<<std::endl;

}
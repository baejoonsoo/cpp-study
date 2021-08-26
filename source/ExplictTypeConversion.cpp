#include <iostream>
using namespace std;

int main(){
    //명시적 형변환
    //type의 변환을 명시적으로 type을 정해 변환한다.

    // static_cast<int>(value)
    int value1=65;
    cout<<"value1(65) -> "<<static_cast<char>(value1)<<endl;
    cout<<"66 -> "<<static_cast<char>(66)<<endl;

    cout<<"--------------------------------\n";

    int iValue{123};
    double dValue{1.234};

    cout<<"iValue(123) -> "<<static_cast<double>(iValue)<<endl;
    cout<<"dValue(1.234) -> "<<static_cast<int>(dValue)<<endl;

}
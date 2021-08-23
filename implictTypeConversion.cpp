#include <iostream>

int main(){
    float fValue=1.23456f;
    double dValue=fValue;

    //numeric promotion 
    //숫자 승격은 항상 안전하며 더 넓은 메모리로 이동하기에 데이터 손실이 발생하지 않는다.

    std::cout<<"fValue : "<<fValue<<std::endl;
    std::cout<<"dValue : "<<dValue<<std::endl;

    std::cout<<"\n----------------------\n";

    int i=3000;
    char c=i;

    //numberic conversion
    //숫자 변환으로 인해 데이터가 손실되거나 그러지 않을 수도 있다.
    std::cout<<"c : "<<"\" "<<c<<" \""<<" = "<< static_cast<int>(c)<<std::endl;
}
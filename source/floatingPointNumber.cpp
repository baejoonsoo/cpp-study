#include <iostream> //input output 표준 입출력
#include <iomanip>  //입출력을 조작

int main()
{
    std::cout<<"1.0/3.0 = "<<1.0/3.0<<std::endl;

    std::cout<<std::setprecision(10)<<std::endl;
    std::cout<<"1) 1.0/3.0 = "<<1.0/3.0<<std::endl;
    std::cout<<"2) 1.0/3.0 = "<<1.0/3.0<<std::endl;

    std::cout<<"--------------------------------"<<std::endl;


    //값을 초기화 할 때 f를 붙이지 않을 시 doble로 간주된다.
    //변수 type을 따로 지정하지 않는 python 등과 같은 언어에서 특히 치명적
    float fValue{123456789.0f};
    double dValue{123456789.0};

    std::setprecision(9);
    std::cout<<"fValue = "<<fValue<<std::endl;
    std::cout<<"dValue = "<<dValue<<std::endl;

    /*<출력 내용>
      fValue = 123456792 (오차 출력)
      dValue = 123456789 (올바른 값)
    */

    // float는 정확성이 떨어지는 반면에 메모리를 비교적 적게 차지하며
    // double은 정확성이 상대적으로 높은 반면에 메모리를 float에 2배를 차지한다
}
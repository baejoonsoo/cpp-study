#include <iostream>

int main(){
    float fValue=1.23456f;
    double dValue=fValue;

    //numeric promotion 
    //숫자 승격은 항상 안전하며 더 넓은 메모리로 이동하기에 데이터 손실이 발생하지 않는다.

    std::cout<<"fValue : "<<fValue<<std::endl;
    std::cout<<"dValue : "<<dValue<<std::endl;

    std::cout<<"----------------------\n";

    int i=3000;
    char c=i;

    //numberic conversion
    //숫자 변환으로 인해 데이터가 손실되거나 그러지 않을 수도 있다.

    //범위가 충분히 크지 않은 자료형으로 변환하면 예기치 않는 결과가 발생한다.
    std::cout<<"c : "<<"\" "<<c<<" \""<<" = "<< static_cast<int>(c)<<std::endl;

    float f=3.14f;
    int num=f;

    //부동 소수점 숫자에서 정수로 변환하는 것은 분수 값을 모두 손실시킨다.
    std::cout<<"3.14 : "<<num<<std::endl;


    // 피연산자의 자료형이 int보다 작은 정수인 경우, int또는 unsigned int로 승격된다.
    // 피연산자의 자료형이 여전히 같지 않으면, 컴파일러는 가장 높은 우선순위 피연산자를 찾고 다른 피연산자를 암시적 형 변환을 통해 일치시킨다.
    
    
    
    // 피연산자의 우선순위는 다음과 같다.

    // 1. long double (highest)
    // 2. double
    // 3. float
    // 4. unsigned long long
    // 5. long long
    // 6. unsigned long
    // 7. long
    // 8. unsigned int
    // 9. int (lowest)
}
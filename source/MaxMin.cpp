#include <iostream>
#include <algorithm> //max, min 사용

// using namespace std;

int main(){

    //std::min(a,b)꼴로 a와 b 중 더 작은 값을 지닌 인자를 반환한다.
    // 문자의 경우 아스키코드가 더 작은 문자를 출력한다
    //a,b의 type은 같아야 한다
    std::cout<<"std::min(1,2) 입력"<<std::endl;
    std::cout << "출력 : "<<std::min(1,2)<<std::endl;

    int n1,n2;

    //변수의 계산 또한 가능하다 
    std::cout<<"숫자 2개 입력 : ";
    std::cin>>n1>>n2;
    std::cout<< std::min(n1,n2)<<std::endl;

    char c1,c2;

    // 문자형 변수의 계산 또한 가능하다
    std::cout<<"문자 2개 입력 : ";
    std::cin>>c1>>c2;
    std::cout<< std::min(c1,c2)<<std::endl;



}
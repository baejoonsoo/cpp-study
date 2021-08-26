#include <iostream>

void change_val(int& r){ 
    // 함수가 호출 됨과 동시에 r은 전달 받은 값을 참고하게 된다
    // Reference가 아닌 일반 변수를 전달하여도 문제가 없다
    r=12345;
    return;
}

int main(){
    // Reference
    // Reference는 pointer와 비슷한 기능을 한다고 볼 수 있다
    // Reference는 한 변수에 대한 참조값을 지닌다.

    int value=10;

    int& ref=value;
    // &를 통해 사용 가능하다
    // pointer와 다르게 반드시 누구의 참조값인지를 명시 해주어야 하며 수정이 불가능하다

    // Reference는 변경이 불가하기에 pointer에 비해 안전하며
    // 두 가지 모두 특정 문제를 풀 수 있다면 Reference를 사용하는 것이 더 안전하다


    std::cout<<"value : "<<value<<std::endl;
    std::cout<<"ref : "<<ref<<std::endl;

    //&ref=20 <- error // &value=20과 동일
    ref=30; //value=30과 동일
    std::cout<<"ref=30 : "<<ref<<std::endl;

    std::cout<<"--------------------------"<<std::endl;

    int value2=123;

    std::cout<<"value2-before : "<<value2<<std::endl; // change_val 호출 전
    change_val(value2);
    std::cout<<"value2-after : "<<value2<<std::endl; // change_val 호출 후
}
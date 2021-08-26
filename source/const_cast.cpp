#include <iostream>
using namespace std;

int main(){
    //명시적 형변환
    //type의 변환을 명시적으로 type을 정해 변환한다.

    // const_cast<>()
    // 다른 캐스트 연산자가 하는 형 변환은 불가능 하며 오직 상수성(const)를 제거하는 것만 사용가능
    //또한 다른 캐스트 연산자는 const_cast가 하는 상수성(const) 제거를 못함
    //함수 포인터에는 사용 불가능

    const char str[]="Cpp is programming language!!";
    const char* ptr=str;
    cout<<"before : "<<str<<endl;

    // ptr[0]="A;" //errror

    char *c=const_cast<char*>(str);
    c[1]=c[2]=' '; //const type이 수정 가능하게 된다

    cout<<"after : "<<str<<endl;

}
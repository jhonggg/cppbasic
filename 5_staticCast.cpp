/*
1. static_cast<type> : 가장 기본적인 캐스트 연산 방법
- compile 타임에 형변환에 대한 타입 오류 잡아줌
- 


2. dynamic_cast<type> : 객체지향 언어의 다형성을 이용하여 모호한 타입 캐스팅 오류를 막아줌
3. const_cast<type> : 자료형이 갖고 있는 상수 속성을 제거
4. reinterpret_cast<type> : 어떠한 포인터 타입끼리도 변환할 수 있게 도움
*/

#include <iostream>

using namespace std;

int main(){

    int x = 2;
    double y = 4.4;

    int i = static_cast<int>(y/x);
    int j = (int) y/x;
    double k = y / x;

    cout << "4.4 / 2 = (staic_cast<int>) " << i << endl;
    cout << "4.4 / 2 = (int) " << j << endl;
    cout << "4.4 / 2 = (none) " << k << endl;


    return 0;
}
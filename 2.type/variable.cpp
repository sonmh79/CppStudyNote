/*
변수란, 데이터를 저장하기 위해 프로그램에 할당받은 메모리 공간을 의미
변수는 데이터가 저장된 메모리 주소, 길이, 형태 등을 기억한다.

정수형 변수: char, int, long, long long
실수형 변수: float, double

변수 선언 방법 두 가지: 1. 선언 이후 나중에 변수 초기화 2. 선언과 동시에 초기화 하는 방법
선언하고자 하는 변수들의 타입이 같다면, 동시에 선언 가능.
*/
#include <iostream>

using namespace std;

int main()
{
    int num; // 1. 선언 이후 나중에 변수 초기화.

    num = 1;
    cout << "num: " << num << endl;

    int n1 = 1, n2 = 2; // 2. 선언과 동시에 초기화. + 동시 선언
    cout << "n1: " << n1 << ", n2: " << n2 << endl;

    return 0;
}

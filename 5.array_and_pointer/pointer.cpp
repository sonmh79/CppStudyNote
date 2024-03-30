/*
포인터란 ? - 메모리의 주소값을 저장하는 변수
주소값이란 데이터가 저장된 메모리의 시작 주소이다.
int형 데이터는 4byte를 차지하지만, 주소값은 시작주소 1byte만을 가진다.

&(주소 연산자): 주소 반환
*(참조 연산자): 주소에 저장된 값 반환
-> 곱셈 연산 뿐만 아니라 포인터 선언, 메모리 접근에도 사용된다.
*/

#include <iostream>

using namespace std;

int main() {
    int num = 1;
    int *p = &num;

    cout << "num 값: " << *p << endl;
    cout << "num 값의 시작 주소: " << p << endl;
}
/*
num 값: 1
num 값의 시작 주소: 0x16d18302c
*/
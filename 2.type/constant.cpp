/*
변수와 마찬가지로 데이터를 저장할 수 있는 메모리 공간을 의미하지만,
변수와 달리 프로그램이 실행되는 동안 메모리에 저장된 데이터를 변경할 수 없다.

표현 방식에 따라 리터럴(literal) 상수, 심볼릭(symbolic) 상수로 나뉜다.
리터럴 상수는 변수와 달리 이름을 갖고 있지 않다. 타입에 따라 다음과 같이 나뉜다.
정수형 리터럴 상수: 123, -456 (기본적으로 (signed) int형으로 저장됨, 접미사 u: unsigned int, l: (signed) long, ul: unsigned long, uLL: unsigned long long)
실수형 리터럴 상수: 3.14, -45.6 (기본적으로 double 타입으로 저장됨, 접미사 f: float, l: long double)
문자형 리터럴 상수: "a", "Z"

OS에 따라 데이터 크기가 달라질 수 있어 int32_t, int64_t와 같은 정확한 타입 사용이 필요

심볼릭 상수는 변수처럼 이름을 가지고 있다.
const 키워드를 사용하며 선언과 함께 초기화해야 한다.
심볼릭 상수 사용의 장점: 1. 명시적 타입 지정 2. 구조체와 같은 복잡한 사용자 정의 타입에도 사용 가능 3. 사용 범위 제한 가능(함수, 파일)
*/

#include <iostream>
#include <cstdint>

using namespace std;

int main()
{
     int num = 10;

     cout << dec; // 10진수 조정자 (기본)
     cout << "숫자 10을 " << "10진수로 표현하면 " << num << endl;

     cout << oct; // 8진수 조정자
     cout << "숫자 10을 " << "8진수로 표현하면 " << num << endl;

     cout << hex; // 16진수 조정자
     cout << "숫자 10을 " << "16진수로 표현하면 " << num << endl;

     cout << dec;
     long long_num = 2147483647;
     long long long_long_num = 9223372036854775807LL;

     cout << long_num << endl;
     cout << "long 타입의 크기: " << sizeof(long_num) << "byte" << endl; // 32bit -> 4byte, 64bit -> 8byte (Window에서는 4byte 고정)
     cout << "long long 타입의 크기: " << sizeof(long_long_num) << "byte" << endl;

     int32_t num_4byte = 1;
     cout << "int32_t 타입의 크기: " << sizeof(num_4byte) << "byte" << endl;

     const int symbolic_num = 1;
     // symbolic_num = 2; // 에러 !!
     cout << "symbolic 상수는 변경이 불가능합니다.";
     return 0;
}
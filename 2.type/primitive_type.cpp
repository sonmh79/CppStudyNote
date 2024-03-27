/*
C++에서 기본 타입은 크게 정수형, 실수형, 문자형, Bool형 으로 나뉜다.

[정수형 타입]
소수 부분이 없는 수.
unsigned 키워드를 추가하면 부호를 나타내는 MSB(Most Significant Bit)까지도 크기를 나타내는데 사용할 수 있다.
음의 정수를 표현할 수 없지만 0을 포함한 양의 정수를 두 배 많이 표현할 수 있다.
signed 키워드는 기본적으로 생략할 수 있다.
오버플로우를 조심하자.

[실수형 타입]
소수부나 지수가 있는 수.
컴퓨터는 실수를 완벽하게 표현할 수 없다.
float: 4byte, 지수(소수점의 위치)의 길이는 8bit, 가수(수의 숫자 부분)의 길이는 23bit, 소수 부분 6자리까지 정확하게 표현.
double: 8byte, 지수의 길이는 11bit, 가수의 길이는 52bit, 소수 부분 15자리까지 정확하게 표현.

[문자형 타입]
정수나 문자 하나를 표현할 수 있는 타입.
1byte, 아스키 코드를 사용해 표현.

[bool형 타입]
참, 거짓 하나의 값만 가진다.
0: false, 그 외: true

[auto 타입]
변수 선언 시, 초기값과 같은 타입으로 변수 선언 가능
*/
#include <iostream>

using namespace std;

int main() 
{
    int max_int = 2147483647;

    int overflow_int = max_int+1;

    cout << "오버플로우 인트에 저장된 값: " << overflow_int << endl;

    float float_pi = 3.1415926535897932;

    double double_pi = 3.1415926535897932;

    cout << float_pi << endl;

    cout << "float_pi: " << float_pi << " float는 소수 6자리까지 정확합니다." << endl;
    cout << "double_pi: " << double_pi << " double은 소수 15자리까지 정확합니다." << endl;

    auto auto_num = 1;
    cout << "auto_num의 크기: " << sizeof(auto_num) << "byte" << endl;
}

/*
오버플로우 인트에 저장된 값: -2147483648
3.14159
float_pi: 3.14159 float는 소수 6자리까지 정확합니다.
double_pi: 3.14159 double은 소수 15자리까지 정확합니다.
auto_num의 크기: 4byte
*/
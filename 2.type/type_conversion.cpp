/*
타입 변환은 하나의 타입을 다른 타입으로 바꾸는 행위이다.
C++ 에서 다른 타입끼리 연산은 피연산자들을 모두 같은 타입으로 만든 후 수행한다.

다음과 같은 경우에 자동으로 타입 변환을 수행한다.
1. 다른 타입끼리 대입, 산술 연산 시
2. 함수에 인수를 전달할 때

표현 범위가 좁은 타입에서 넓은 타입으로 변환은 문제 되지 않으나 
반대의 경우 데이터 손실이 발생한다.
*/

#include <iostream>

using namespace std;

int main() {

    int num1 = 3.14;
    cout << "num1에 저장된 값: " << num1 << endl;

    double num2 = 3.14f + 1;
    cout << "num2에 저장된 값: " << num2 << endl;

    int num3 = 1;
    int num4 = 2;
    
    double res1 = num3 / num4; // 잘못된 결과
    double res2 = (double) num3 / num4; // 하나의 값만 명시적으로 double로 형변환
    double res3 = double (num3) / num4; // C++ 만 가능한 명시적 형변환
    
    cout << "res1: " << res1 << endl;
    cout << "res2: " << res2 << endl;
    cout << "res3: " << res3 << endl;
}

/*
num1에 저장된 값: 3
num2에 저장된 값: 4.14
res1: 0
res2: 0.5
res3: 0.5
*/
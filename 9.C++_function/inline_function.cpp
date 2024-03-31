/*
C++에서 함수의 호출을 복잡한 과정을 거쳐 약간의 시간이 걸린다.
실행시간이 짧은 간단한 함수의 경우, 함수 호출 시간이 비효율적일 수 있다.
인라인 함수(inline function)을 사용해 간단하게 함수 호출없이 실행할 수 있다.

단, 인라인 함수는 재귀를 지원하지 않는다.
*/

#include <iostream>

using namespace std;

inline void PrintNumber(int num) {cout << "num: " << num << endl;}

int main()
{
    int num = 1;
    PrintNumber(num);
}

/*
num: 1
*/
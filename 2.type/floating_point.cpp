/*
부동 소수점 방식은 고정 소수점 방식보다 더 많은 범위를 표현할 수 있다.
그러나, 실수를 저장하기 위해 값을 변환하는 과정에서 오차가 발생하게 된다.
*/
#include <iostream>

using namespace std;

int main()
{
    int i;
    float sum = 0;

    for (i=0; i<1000; i++) {
        sum += 0.1;
    }

    cout << "0.1 X 1000 = " << sum << endl;
}

/*
0.1 X 1000 = 99.999
*/
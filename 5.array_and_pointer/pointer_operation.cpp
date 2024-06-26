/*
[포인터와 배열]
배열은 상수라는 점을 제외하면 포인터와 같다.
C++에서는 배열의 이름을 포인터처럼 사용할 수 있고 포인터를 배열의 이름처럼 사용할 수 있다.
*/

#include <iostream>

using namespace std;

int main() {
    int arr[3] = {1,2,3};
    int *p_arr = arr;

    cout << "포인터를 배열의 이름처럼 사용할 수 있다. " << p_arr[0] << " " << p_arr[1] << " " << p_arr[2] << " " << endl;

    cout << "포인터를 이용해 배열의 크기를 정확히 출력할 수 없다. " << sizeof(p_arr) << endl;

    cout << "배열의 이름으로 포인터 연산하기: " << *(arr+0) << " " << *(arr+1) << " " << *(arr+2) << endl;

    cout << "포인터 연산으로 배열의 크기를 넘어버려도 컴파일러는 에러를 발생하지 않는다. " << *(arr+100) << endl;
}

/*
포인터를 배열의 이름처럼 사용할 수 있다. 1 2 3
포인터를 이용해 배열의 크기를 정확히 출력할 수 없다. 8
배열의 이름으로 포인터 연산하기: 1 2 3
*/
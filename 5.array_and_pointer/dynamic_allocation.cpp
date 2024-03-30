/*
동적 할당이란, 컴파일 타임이 아닌 런 타임에 사용자가 결정한 크기로 메모리를 할당받는 것이다.
C++에서 new와 delete를 사용해 동적 할당을 할 수 있다.
*/

#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "배열의 크기를 입력하세요: ";
    cin >> size;

    cout << "배열의 크기는: " << size << "입니다" << endl;

    int *arr = new int[size];
    for (int i=0; i<size; i++) {
        arr[i] = i;
    }

    delete []arr;
}
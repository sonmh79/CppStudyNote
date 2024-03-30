/*
문자열(string)이란, 메모리에 저장된 일련된 문자(character)들의 집합을 의미한다.

C 스타일 문자열은 입력 받을 문자열의 크기를 미리 알고 있어야 한다.
*/

#include <iostream>

using namespace std;

int main() {
    const int SIZE = 20;
    char name[SIZE];

    cout << "이름을 입력해주세요: ";
    cin >> name; // 띄어쓰기, 탭, 캐리지 리턴 문자 등을 문자열의 끝으로 인식함.

    cout << "이름은: " << name << "입니다." << endl;
    cin.get(name, SIZE).get();

    cout << "다시 이름을 입력해주세요: ";
    cin.get(name, SIZE).get();
    // cin.get(name, SIZE).ignore(SIZE, '\n'); // 이 방법도 가능

    cout << "이름은: " << name << "입니다." << endl;
}

/*
이름을 입력해주세요: son hm
이름은: son입니다.
다시 이름을 입력해주세요: son hm
이름은: son hm입니다.
*/
/*
C++은 string 클래스를 사용해 문자형 배열보다 사용하기 편리하며 문자열을 하나의 타입으로 표현할 수 있게 해준다.
*/

#include <iostream>

using namespace std;

int main() {
    string str = "sonny";

    cout << "크기: " << str.size() << " or " << str.length() << endl;

    cout << "0번째 문자: " << str[0] << endl;

    string str_hi = "Hi, ";
    string str_name = "My name is sonny";

    cout << str_hi + str_name << endl;

    string str_ans;
    cout << "What's your name: ";
    getline(cin, str_ans);
    cout << "Nice to meet you " << str_ans << "!!" << endl;
}

/*
크기: 5 or 5
0번째 문자: s
Hi, My name is sonny
What's your name: minhyeok
Nice to meet you minhyeok!!
*/
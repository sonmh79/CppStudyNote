/*
네임스페이스는 내부 식별자에 사용될 수 있는 유효 범위를 제공하는 선언적 영역을 의미한다.
namespace 키워드를 사용해 정의하며 전역 위치뿐만 아니라 다른 네임스페이스 내에서도 정의될 수 있다.
기본적으로 외부 연결을 가지며, 블록 내에서는 정의될 수 없다.
*/

#include "namespace.h" // 네임스페이스 접근을 위한 선언

using namespace son; // using 지시자를 사용해 네임스페이스에 속한 이름을 전역에서 사용할 수 있게 해준다.

int main() {
    string my_name = "minhyeok";
    son::PrintMyName(my_name);
    PrintMyName(my_name);
}

void son::PrintMyName(string name)
{
    cout << "My name is " << name << endl;
}

/*
My name is minhyeok
My name is minhyeok
*/
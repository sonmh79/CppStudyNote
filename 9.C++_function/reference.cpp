/*
C++에서 변수의 실제 이름 대신 사용할 수 있는 참조자(reference)가 추가되었다.
크기가 큰 구조체와 같은 데이터를 함수의 인수로 전달해야 할 때 사용할 수 있다.
존재하는 메모리만 참조할 수 있기 때문에 포인터와 달리 NULL을 참조하는 것이 불가능하다.

주의사항
1. 참조자의 타입과 변수 타입이 일치해야 한다.
2. 참조자는 선언과 동시에 초기화 되어야 한다.
3. 한 번 초기화 되면 참조 대상을 변경할 수 없다.

*/

#include <iostream>

using namespace std;

void Swap(int& x, int& y) 
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}

struct Player
{
    string name;
    int number;
};

void PrintPlayerInfo(const Player& player)
{
    cout << "player name: " << player.name << " number: " << player.number << endl;
}

int main()
{
    int num = 1;
    int& ref_num = num;

    ref_num++;

    cout << "num: " << num << endl;
    cout << "ref_num: " << ref_num << endl;

    cout << "num의 주소값: " << &num << endl;
    cout << "ref_num의 주소값: " << &ref_num << endl;

    int x1 = 1;
    int x2 = 2;

    Swap(x1, x2); // 참조자를 함수의 인수로 전달 -> 값이 서로 변경됨

    cout << "x1: " << x1 << endl;
    cout << "x2: " << x2 << endl;

    Player player = {"son", 7};
    PrintPlayerInfo(player);
}

/*
num: 2
ref_num: 2
num의 주소값: 0x16d0ef03c
ref_num의 주소값: 0x16d0ef03c
x1: 2
x2: 1
player name: son number: 7
*/
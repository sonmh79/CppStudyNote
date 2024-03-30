/*
구조체란 사용자가 C++의 기본 타입을 가지고 새롭게 정의할 수 있는 사용자 타입이다.
다양한 변수 집합을 하나의 타입으로 표현할 수 있다.
구조체를 구성하는 변수를 멤버 또는 멤버 변수라고 한다.
구조체는 변수뿐만 아니라 함수까지도 멤버 변수로 가질 수 있다.
*/

#include <iostream>

using namespace std;

struct player
{
    string name;
    int number;
};

int main() {
    player player1 = {"son",7};
    player player2 = {"messi"}; // 정의되지 않은 값은 기본값으로 설정됨.
    player player3 = {};

    cout << "Player1의 이름: " << player1.name << " 등번호: " << player1.number << endl;
    cout << "Player2의 이름: " << player2.name << " 등번호: " << player2.number << endl;
    cout << "Player3의 이름: " << player3.name << " 등번호: " << player3.number << endl;
}

/*
Player1의 이름: son 등번호: 7
Player2의 이름: messi 등번호: 0
Player3의 이름:  등번호: 0
*/
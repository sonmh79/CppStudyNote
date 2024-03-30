/*
C++에서 구조체를 함수의 인수나 반환값으로 사용할 수 있다.
구조체는 가장 큰 멤버 변수를 기준으로 메모리 크기를 맞추는데 이때 패딩 바이트가 들어간다.
따라서, 멤버 변수들의 크기 총합은 구조체의 크기와 다를 수 있다.
*/

#include <iostream>

using namespace std;

struct Prop
{
    int savings;
    int loan;
};

int CalcProp(int, int);
int CalcProp(Prop*);
// int CalcProp(const Prop*); // const를 사용하면 구조체 멤버변수의 수정을 막을 수 있음.

int main() {
    Prop prop = {100, 100};
    cout << "재산: " << CalcProp(prop.savings, prop.loan) << "원" << endl;
    cout << "재산: " << CalcProp(&prop) << "원" << endl;

    cout << "savings 값이 변경되었습니다. " << prop.savings << "원" << endl;
}   

int CalcProp(int s, int l) {
    return s-l;
}

int CalcProp(Prop* prop) {
    prop->savings = 0;
    return prop->savings - prop->loan;
}
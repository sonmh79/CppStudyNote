/*
배열의 이름은 배열의 첫번째 요소의 주소와 같은 값을 가르키고 있다.
*/
#include <iostream>

using namespace std;

int main() {
    int arr[3]; // 길이 3의 배열 초기화

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    // arr[3] = 4; 컴파일 에러가 나지 않기 때문에 조심해야 한다.

    int sum = 0;
    for (int i=0; i<3; i++) {
        sum += arr[i];
    }

    cout << "arr의 총합은: " << sum << endl;
    
    int arr2[10] = {}; // 모두 0으로 초기화

    int len = sizeof(arr2) / sizeof(arr2[0]);

    cout << "arr2의 길이: " << len << endl;
    cout << "arr2 0번째 인덱스 값: " << arr2[0] << endl;
}

/*
arr의 총합은: 6
arr2의 길이: 10
arr2 0번째 인덱스 값: 0
*/
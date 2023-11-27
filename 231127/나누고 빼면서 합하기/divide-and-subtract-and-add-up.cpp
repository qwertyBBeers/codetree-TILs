#include <iostream>

#define MAX_N 100

using namespace std;

int arr[MAX_N + 1];
int cnt;

// 문제에서 구하고자 하는 값을 반환합니다.
int GetAnswer() {
    int return_value = 0;
    while(cnt) {
        return_value += arr[cnt];
        
        if(cnt % 2 == 0)
            cnt /= 2;
        else
            cnt--;
    }

    return return_value;
}

int main() {
    // 변수 선언 및 입력:
    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++)
        cin >> arr[i];

    cnt = m;
    
    cout << GetAnswer();
}
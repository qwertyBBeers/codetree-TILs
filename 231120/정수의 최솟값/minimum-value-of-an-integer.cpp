#include <iostream>

using namespace std;

int result =0;

int cal(int a, int b, int c){
    if(a >= b){
        if(b >= c){
            result = c;
        }
        else
            result = b;
    }
    else if(b >= a){
        if(a >= c){
            result = c;
        }
        else
            result = a;
    }
    return result;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, cnt = 0;
    cin >> a >> b >> c;

    cnt = cal(a, b, c);

    cout << cnt;
    return 0;
}
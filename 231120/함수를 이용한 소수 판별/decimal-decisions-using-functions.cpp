#include <iostream>

using namespace std;

bool cal(int a){
    for(int i = 2; i<a; i++){
        if(a%i == 0){
            return false;
        }
    }
    return true;
}
int main() {
    int a, b, cnt = 0;
    cin >> a >> b;

    for(a; a<=b; a++){
        if(cal(a)){
            cnt += a;
        }
    }

    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}
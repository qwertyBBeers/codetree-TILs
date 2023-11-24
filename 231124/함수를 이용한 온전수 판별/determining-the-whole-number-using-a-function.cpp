#include <iostream>

using namespace std;

int cnt = 0;

int count(int a, int b){
    for(a; a <= b; a++){
        if(a%2 == 0 || a%10 == 5 || (a%3 == 0 && a%9 != 0)){
            continue;
        }
        else
            cnt++;
    }
    return cnt;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b = 0;
    cin >> a >> b;
    int result = 0;
    result = count(a, b);     
    cout << result;
    return 0;
}
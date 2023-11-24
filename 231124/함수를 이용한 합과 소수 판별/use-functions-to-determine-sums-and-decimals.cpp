#include <iostream>

using namespace std;

int function(int a, int b){
    int cnt = 0;
    int result = 0;

    for(a; a <= b; a++){
        for(int i = 2; i < a; i++){
            if(a%i == 0){
                break;
            }
        }
        for(int i = 0; i < 3; i++){
            cnt += a%10;
            if(a/10 == 0)
                break;
            a = a/10;
        }
        
        if(cnt % 2 == 0)
            result++;
    }

    return result;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    int result = 0;
    cin >> a >> b;

    result = function(a, b);
    cout << result;
    return 0;
}
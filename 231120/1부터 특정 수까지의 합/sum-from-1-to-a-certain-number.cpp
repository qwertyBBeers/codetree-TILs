#include <iostream>

using namespace std;
int cnt = 0;
int cal(int N){
    for(int i = 1; i <= N; i++){
        cnt += i;
    }
    return cnt/10;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    int result = 0;

    result = cal(N);
    
    cout << result;

    return 0;
}
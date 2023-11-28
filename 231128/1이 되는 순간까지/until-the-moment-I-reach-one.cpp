#include <iostream>
using namespace std; 
int cnt = 0;

int func(int N){
    
    if(N == 1)
        return cnt;
    if(N%2 == 0){
        cnt++;
        return func(N/2);
    }
    else if(N%2 == 1){
        cnt++;
        return func(N/3);
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    cout << func(N);
    return 0;
}
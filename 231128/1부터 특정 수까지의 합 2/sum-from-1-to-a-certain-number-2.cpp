#include <iostream>
using namespace std;

int func(int N){
    if(N == 1)
        return 1;
    return func(N-1)+N;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    cout << func(N);
        return 0;
}
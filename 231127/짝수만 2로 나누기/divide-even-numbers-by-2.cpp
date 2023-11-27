#include <iostream>
using namespace std;

void cal(int N, int *x){
    for(int i = 0; i < N; i++){
        if(x[i]%2 == 0){
            x[i] = x[i]/2;
        }
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    int a[50];

    for(int i = 0; i< N; i++){
        cin >> a[i];
    }

    cal(N, a);
    
    for(int i = 0; i < N; i++){
        cout << a[i] << " ";
    }
    return 0;
}
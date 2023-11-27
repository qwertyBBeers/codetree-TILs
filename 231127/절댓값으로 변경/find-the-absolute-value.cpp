#include <iostream>
using namespace std;

void func(int N, int *x){
    for(int i = 0; i < N; i++){
        if(x[i] < 0){
            x[i] = -x[i];
        }
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    int arr[50];

    for(int i = 0; i <N; i++){
        cin >> arr[i];
    }

    func(N, arr);
    
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
#include <iostream>
using namespace std;

int cnt = 0;
int check = 0;
int n;
int arr[100];

void func(int *x){
    if(check == n)
        return;

    if(cnt < x[check]){
        cnt = x[check];
    }

    check += 1;

    func(x);
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    func(arr);

    cout << cnt;
    return 0;
}
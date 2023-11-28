#include <iostream>
using namespace std;

void func(int *x, int m){
    int a, b;
    int cnt = 0;
    for(int i = 0; i<m; i++){
        cin >> a >> b;
        a = a-1;
        for(a; a < b; a++){
            cnt += x[a];
        }
        cout << cnt << endl;
        cnt = 0;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    int arr[100];
    cin >> n >> m;

    for(int i = 0; i <n; i++){
        cin >> arr[i];
    }

    func(arr, m);

    return 0;
}
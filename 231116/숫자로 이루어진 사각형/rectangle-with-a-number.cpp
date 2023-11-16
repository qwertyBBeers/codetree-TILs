#include <iostream>
using namespace std;

void square(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            score = (i + j)%9;
            
            cout << score << " ";
        }
        cout << endl;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    square(n);
    return 0;
}
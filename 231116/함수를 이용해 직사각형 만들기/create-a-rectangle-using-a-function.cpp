#include <iostream>
using namespace std;

void stars(int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <m; j++){
            cout << "1";
        }
        cout << endl;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int input1, input2 = 0;
    cin >> input1 >> input2;
    stars(input1, input2);
    return 0;
}
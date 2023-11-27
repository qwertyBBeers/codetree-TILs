#include <iostream>
using namespace std;

void cal(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n, m = 0;
    cin >> n >> m;

    cal(n, m);
    
    cout << n << " " << m;
    return 0;
}
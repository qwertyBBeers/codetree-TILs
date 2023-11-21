#include <iostream>

using namespace std;
int cnt;
int a1 = 0;

int cal(int a, int b){
   a1 = a;
   for(int i = 1; i<b; i++){
    a1 = a1*a;
   }
   cnt = a1;
   return cnt;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    cnt = cal(a, b);
    cout << cnt;

    return 0;
}
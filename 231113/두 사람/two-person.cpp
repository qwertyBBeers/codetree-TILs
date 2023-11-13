#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int b;
    char a1;
    char b1;
    
    cin >> a >> a1 >> b >> b1;

    if((a >= 19 && a1 == 'M')||(b >= 19 && a1 == 'M'))
        cout << "1";

    return 0;
}
#include <iostream>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a[2];
    int b[2];

    cin >> a[0] >> a[1];
    cin >> b[0] >> b[1];

    if(a[0] > b[0])
        cout << "A";
    else if(b[0] > a[0])
        cout << "B";
    else{
        if(a[1] > b[1])
            cout << "A";
        else if(a[1] < b[1])
            cout << "B";
    }
    return 0;
}
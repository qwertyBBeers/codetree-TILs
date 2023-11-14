#include <iostream>

using namespace std;

int main() {

    int a, b, c;

    cin >> a >> b >> c;

    if(a >= b){
        if(b >= c)
            cout << b;
        else if(b < c){
            if(a >= c)
                cout << c;
            else
                cout << a;
        }
    } 
    else if(a < b){
        if(a >= c)
            cout << a;
        else if(a < c){
            if(b >= c)
                cout << c;
            else
                cout << b;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}
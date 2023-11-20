#include <iostream>

using namespace std;

bool check(int n){
    if(n % 2 == 0){
        int first = n / 10;
        int second = n % 10;
        if((first + second)%5 == 0){
            return true;
        }
    }
    return false;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    bool result;
    cin >> n;

    result = check(n);

    if(result){
        cout << "Yes";
    }
    else
        cout << "No";

    return 0;
}
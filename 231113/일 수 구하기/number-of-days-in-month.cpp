#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int month;

    cin >> month;
    if(month == 2)
        cout << "28";
    else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        cout << "31";
    else
        cout << "30";
    return 0;
}
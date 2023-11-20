#include <iostream>
using namespace std;

bool cal(int y){
    if(y%400 == 0 && y%4 == 0 && y%100 ==0)
        return true;
    else if(y%4 == 0 && y%100 ==0)
        return false;
    else if(y%4 == 0)
        return true;
    return false;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int y;
    cin >> y;

    if(cal(y))
        cout << "true";
    else
        cout << "false";

    return 0;
}
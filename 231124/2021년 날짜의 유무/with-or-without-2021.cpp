#include <iostream>

using namespace std;

bool func1(int M, int D){
    if(M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12){
        if(D <= 31)
            return true;
    }
    else if(M == 2){
        if(D <= 28)
            return true;
    }
    else if(M == 2 || M == 4 || M == 6 || M == 9 || M == 11){
        if(D <= 30)
            return true;
    }
    else
        return false;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int M, D;
    cin >> M >> D;

    if(func1(M, D))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
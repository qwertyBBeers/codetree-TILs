#include <iostream>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int score1, score2;
    cin >> score1 >> score2;
    if(score1 >= 90){
        if(score2 >= 95 && score2 <= 100)
            cout << "100000";
        else if(score2 >= 90)
            cout << "50000";
        else
            cout << "0";
    }

    else
        cout << "0";
    
    return 0;
}
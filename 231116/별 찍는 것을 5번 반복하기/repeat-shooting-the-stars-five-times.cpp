#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    stars();
    return 0;
}

void stars(){
    for(int j = 0; j < 5; j++){
        for(int i = 0; i < 10; i++){
            cout << "*";
        }
        cout << endl;
    }
}
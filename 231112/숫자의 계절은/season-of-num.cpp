#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int input;
    
    cin >> input;

    if(input >= 3 && input <= 5){
        cout << "Spring";
    }
    else if(input >= 6 && input <= 8){
        cout << "Summer";
    }
    else if(input >= 9 && input <= 11){
        cout << "Fall";
    }
    else{
        cout << "Winter";
    }

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int male;
    int age;

    cin >> male >> age;

    if(male > 0){
        if(age >= 19)
            cout << "WOMAN";
        else
            cout << "GIRL";    
    }
    else{
        if(age >= 19)
            cout << "MAN";
        else
            cout << "BOY";    
    }
    return 0;
}
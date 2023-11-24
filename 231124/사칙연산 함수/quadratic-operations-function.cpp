#include <iostream>

using namespace std;

int function1(int a, int b){
    return a + b;
}
int function2(int a, int b){
    return a - b;
}
int function3(int a, int b){
    return a * b;
}
int function4(int a, int b){
    return a / b;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a, c = 0;
    char b;
    int result;
    cin >> a >> b >> c;

    cout << a << " " << b << " " << c << " = ";
    if(b == '+'){
        result = function1(a, c);
        cout << result;
    }
    else if(b == '-'){
        result = function2(a, c);
        cout << result;
    }
    else if(b == '*'){
        result = function3(a, c);
        cout << result;
    }
    else if(b == '/'){
        result = function4(a, c);
        cout << result;
    }
    else
       cout << "False";

    
    return 0;
}
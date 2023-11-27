#include <iostream>
#include <string>

using namespace std;

string A;

void func(string &s){
    int t = s.size();
    int cnt = 1;
    char word = s[0];
    for(int i = 1; i < t; i++){
        if(word != s[i]){
            cnt++;
            word = s[i];
        }
    }

    if(cnt >= 2)
        cout << "Yes";
    else
        cout << "No";
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> A;

    func(A);
    
    return 0;
}
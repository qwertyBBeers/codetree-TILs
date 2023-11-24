#include <iostream>
using namespace std;

bool func(int n1, int n2){
    int a[100], b[100];

    for(int i = 0; i < n1; i++)
        cin >> a[i];
    for(int i = 0; i < n2; i++)
        cin >> b[i];

    if(n2 > n1){
        return false;
    }
    else{
        for(int i = 0; i < n1; i++){
            for(int j = 0; j < n2; j++){
                if(a[i] == b[j]){
                    for(int k = 0; k < n2 - j; k++){
                        if(a[i+k] != b[j+k]){
                            return false;
                        }
                    }
                    return true;
                }
            }
             
        }
        return false;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    cin >> n1 >> n2;

    if(func(n1, n2) == true)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
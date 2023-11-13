#include <iostream>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    char hurt[3];
    int deg[3];

    int check = 0;

    cin >> hurt[0] >> deg[0] >> hurt[1] >> deg[1] >> hurt[2] >> deg[2];
    for(int i = 0; i < 3; i++){
        if(hurt[i] == 'Y'){
            if(deg[i] >= 37)
                check++;
        }
    }

    if(check >= 2)
        cout << "E";
    else
        cout << "N";

    return 0;
}
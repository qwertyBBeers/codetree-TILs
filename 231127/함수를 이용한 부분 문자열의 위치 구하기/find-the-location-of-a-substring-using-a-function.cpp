#include <iostream>
#include <string>

using namespace std;

string A, B;

int func(){
    int t1 = A.size();
    int t2 = B.size();
    int cnt = 0;
    for(int i = 0; i<t1; i++){
        if(A[i] == B[0]){
            for(int j = 0; j<t2; j++){
                if(A[i + j] == B[j]){
                    cnt++;
                }
            }
            if(cnt == t2)
                return i;
            else{
                cnt = 0;
            }
        }
    }

    return -1;

}
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> A >> B;

    int result= func();
    cout << result;
    return 0;
}
#include <iostream>
using namespace std;

bool func2(int Y){
    if(Y%4 == 0 && Y%100 == 0 && Y%400 == 0)
        return true;
    else if(Y%4 == 0 && Y%100 == 0)
        return false;
    else if(Y%4 == 0)
        return true;
    else
        return false;
}
int func1(int Y, int M, int D){
    int result = -1;
    bool check = func2(Y);
    if(check == true){
        if(M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12){
            if(D <= 31){
                if(M >=3 && M <= 5){
                   result = 1; 
                }
                else if(M >=6 && M <= 8){
                   result = 2; 
                }
                else if(M >=9 && M <= 11){
                   result = 3; 
                }
                if(M == 12 || M == 1 || M == 2){
                   result = 4; 
                }
            }
        }
        else if(M == 4 || M == 6 || M == 9 || M == 11){
            if(D <= 30){
                if(M >=3 && M <= 5){
                   result = 1; 
                }
                else if(M >=6 && M <= 8){
                   result = 2; 
                }
                else if(M >=9 && M <= 11){
                   result = 3; 
                }
                if(M == 12 || M == 1 || M == 2){
                   result = 4; 
                }
            }
        }
        else if( M == 2){
            if(D <= 29){
                result = 4;
            }
        }
    }
    else if(check == false){
        if(M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12){
            if(D <= 31){
                if(M >=3 && M <= 5){
                   result = 1; 
                }
                else if(M >=6 && M <= 8){
                   result = 2; 
                }
                else if(M >=9 && M <= 11){
                   result = 3; 
                }
                if(M == 12 || M == 1 || M == 2){
                   result = 4; 
                }
            }
        }
        else if(M == 4 || M == 6 || M == 9 || M == 11){
            if(D <= 30){
                if(M >=3 && M <= 5){
                   result = 1; 
                }
                else if(M >=6 && M <= 8){
                   result = 2; 
                }
                else if(M >=9 && M <= 11){
                   result = 3; 
                }
                if(M == 12 || M == 1 || M == 2){
                   result = 4; 
                }
            }
        }
        else if( M == 2){
            if(D <= 28){
                result = 4;
            }
        }
    }

    return result;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int Y , M, D;
    cin >> Y >> M >> D;

    int result = func1(Y, M, D);
    if(result == 1)
        cout << "Spring";
    else if(result == 2)
        cout << "Summer";
    else if(result == 3)
        cout << "Fall";
    else if(result == 4)
        cout << "Winter";
    else
        cout << "-1";
    return 0;
}
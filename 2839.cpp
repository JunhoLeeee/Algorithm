#include <iostream>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int max_5kg = n/5 ;
    int count = -1;
    int count_3kg = 0;

    for(int i=max_5kg; i>=0; i--){
        int remain = n - (i*5);
        if(remain%3 == 0){
            count_3kg = remain/3;
            count = i + count_3kg;
            break;
        }
        
    }
    cout << count;
    return 0;
}
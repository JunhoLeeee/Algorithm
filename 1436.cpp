#include <iostream>
#include <string>

using namespace std;

bool is_num(int n){
    string s = to_string(n);
    if(s.find("666") != -1){
        return true;
    }
    return false;
}

int main(){
    int n;
    int count=0;
    int num = 666;
    cin >> n;
    while(1){
        if(is_num(num)){
            count++;
            if(count == n){
                cout << num << "\n";
                break;
            }
        }
        num++;
    }
    return 0;    
}
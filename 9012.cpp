#include <iostream>
#include <string>
using namespace std;
bool check(string s){
    int i=1;
    int left =0;
    int right =0;
    int flag = 0;
    if(s[0] == ')') return false;
    while(s[i]!='\0'){
        if(flag){
            if(right>left) return false;
            else{
                if(s[i]=='(') left++;
                else right++;
            }
        }

        else{
            if(s[i]=='(') left++;
            else right++;
        }
    }
    return right == left;
}

int main(){
    int n;
    cin >> n;
    string s;
    for(int i=0; i<n; i++){
        cin >> s;
        
        if(check(s)){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
        
    }
    return 0; 
}
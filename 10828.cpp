#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;
int main(){
    int n;
    cin >> n;
    stack<int> v;
    string command; 
    for(int i=0; i<n; i++){
        cin >> command; 
        if(command == "push"){
            int value;
            if(cin >> value) v.push(value);
        }

        else if(command == "pop"){
            if(v.empty()) cout << -1 << "\n";
            else{
                cout << v.top() << "\n";
                v.pop();
            }
        }
        else if(command == "top"){
            if(v.empty()) cout << -1 << "\n";
            else cout << v.top() << "\n";
        } 
        else if(command == "size"){
            cout << v.size() << "\n";
        } 
        else if(command == "empty"){
            cout << v.empty() << "\n";
        }
    }
    return 0;
}
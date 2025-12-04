#include <iostream>
#include <unordered_set>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    int value;
    
    int T;
    cin >> T;
    while(T--){
        cin >> n;
        unordered_set<int> v1(n);
        for(int i=0; i<n; i++){
            cin >> value;
            v1.insert(value);
        }
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> value;
            if(v1.count(value)) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
    }
    return 0;
}
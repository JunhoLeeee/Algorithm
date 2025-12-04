#include <iostream>
#include <unordered_set>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    unordered_set<string> s;
    vector<string> save;
    for(int i=0; i<n; i++){
        string name;
        cin >> name;
        s.insert(name);
    }
    for(int i=0; i<m; i++){
        string name_m;
        cin >> name_m;
        if(s.count(name_m)) save.push_back(name_m); 
    }
    
    sort(save.begin(), save.end());

    cout << save.size() << "\n";

    for(const string& name : save){
        cout << name << "\n";
    }
    return 0;
}
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

bool compare(string a, string b){
	if(a.length() != b.length()) return a.length() < b.length(); // 내림차순
	return a < b;
}

// bool compare(string a, string b){
//     if(a.length() != b.length()){
//         return a.length() < b.length();
//     }
//     return a < b;
// }
int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end(), compare);
    v.erase(unique(v.begin(), v.end()), v.end());
    
    for(int i=0; i<v.size(); i++){
        cout << v[i] << "\n";
    }
    return 0;
}

#include <iostream>
#include <queue>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    int n, k;
    int value; 
    cin >> n >> k ;
    queue<int> q;
    queue<int> save;
    for(int i=0; i<n; i++){
        q.push(i+1);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<k-1; j++){
            value = q.front();
            q.push(value);
            q.pop();
        }
        save.push(q.front());
        q.pop();
    }

    cout << "<";

    while(!save.empty()){ 
        cout << save.front();
        save.pop();

        if(!save.empty()) cout << ", ";
    }

    cout << ">";
    return 0; 
}
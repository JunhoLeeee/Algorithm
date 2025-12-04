#include <iostream>
#include <queue>

using namespace std;

int main(){
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

    for(int i=0; i<n; i++){
        cout << save.front() << ", ";
        save.pop();
    }
    return 0; 
}
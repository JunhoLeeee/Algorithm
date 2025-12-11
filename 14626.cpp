#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	int sum = 0;
	int jari = 0;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != '*' && i % 2 == 0) sum += (s[i] - 48);
		else if (s[i] != '*' && i % 2 == 1) sum += (s[i] - 48) * 3;
		else jari = i;
	}
	if (jari % 2 == 0) jari = 1;
	else jari = 3;
	 

	for (int i = 0; i < 10; i++) {
		if ((sum + jari * i) % 10 == 0) {
			cout << i;
			break;
		}
	}
	
	return 0;
}

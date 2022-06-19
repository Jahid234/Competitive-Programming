#include <bits/stdc++.h>

using namespace std;

int main() {

	while (true) {
		int i, n, s = 0;

		cin >> n;

		if (!n){
            break;
        } 
		
		while (n--) {
			cin >> i;
			if (i > 0) {
				if (s) {
					cout << " ";
				}
				cout << i << endl;
				s = 1;
			}
		}
		if (!s) {
			cout << 0 << endl;
		}
		cout << endl;
	}
	return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    int n;

    for(int i=0; i<T; i++){        
        cin >> n;
        cout << ((n-1)*n)/2 << endl;
    }
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int i, n;
    long long int aVeryBigSum = 0;

    cin >> n;

    vector <int> arr(n);

    for(i = 0; i < n; i++){
        cin >> arr[i];
        aVeryBigSum += arr[i];
    }

    cout << aVeryBigSum;
    
    return 0;
    
}
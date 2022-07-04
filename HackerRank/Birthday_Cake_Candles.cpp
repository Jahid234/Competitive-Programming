#include <bits/stdc++.h>

using namespace std;

int main(){
    int i, n;
    int count = 0, temp = 0;
    cin >> n;
    vector <int> arr(n);
    
    
    //Print array
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    //Use sort function
    sort(arr.begin(), arr.end());
    temp = arr[n-1];

    for(i = 0; i < n; i++){
        if(temp == arr[i])
            count++;
    }
    
    cout << count;
    
    return 0;
} 
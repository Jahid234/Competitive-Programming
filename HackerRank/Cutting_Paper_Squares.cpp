#include<bits/stdc++.h>

using namespace std;

long solve(long int n, long int m){
    return (n-1) + (n * (m-1));
}

int main(){
    int n, m;
    cin >> n >> m;

    cout << solve(n, m);
}
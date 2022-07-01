#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int t, Sn, n; /// Sn = series
    int i;
    cin >> t;

    for(i = 1; i <= t; i++){
        cin >> n;
        
        // mod := 10^9 + 7 =1000000007
        
        Sn=(n % 1000000007) * (n % 1000000007) % 1000000007;

        cout << Sn << endl;

    }    
    return 0;
}

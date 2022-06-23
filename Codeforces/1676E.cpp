#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main()
{
    ll t, n, q, num;
    cin >> t;
    
    while(t--)
    {
        vector <ll> vec;

        cin >> n >> q;

        ll arr[n+5], sum = 0;

        for(ll i=0; i<n; i++) 
            cin >> arr[i];

        sort(arr, arr+n);

        for(ll i=n-1; i>=0; i--) 

            sum += arr[i], vec.push_back(sum);

        for(ll i=0; i<q; i++)
        {
            cin >> num;

            ll ans = lower_bound(vec.begin(), vec.end(), num) - vec.begin() + 1;

            if(num <= sum) 
                cout << ans << endl;
            else 
                cout << "-1" << endl;
        }
    }
    return 0;
}
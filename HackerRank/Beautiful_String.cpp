#include<bits/stdc++.h>

using namespace std;

char B[100];

int main(){
    int n;

    int ans = 0;

    scanf("%d ", &n);

    scanf("%s ", B);

    for(int i = 2; B[i]; i++){
        if(B[i-2] == '0' && B[i-1] == '1' && B[i] == '0') B[i] = '1', ans++;
    }
    printf("%d", ans);
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>

int main(){
    std::cin.tie(0) -> sync_with_stdio(0);

    int n;
    std::cin >> n;

    long long MOD = 1e9 + 7;
    long long base = 2;
    long long exponent = n;
    long long ans = 1;

    while(exponent){
        if(exponent & 1LL){
            ans = (ans * base) % MOD;
        }
        base = (base * base) % MOD;
        exponent >>= 1LL;
    }
    std::cout << ans << std::endl;

    return 0;
}

#include <iostream>
#include <bits/stdc++.h>

int main(){
    std::cin.tie(0) -> sync_with_stdio(0);

    int n;
    std::cin >> n;

    std::cout << "0\n";
    if(n == 1) return 0;
    long long xsct = 0;
    long long sub = 0;
    long long subAdjust = 0;
    long long printValue = 0;
    for(int i = 1; i < n; i++){
        xsct += ((2*pow(i,3)) + (3*pow(i,2)) + i);
        printValue = (xsct - sub);
        // std::cout << "xsct: " << xsct << ", sub: " << sub << ", printValue: " << printValue << "\n";
        std::cout << printValue << "\n";
        subAdjust += 8;
        sub += subAdjust;
    }
    return 0;
}


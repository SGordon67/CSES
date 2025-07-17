#include <iostream>
#include <bits/stdc++.h>

int main(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    long long int n;
    std::cin >> n;

    if(n == 1) std::cout << "1";
    else if(n == 4) std::cout << "3 1 4 2";
    else if(n < 5) std::cout << "NO SOLUTION";
    else{
        for(int i = 1; i <= n; i+=2) std::cout << i << " ";
        for(int i = 2; i <= n; i+=2) std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}

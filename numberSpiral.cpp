#include <iostream>
#include <bits/stdc++.h>

long long getValue(long long y, long long x){
    long long val = std::max(x*x-(x-1),y*y-(y-1));
    if(x >= y){
        if(!(x%2)){
            val -= (x-y);
        }else{
            val += (x-y);
        }
    }else{
        if(!(y%2)){
            val += (y-x);
        }else{
            val -= (y-x);
        }
    }
    return val;
}

int main(){
    std::cin.tie(0) -> sync_with_stdio(0);

    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        long long y, x;
        std::cin >> y >> x;
        std::cout << getValue(y, x) << std::endl;
    }
    return 0;
}

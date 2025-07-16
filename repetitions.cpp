#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>

int main(){
    std::ios_base::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
    int longestRep = 1;
    int curLengthRep = 1;

    std::string s;
    std::getline(std::cin, s);

    if(s.length() == 1){
        std::cout << 1 << std::endl;
        return 0;
    }

    for(int i = 1; i < s.length(); i++){
        if(s[i] == s[i-1]){
            curLengthRep++;
        }else{
            longestRep = std::max(longestRep, curLengthRep);
            curLengthRep = 1;
        }
    }
    std::cout << std::max(longestRep, curLengthRep) << std::endl;
    return 0;
}

#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>

int main(){
    std::ios_base::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
    long long int numMoves = 0;

    int n;
    std::cin >> n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string line;
    std::getline(std::cin, line);
    std::istringstream iss(line);

    int curMax;
    int t;
    iss >> t;
    curMax = (int)t;
    for(int i = 0; i < n-1; i++){
        iss >> t;
        if(t < curMax){
            numMoves += curMax - t;
        }else{
            curMax = t;
        }
    }
    std::cout << numMoves << std::endl;
    return 0;
}

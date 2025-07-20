#include <iostream>
#include <bits/stdc++.h>

int main(){
    std::cin.tie(0) -> sync_with_stdio(0);

    int n;
    std::cin >> n;
    
    long long sum1 = 0;
    long long sum2 = 0;

    std::vector<long long> vec1;
    std::vector<long long> vec2;

    int swap = 0;
    for(int i = n; i > 0; i--){
        
        
        if(sum1 <= sum2){
            vec1.push_back(i);
            sum1 += i;
        }else{
            vec2.push_back(i);
            sum2 += i;
        }
    }
    if(sum1 != sum2){
        std::cout << "NO\n";
        return 0;
    }else{
        std::cout << "YES\n" << vec1.size() << "\n";
        for(int i = 0; i < vec1.size(); i++){
            std::cout << vec1[i] << " ";
        }
        std::cout << "\n";
        std::cout << vec2.size() << "\n";
        for(int i = 0; i < vec2.size(); i++){
            std::cout << vec2[i] << " ";
        }
    }
    std::cout << "\n";


    return 0;
}

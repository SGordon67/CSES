#include <iostream>
#include <cstdlib>
#include <vector>

int main(){
    long long int n;
    std::cin >> n;
    std::vector<long long int> r;
    while(n != 1){
        std::cout << n << " ";
        if(n % 2){
            n *= 3;
            n++;
        }else{
            n /=2;
        }
    }
    std::cout << 1 << std::endl;
    return 0;
}

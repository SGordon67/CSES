#include <iostream>
#include <cstdlib>
#include <sstream>
#include <limits>

int main(){
    int n;
    std::cin >> n;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string line;
    std::getline(std::cin, line);
    std::istringstream iss(line);

    int r = 0;
    int t;
    int i = 1;
    while(iss >> t){
        r ^= t;
        r ^= i;
        i++;
    }
    r ^= i;
    std::cout << r << std::endl;
    return 0;
}

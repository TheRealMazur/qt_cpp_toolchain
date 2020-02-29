#include <iostream>
#include <string>

int square(const int number){
    return number * number;
}

int main(){
    int number;
    std::cout << "Please input an integer:\n";
    std::cin >> number;
    std::cout << "Square of: " << number << " is: " << square(number) << '\n';
    return 0;
}

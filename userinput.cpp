#include <iostream>

int main(){
    
    int age;
    std::cout << "What's your age\n";
    std::cin >> age;

    std::string name;
    std::cout << "Whats your name\n";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Your name is: " << name << '\n';
    std::cout << "You are " << age << " years old\n";

    return 0;
}
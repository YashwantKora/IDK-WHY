#include <iostream>

int main()
{//make sure to arrange thees if , if-else statements based on the arguments given :>
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "Welcome to the site";
    }
    else if(age < 0){
        std::cout << "How is your age less than 0 years old 💀";
    }
    else{
        std::cout << "Access Denied!!";
    }
}
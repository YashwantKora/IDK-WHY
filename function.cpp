#include <iostream>

void greet(std::string name, int age){
    if(age >= 18){
        std::cout << "Hello " << name << " You can use Samsung/Apple pay!";
    } 
    else{
        std::cout << "Hello " << name << " Unfortunately You cannot use Samsung/Apple pay!";
    }
}

int main(){
    std::string name;
    int age;

    std::cout << "Enter Your Name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your Age: ";
    std::cin >> age;
    
    greet(name, age);
}
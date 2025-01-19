#include <iostream>

int main()
{
    std::string FullName;

    std::cout << "Enter your full name";
    std::getline(std::cin , FullName);
    //length
    // if (FullName.length() >= 12 ){
    //     std::cout << "your name is too long";
    // }
    // else {
    //     std::cout << "Your name lies within the set limit";
    // }
    //empty
    // if (FullName.empty()){
    //     std::cout << "hello MR. no name";
    // }
    
    //FullName.clear();
    //FullName.erase(0,3);
    //FullName.append("@123");
    //FullName.insert(0, 'f');
    //FullName.at(0); index -> value
    //FullName.find("Y") value -> index
    
    return 0;
}
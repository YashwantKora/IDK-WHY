#include <iostream>
int main(){
    int number;

    do{
        std::cout << "Enter a +ve #: ";
        std::cin >> number;
    }while(number < 0);
    
    std::cout << "Your number is: "<< number;
    return 0;
}
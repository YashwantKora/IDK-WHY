#include<iostream>

double Square(double length);
double Cube(double length);
std::string ConcatStrings(std::string string1, std::string string2);

int main(){
    double length = 5.0;

    double result = Square(length);
    double result1 = Cube(length);
    std::cout << "Square: " << result << std::endl;
    std::cout << "Cube: " << result1 << std::endl;

    std::string firstName = "Yashwant";
    std::string lastName = "Kora";
    std::string fullName = ConcatStrings(firstName, lastName);
    std::cout << "Your Full name is: " << fullName << std::endl;
    return 0;
}

double Square(double length){
    return length * length;
}
double Cube(double length){
    return length * length * length;
}
std::string ConcatStrings(std::string firstName, std::string lastName){
    return firstName + ' ' + lastName;
}


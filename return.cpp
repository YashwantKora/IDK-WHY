#include<iostream>

double Square(double length);
double Cube(double length);

int main(){
    double length = 5.0;

    double result = Square(length);
    double result1 = Cube(length);
    std::cout << "Square: " << result << std::endl;
    std::cout << "Cube: " << result1 << std::endl;
    return 0;
}

double Square(double length){
    return length * length;

}

double Cube(double length){
    return length * length * length;
}
#include <iostream>
#include <cmath>
int main()
{
    double x = 1;
    double y = 2;
    double z;

    z = std::max(x,y);
    //only max and min are built in math function
    std::cout << z << '\n';


    z = pow(x,y);
    z = sqrt(x);
    z = abs(y);
    z = ceil(x);
    z = floor(y);
    z = round(x);
    std::cout << z;

}


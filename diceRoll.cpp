#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    srand(time(NULL));
    int a = rand() % 7;
    std::cout << "You rolled a: " << a;
}

#include <iostream>

void bakePizza();
void bakePizza(std::string toppings1);
void bakePizza(std::string toppings1, std::string toppings2);

int main(){
    bakePizza();
    bakePizza("Paneer");
    bakePizza("Paneer", "mushroom");
}
void bakePizza(){
    std::cout << "Hear is your pizza!" << std::endl;
}
void bakePizza(std::string toppings1){
    std::cout << "Here is your " << toppings1 << " pizza!" << std::endl;
}
void bakePizza(std::string toppings1, std::string toppings2){
    std::cout << "Here is your " << toppings1 << " and " << toppings2 << " pizza!";
}
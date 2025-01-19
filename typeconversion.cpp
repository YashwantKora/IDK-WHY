#include <iostream>

int main(){
    double x = 12.12;
    std::cout << (int)x << "\n";

    int correct = 8;
    int questions = 12;
    double score = (double) correct/(double) questions * 100;
    std::cout << score << '\n';


    return 0;
}
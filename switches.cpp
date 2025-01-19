//alternative to using many if-else statements

#include <iostream>

int main()
{
    int month;
    std::cout << "Enter the month(1-12): ";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "It's Jan";
            break;
        case 2:
            std::cout << "It's Feb";
            break;
        case 3:
            std::cout << "It's Mar";
            break;
        case 4:
            std::cout << "It's Apr";
            break;
        case 5:
            std::cout << "It's May";
            break;
        case 6:
            std::cout << "It's Jun";
            break;
        case 7:
            std::cout << "It's Jul";
            break;
        case 8:
            std::cout << "It's Aug";
            break;
        case 9:
            std::cout << "It's Sep";
            break;
        case 10:
            std::cout << "It's Oct";
            break;
        case 11:
            std::cout << "It's Nov";
            break;
        case 12:
            std::cout << "It's Dec";
            break;
        default:
            std::cout << "Please enter in only numbers 1-12\n";
    } 

    char grade;
    std::cout << "Enter in your grade (A-F)\n";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout << "You did Excellent";
            break;
        case 'B':
            std::cout << "You did Good";
            break;
        case 'C':
            std::cout << "You did Okay, could do beter";
            break;
        case 'D':
            std::cout << "You did Bad, must improve";
            break;
        case 'E':
            std::cout << "You did Very bad, more effort required!";
            break;
        case 'F':
            std::cout << "You Failed!";
            break;
        default:
            std::cout << "Please enter in only letters(A-F)";
    }
}
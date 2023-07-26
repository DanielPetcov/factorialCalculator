// This program will calculate the factorial of a user given number
#include <iostream>

int factorial(int n);

int main(){
    std::cout << "**********************************************" << '\n';
    std::cout << "************ FACTORIAL CALCULATOR ************" << '\n';
    std::cout << "**********************************************" << '\n';

    int n;

    std::cout << "Enter your number: ";
    std::cin >> n;

    std::cout << "Factorial of " << n << " is: " << factorial(n) << '\n';

    return 0;
}

// Here is the function that calculates the factorial
// This is a recursive function
int factorial(int n){
    if(n > 1){
        return n * factorial(n - 1);
    }
    else{
        return 1;
    }
}
// Calculate the sum, product, difference and quotients of two numbers

// Allows program to perfrom input and output
#include <iostream>

// Program uses names from the std namespace
using namespace std;

// Function main begins program execution
int main ()
{
    // Variable declarations

    // first and second number to perform operations on
    int number_1, number_2;

    // Operations to perform
    int sum, product, difference, quotients;

    // Prompts user for a number as a data
    cout << "Enter any number of your choice:  \n";

    // Reads the number into the variable container
    cin >> number_1;

    // Prompts user for a number as a data
    cout << "Enter another number of your choice:  \n";

    // Reads the number into the variable container
    cin >> number_2;

    // Adds the numbers; stores result in sum
    sum = number_1 + number_2;

    // Multiplies the numbers; stores result in product
    product =  number_1 * number_2;

    // Subtracts the numbers; stores result in difference
    difference = number_1 - number_2;

    // Divides the number; stores result in quotients
    quotients = number_1 / number_2;

    // Print the sum of the number the user entered
    cout << "The SUM of the two numbers is  " << sum << "\n";

    // Print the product of the number the user entered
    cout << "The PRODUCT of the two numbers is  " << product << "\n";

    // Print the difference of the number the user entered
    cout << "The DIFFRENCE between the two numbers is  " << difference << "\n";

    // Print the quotitents of the number the user entered
    cout << "The QUOTIENTS of the two numbers is  " << quotients << "\n";

    // Ends the main function
    return 0;

}
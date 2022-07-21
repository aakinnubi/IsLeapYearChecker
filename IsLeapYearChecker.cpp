// IsLeapYearChecker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
bool IsLeapYear(int year);
int main()
{
    int year = 0;

    std::cout << "Enter a year to test for if it is a valid leap year e.g 2020!\n";
    std::cin >> year;
    if (IsLeapYear(year)) {
        std::cout << year <<" is a leap year";
    }
    else {
        std::cout << year << " is not a leap year";
    }
 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
bool isDivisbleByHundred(int year) {
    if ((year % 100) != 0) {
        return true;
    }
    return false;
}
bool isDivisibleByFour(int year) {
    if ((year % 4) == 0) {
        return true;
    }
    return false;
}
bool isDivisibleByFourHudred(int year) {
    if ((year % 400) == 0) {
        return true;
    }
    return false;
}
bool IsLeapYear(int year)
{
    if ((isDivisibleByFour(year)) && (isDivisbleByHundred(year)) || (isDivisibleByFourHudred(year))) {
        return true;
  }
    return false;
}

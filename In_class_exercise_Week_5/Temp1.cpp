﻿#include <iostream>
#include <string>

// =========================================================
// For Exercise 2,
// TODO: Define the OOPCourse::Math namespace structure and
//       the internal anonymous namespace here.

// =========================================================

namespace
{
    void log_calculation(int result)
    {
        std::cout << "LOG: Calculation performed result is " << result << std::endl;
    }
}

namespace OOPCourse
{
    namespace Math
    {
        int add_and_log(int a, int b)
        {
            int c = a + b;
            log_calculation(c);
            return c;
        }
    }
}
using OOPCourse::Math::add_and_log;

// Main program
int main()
{
    // --- Exercise 1: String reversal and largest value ---
    std::cout << "--- Exercise 1: String Reversal ---\n";
    // TODO: std::string variables num_a, num_b
    std::string num_a;
    std::string num_b;

    std::cout << "Enter the first 3-digit number: ";
    // TODO: Use std::cin to receive 3-digit number of num_a
    std::cin >> num_a;

    std::cout << "Enter the second 3-digit number: ";
    // TODO: Use std::cin to receive 3-digit number of num_b
    std::cin >> num_b;

    // TODO: Empty std::string for reversed_a, reversed_b
    std::string reversed_a;
    std::string reversed_b;

    // 1. Reversal with a for-loop
    // TODO: Implement the standard indexed 'for' loops here to iterate
    //       backwards over num_a and num_b and populate reversed_a and reversed_b.
    for (int i = 0; i <= std::size(num_a) - 1; i++)
    {
        reversed_a += num_a[2 - i];
    }

    for (int i = 0; i <= std::size(num_b) - 1; i++)
    {
        reversed_b += num_b[2 - i];
    }

    // 2. Comparison and Output
    // TODO: Implement the 'if/else' statement here to compare the reversed strings
    //       and output the largest one.
    if (reversed_a > reversed_b)
    {
        std::cout << reversed_a;
    }
    else
    {
        std::cout << reversed_b;
    }


    std::cout << "\n";


    // --- Exercise 2: Namespaces ---
    std::cout << "--- Exercise 2: Namespaces ---\n";


    std::cout << add_and_log(15, 27);

    return 0;
}

// TODO: Use the 'using' declaration here to bring ONLY the public
//       'add_and_log' function into scope.


// TODO: Call 'add_and_log(15, 27)' and print the result.




/*
 * File: 6_pocket_calc.cpp
 *
 * Let's write an infix calculator program for real numbers with variables
 * that takes numbers from user input, uses functions for modularity,
 * and performs calulations with infinitely many consecutive operations!
 */

#include <iostream>
#include <pocket_calculator/common/utils.h>

// *** Task: Add any extra helper functions you want here *** //

// *** End Student Code *** //


int main() {
  // Let's declare our variables!
  float my_number, my_other_number; // Calculation operands
  float result_number;
  char my_operator; // Character representing operation to perform

  // *** Task: Implement Pocket Calculator *** //
  getNumber(std::cout, std::cin, my_number);
  result_number = my_number;

  while (true){
    bool opError = getOperator(std::cout, std::cin, my_operator);
    if (opError){
      std::cerr << "Error: specified operation (" << my_operator << ") not recognized" << "\n";
      continue;
    }

    // If the user wants to quit.
    if (my_operator == 'q') {
      std::cout << "Calculator: quitting now" << "\n";
      break;
    }

    getNumber(std::cout, std::cin, my_other_number);
    float old_result = result_number;

    // Perform the operation. If division by zero is attempted, performOperation returns true.
    bool divZero = performOperation(result_number, my_operator, my_other_number, result_number);
    if (divZero) {
        std::cerr << "Error: Divide by zero attempted!!!" << "\n";
        return -1;
    }

    // Print the operation and the result.
    std::cout << old_result << " " << my_operator << " " << my_other_number << " = " << result_number << "\n";
    }

    return 0;
  // *** End Student Code *** //
}

/**
 * File: utils.cpp
 *
 * Utility functions to be used in driver programs. 
 */

#include <pocket_calculator/common/utils.h>


float addTwoNumbers(float operand1, float operand2) {
    // *** Task: Implement this function according to the header file *** //

    return operand1 + operand2;

    // *** End student code *** //
}

float subtractTwoNumbers(float operand1, float operand2) {
    // *** Task: Implement this function according to the header file *** //

    return operand1 - operand2;

    // *** End student code *** //
}

void multiplyTwoNumbers(float operand1, float operand2, float &product) {
    // *** Task: Implement this function according to the header file *** //
    product = operand1 * operand2;
    // *** End student code *** //
}

bool divideTwoNumbers(float operand1, float operand2, float &quotient) {
    // *** Task: Implement this function according to the header file *** //
    if (operand2 == 0){
        return true;
    }else {
        quotient = operand1 / operand2;
        return false;
    }
    
    // *** End student code *** //
}

void getNumber(std::ostream& output_stream, std::istream& input_stream, float &number) {
    // *** Task: Implement this function according to the header file *** //
    output_stream << "Please type a number and press enter: ";
    input_stream >> number;
    // *** End student code *** //
}

bool getOperator(std::ostream& output_stream, std::istream& input_stream, char &operation) {
    // *** Task: Implement this function according to the header file *** //
    output_stream << "Please type a math operator (one of: + - * / or q to quit): ";
    input_stream >> operation;
    if ((operation != '+') && (operation != '-') && (operation != '*') && (operation != '/') && (operation != 'q')){
        return true;
    }else {
        return false;
    }
    // *** End student code *** //
}

bool performOperation(float operand1, char operation, float operand2,
                      float &result) {
    // *** Task: Implement this function according to the header file *** //
    if (operation == '/' && operand2 == 0){
        return true;
    }
    switch (operation)
    {
    case '+':
        /* code */
        result = operand1 + operand2;
        break;
    case '-':
        result = operand1 - operand2;
        break;
    case '*':
        result = operand1 * operand2;
        break;
    case '/':
        result = operand1 / operand2;
        break;

    default:
        break;
    }

    return false;

    // *** End student code *** //
}

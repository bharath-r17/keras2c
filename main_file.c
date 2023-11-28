#include <stdio.h>
#include "./include/k2c_include.h"
#include "test_func.h" // Replace with the actual name of your generated header file
 
int main() {
    // Create an output tensor
    float output_data[1]; // Regression output, so only one value
    k2c_tensor output = {output_data, 1, 1, {1, 1, 1, 1, 1}}; // Adjust the size to match your model output
 
    while (1) {
        // Prepare your input data (replace with actual values)
        float input_data[8];
        // Get input from the user
        printf("Enter 8 values for input separated by spaces: ");
        for (int i = 0; i < 8; ++i) {
            scanf("%f", &input_data[i]);
        }
 
        // Create an input tensor
        k2c_tensor input = {input_data, 1, 8, {8, 1, 1, 1, 1}}; // Adjust the size to match your model input
 
        // Call the generated C function
        test_func(&input, &output); // Replace with the actual name of your generated function
 
        // Use the output
        printf("The model predicts the output is: %f\n", output_data[0]);
        // Ask the user if they want to continue
        printf("Do you want to continue? (y/n): ");
        char choice;
        scanf(" %c", &choice);
        if (choice != 'y' && choice != 'Y') {
            break; // Exit the loop if the user doesn't want to continue
        }
    }
 
    return 0;
}
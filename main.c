#include <stdio.h>
#include "./include/k2c_include.h"
#include "test_func.h" // Replace with the actual name of your generated header file

// Function to find the index of the maximum value in an array (not used in this case)
int argmax(float array[], int size) {
    // This function is not needed for regression
    return -1;
}

int main() {
    // Prepare your input data (replace with actual values)
    float input_data[8] = {-0.35139464349045885, 1.8561815225324745, 0.019648332203345185, -0.03602697199409447, -0.45519335442361386, -0.07769971749617115, 1.038502685950199, -1.3428091431408828};
    k2c_tensor input = {input_data,1,8,{8,1,1,1,1}}; // Adjust the size to match your model input

    // Create an output tensor
    float output_data[1]; // Regression output, so only one value
    k2c_tensor output = {output_data, 21,1,{1,1,1,1,1}}; // Adjust the size to match your model output

    // Call the generated C function
    test_func(&input, &output); // Replace with the actual name of your generated function

    // Use the output
    printf("The model predicts the house price is: %f\n", output_data[0]);

    return 0;
}
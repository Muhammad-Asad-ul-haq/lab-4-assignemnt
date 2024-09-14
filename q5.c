#include <stdio.h>

int main() { // declaring variables
    char inputUnit, outputUnit;
    float result,x;
    
    // taking inputs
     printf("Enter the input temperature unit (C for Celsius, F for Fahrenheit, K for Kelvin): ");
    scanf(" %c", &inputUnit);
    
    
    printf("Enter the output temperature unit (C for Celsius, F for Fahrenheit, K for Kelvin): ");
    scanf(" %c", &outputUnit);

    
    printf("Enter the temperature value: ");
    scanf("%f", &result);


    if (inputUnit == 'C' || inputUnit == 'c') {
        if (outputUnit == 'F' || outputUnit == 'f') {
            x=result;
            result = (x * 9 / 5) + 32; // Celcius to farehnheit
        } else if (outputUnit == 'K' || outputUnit == 'k') {
            x=result;
            result = x + 273.15; // celcius to kelvin
        } else {
            result = x; // Celsius to Celsius
        }
    } else if (inputUnit == 'F' || inputUnit == 'f') {
        if (outputUnit == 'C' || outputUnit == 'c') {
            x=result;
            result = (x - 32) * 5 / 9; // farenheit to celcius
        } else if (outputUnit == 'K'  || outputUnit == 'k') {
            x=result;
            result = (x - 32) * 5 / 9 + 273.15; // farenheit to kelvin
        } else {
            result = x; // Fahrenheit to Fahrenheit
        }
    } else if (inputUnit == 'K'  || inputUnit == 'k') {
        if (outputUnit == 'C' || outputUnit =='c') {
            x=result;
            result = x - 273.15; // kelvin to celcius
        } else if (outputUnit == 'F' || outputUnit == 'f') {
            x=result;
            result = (x - 273.15) * 9 / 5 + 32; // kelvin to farenheit
        } else {
            result = x; // Kelvin to Kelvin
        }
    } 
     // printing output
    printf("Converted temperature: %f %c \n", result, outputUnit);

printf("Thank you for using our AI-powered temperature converter");

return 0;

} // end main
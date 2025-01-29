#include <iostream>
using namespace std;

// Function to convert cm to meters
double cmToMeter(double cm) {
    return cm / 100.0;
}

// Function to convert meters to kilometers
double meterToKm(double meter) {
    return meter / 1000.0;
}

// Function to convert kg to grams
double kgToGram(double kg) {
    return kg * 1000.0;
}

// Function to convert grams to milligrams
double gramToMg(double gram) {
    return gram * 1000.0;
}

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    int choice;
    double value, result;

    cout << "Unit Conversion Program\n";
    cout << "1. cm to m\n";
    cout << "2. m to km\n";
    cout << "3. kg to g\n";
    cout << "4. g to mg\n";
    cout << "5. Celsius to Fahrenheit\n";
    cout << "6. Fahrenheit to Celsius\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the value to convert: ";
    cin >> value;

    switch (choice) {
        case 1: result = cmToMeter(value);
                cout << value << " cm = " << result << " meters\n";
                break;
        case 2: result = meterToKm(value);
                cout << value << " meters = " << result << " kilometers\n";
                break;
        case 3: result = kgToGram(value);
                cout << value << " kg = " << result << " grams\n";
                break;
        case 4: result = gramToMg(value);
                cout << value << " g = " << result << " milligrams\n";
                break;
        case 5: result = celsiusToFahrenheit(value);
                cout << value << " °C = " << result << " °F\n";
                break;
        case 6: result = fahrenheitToCelsius(value);
                cout << value << " °F = " << result << " °C\n";
                break;
        default: cout << "Invalid choice! Please enter a valid option.\n";
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// void checkCharacterType(char ch) {
//     if (ch >= 'A' && ch <= 'Z') {
//         cout << ch << " is an Uppercase Letter.\n";
//     } 
//     else if (ch >= 'a' && ch <= 'z') {
//         cout << ch << " is a Lowercase Letter.\n";
//     } 
//     else if (ch >= '0' && ch <= '9') {
//         cout << ch << " is a Digit.\n";
//     } 
//     else {
//         cout << ch << " is a Special Character.\n";
//     }
// }

// int main() {
//     char ch;
//     cout << "Enter a character: ";
//     cin >> ch;

//     checkCharacterType(ch);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// // Function to calculate sum using formula
// int sumUsingFormula(int n) {
//     return (n * (n + 1)) / 2;
// }

// // Function to calculate sum using loop
// int sumUsingLoop(int n) {
//     int sum = 0;
//     for (int i = 1; i <= n; i++) {
//         sum += i;
//     }
//     return sum;
// }

// int main() {
//     int n;
//     cout << "Enter a positive integer (N): ";
//     cin >> n;

//     if (n < 1) {
//         cout << "Please enter a positive integer greater than 0.\n";
//     } else {
//         cout << "Sum using formula: " << sumUsingFormula(n) << endl;
//         cout << "Sum using loop: " << sumUsingLoop(n) << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// // Function to check if a number is prime
// bool isPrime(int num) {
//     if (num < 2) return false;  // 0 and 1 are not prime numbers
//     if (num == 2 || num == 3) return true; // 2 and 3 are prime

//     // Check divisibility from 2 to sqrt(num)
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0)
//             return false;  // If divisible, not a prime number
//     }
//     return true;
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (isPrime(num))
//         cout << num << " is a Prime Number.\n";
//     else
//         cout << num << " is Not a Prime Number.\n";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// // Function to check if a number is a palindrome
// bool isPalindrome(int num) {
//     int original = num, reversed = 0, digit;
    
//     while (num > 0) {
//         digit = num % 10;          // Extract last digit
//         reversed = reversed * 10 + digit; // Build reversed number
//         num /= 10;                // Remove last digit
//     }

//     return original == reversed; // Compare original and reversed number
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (isPalindrome(num))
//         cout << num << " is a Palindrome.\n";
//     else
//         cout << num << " is Not a Palindrome.\n";

//     return 0;
// }

// #include <iostream>
// #include <cmath>  // For pow() function
// using namespace std;

// // Function to count digits in a number
// int countDigits(int num) {
//     int count = 0;
//     while (num > 0) {
//         count++;
//         num /= 10;
//     }
//     return count;
// }

// // Function to check if a number is an Armstrong number
// bool isArmstrong(int num) {
//     int original = num, sum = 0, digit;
//     int numDigits = countDigits(num); // Count the number of digits

//     while (num > 0) {
//         digit = num % 10;  // Extract last digit
//         sum += pow(digit, numDigits); // Add digit^numDigits to sum
//         num /= 10;  // Remove last digit
//     }

//     return original == sum; // Check if sum equals original number
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (isArmstrong(num))
//         cout << num << " is an Armstrong Number.\n";
//     else
//         cout << num << " is Not an Armstrong Number.\n";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// // Function to calculate GCD using Euclidean Algorithm
// int gcd(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

// // Function to calculate LCM using GCD
// int lcm(int a, int b) {
//     return (a * b) / gcd(a, b);
// }

// int main() {
//     int num1, num2;
    
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;

//     cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
//     cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm(num1, num2) << endl;

//     return 0;
// }
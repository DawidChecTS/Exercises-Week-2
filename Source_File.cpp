#include "Source_File.h"
#include <iostream>
#include <vector>
using namespace std;

/*
1. Hello World
Create a program with a new function. Name the method PrintMessage().

It should return the text: "Hello World!".
*/
void HelloWorld()
{
    cout << "Hello World!" << endl;
}

/*
2. The string joiner
The function should take two input parameters of type string, join them into a single string, and return the new value.

Call the new function from main and print the result to the screen.
*/

void theStringJoiner()
{
    string a;
    string b;
    cout << "Please give me first string: " << endl;
    cin >> a;
    cout << "Please give me the second string; " << endl;
    cin >> b;

    string combined = a + b;

    cout << "Your words combined are: " << combined << endl;
}

/*
3. Tax calculation
Create a function that calculates how much the VAT (sales tax) is for a given amount. 
The amount should be an input parameter of type float and the VAT percentage should be controlled by an Enum.

The function should return the VAT value.
*/

// Declare enums outside of the functions
enum VAT {salesTax = 25};

float taxCalculation(float amount)
{
    float calculatedVat = amount * (salesTax / 100.0);
    
    return calculatedVat;
}

/*
4. Doorman
Create a program where the user gets to enter their age.
Create a function that takes the entered value and checks if they are over 18. 
The function should return true or false;
*/

bool doorman(int userAge)
{
    if(userAge < 18)
    {
        return false;
    }
    else 
        return true;
}

/*
5. Professional yapper
Create a function named findLongestWord() that takes an input of array of strings. 
The function should return and print the longest word.
*/

string findLongestWork(string words[], int size){
    string longestWord = ""; // declare empty string

    // loop through the array
    for(int i = 0; i < size; i++)
    {
        // compare lenghts
        if (words[i].length() > longestWord.length()){
            longestWord = words[i];
        }
    }
    
    return longestWord;
}

/*
6. Are we Even, Steven?
Create a program where the user first enters how many numbers they want to enter,
then take these and store them in a vector. 
Create a function that checks if the number is even or odd and then returns the amount of even numbers.
*/

void areWeEvenSteven()
{
    vector<int> numbers;
    int userInput;

    cout << "Enter random numbers, enter 0 to stop: " << endl;
    while(cin >> userInput){ // loop the possibility to enter the number
        if (userInput == 0){break;} // if input is zero, stop
        numbers.push_back(userInput); // put the input into the vector
    }
    
    cout<< "Here comes the numbers that are even from the one you typed in: " << endl;

    // loop through the vector and print out what contains
    for (int i : numbers){
        int even = returnEvenNumbers(i);

        if (even != 0)
        {
            cout << i << " ";
        }
    }
}

int returnEvenNumbers(int i)
{
    if (i % 2 == 0)
    {
        return i;
    }
    else
    {
        return 0;
    }
}

// vector is a dynamic array - it can grow and shrink as you add or remove elements

/*
add element - numbers.push_back(10); - adds 10 to the end
remove last element - numbers.pop_back(); - removes the last element
access element - numbers[2] - accessing the third element
Size - numbers.size() - returns how many elements
Loop through - for(int x : numbers) {...} - range-based loop
*/

void vectorTraining()
{
    vector<int> numbers;
    int userInputInt;

    cout << "Enter the numbers to store in the vector; " << endl;
    cin >> userInputInt;
    numbers.push_back(userInputInt);

    for(int x : numbers)
    {
        cout << x << " " << endl;
    }
}

/*
8. By later calculations
Create a program that takes in two numbers and one operator (make sure to use error handling for I/O).

Create a function that takes the two numbers, operator and a callback function.
The operator should decide which operation to be performed and the callback function shall print out the result
*/

double add(double a, double b){
    return a + b;
}

double substract (double a, double b){
    return a * b ;
}

double division (double a, double b){
    return a / b;
}

double multiply (double a, double b){
    return a * b;
}

void printResult(double result){
    cout << "Result: " << result <<endl;
}

void calculate(double a, double b, string op){
    double result; 

    if (op == "+"){result = add(a,b);}
    else if (op == "-"){result = substract(a,b);}
    else if (op == "/"){result = division(a,b);}
    else if (op == "*"){result = multiply(a,b);}
    else {cout << "Wrong input!"<< endl;}

    printResult(result);
}

void byLaterCalculation()
{
    double userNumberOne;
    double userNumberTwo;
    string operatorChosen;

    cout << "Enter your first number: " << endl;
    cin >> userNumberOne;
    cout << "Enter your second number: " << endl;
    cin >> userNumberTwo;
    cout << "Choose the operator for the given numbers (+, -, /, *):" << endl;
    cin >> operatorChosen;

    calculate(userNumberOne, userNumberTwo, operatorChosen);
}

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
Create a function that takes the entered value and checks if they are over 18. The function should return true or false;
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
Create a function named findLongestWord() that takes an input of array of strings. The function should return and print the longest word.
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
then take these and store them in a vector. Create a function that checks if the number is even or odd and then returns the amount of even numbers.
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
    
    cout<< "Here comes the number you have typed in: " << endl;

    // loop through the vector and print outwhat contains
    for (int i : numbers){
        cout << i << " ";
    }
}
/*
  Write a "task03" program for basic adding. It should handle -f, -i and -v parameters
  task03 -f data.txt // outputs sum of numbers in data.txt
  task03 -i // interactive mode: sums numbers from standard input until empty input provided
  task03 4 7 12 // outputs sum of any number of arguments (23 in this case)
  implement verbose mode -v, which outputs additional info about arguments, i.e.
    task03 -f data.txt -v // should print "sum of numbers in data.txt is 13"
    task03 -v -f data.txt // same result
    task03 -v -i // should print like "sum of 7 numbers from standard input is 38"
    task03 2 2 13 6 -v // should print "sum of 4 arguments is 23"
    task03 -v 13 4 // should print "sum of 2 arguments is 17"
*/

#include <cstdio>
#include <cstring>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int findSumOfIntegers() 
{ 
    ifstream f; // to open the text file in read mode 
    f.open("data.txt"); 
      
    int sum = 0, num = 0; 
  
    // One by one read strings from file. Note that 
    // f >> text works same as cin >> text. 
    string text; 
    while (f >> text) { 
  
        // Move in row and find all integers 
        for (int i = 0; text[i] != '\0'; i++) { 
  
            // Find value of current integer 
            if (isdigit(text[i]))  
                num = 10 * num + (text[i] - '0');             
  
            // If other character, add it to the 
            // result 
            else { 
                sum += num; 
                num = 0; // and now replace 
                         // previous number with 0 
            } 
        } 
    } 
    sum += num; 
    return sum; 
} 
  
// Driver program to test above functions 
int main() 
{ 
    cout << findSumOfIntegers(); 
    return 0; 
} 

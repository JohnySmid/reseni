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




int main(int argc, char* argv[]) {
   
char stringa [5];
  printf ("cislo: ");
  gets (stringa);     // warning: unsafe (see fgets instead)
  ofstream myfile;
  myfile.open ("data.txt");
  myfile << stringa;
  myfile.close();
  
  
  

  //cteni z txt souboru pomoci loop C#
   string array[5]; // creates array to hold names
    short loop=0; //short for loop for input
    string line; //this will contain the data read from the file
    ifstream myfile1 ("data.txt"); //opening the file.
    if (myfile1.is_open()) //if the file is open
    {
        while (! myfile1.eof() ) //while the end of file is NOT reached
        {
            getline (myfile1,line); //get one line from the file
            array[loop] = line;
            cout << array[loop] << endl; //and output it
            loop++;
        }
        myfile1.close(); //closing the file
    }
    else cout << "Unable to open file"; //if the file is not open output
    system("PAUSE");

    
  return 0;
  
}

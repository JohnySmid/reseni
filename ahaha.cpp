#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{
    string array[5]; // creates array to hold names
    short loop=0; //short for loop for input
    string line; //this will contain the data read from the file
    ifstream myfile ("data.txt"); //opening the file.
    if (myfile.is_open()) //if the file is open
    {
        while (! myfile.eof() ) //while the end of file is NOT reached
        {
            getline (myfile,line); //get one line from the file
            array[loop] = line;
            cout << array[loop] << endl; //and output it
            loop++;
        }
        myfile.close(); //closing the file
    }
    else cout << "Unable to open file"; //if the file is not open output
    system("PAUSE");
    return 0;
}

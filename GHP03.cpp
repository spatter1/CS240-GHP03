/***************
* Basic Assignment (maximum 50 points)
*
* Page 249, Problem #2 adaptation - Query the user for the name of a file and then count and report the number of vowels (irrespective of case) found
* in the file. Treat the letter 'y' as a consonant.
*
* Alternate Assignment (maximum 60 points).
*
* Query the user for the name of a file. Open and process that file, reporting the number of words in the file and the number of words that begin with
* the letter d, irrespective of case. The input file for testing this assignment is posted on Blackboard.
*
* Written by Sean Patterson, including code adaptation from class handout read_string.cpp
* Using Code::Blocks IDE
* 10-8-2019
****************/



#include <string>
#include <iostream>
#include <fstream>
#include <cassert>
#include <cstdio>
#include <cstring>
using namespace std;

int main(void)
{
    int vowelCtr = 0,
        i = 0,
        j = 0,
        fileLen = 0,
        value = 0;
    string inputFileName;
    string s;
    ifstream fileIn;
    char ch;


// Introduce the program to the user

    cout << "This program will query the user for a file name.  The program will then open the file and count the vowels, reporting the vowel count to the user.\n" << endl;

// query user for the name of a file
    cout << "Please enter the name of the file to open: ";
    cin >> inputFileName;
    cout << "TEST: Filename is: "<< inputFileName;
// open the file
    fileIn.open(inputFileName.data());
// check to see if file is successfully opened
    assert(fileIn.is_open() );
    while(!(fileIn.eof()))
        {
         ch=fileIn.get();
         s.insert(i,1,ch);  //insert character at position
         i++;
        }
     cout<<"\n\nTEST: imported chars: "<<i<<endl;

    while (j<s.length())
    {
        value = s.find("a",j);
         cout<<"\nTEST: Value = "<<value<< " Counter = "<<vowelCtr<<endl;
         if(value<=s.length())
            {
                vowelCtr++;
                j=value+1;
            }
        else
        {
            break;
        }
    }

 //cout statements left in for testing
 cout<<"\nThe length of s is "<<s.length()<<endl;
 cout<<"The capacity of s is "<<s.capacity()<<endl;

 //report the number of vowels
 cout<<"There are "<<vowelCtr<<" vowels."<<endl;



    return 0;
}


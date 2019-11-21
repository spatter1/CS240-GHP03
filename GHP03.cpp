/***************
* CS240
* GHP03
*
* Alternate Assignment (maximum 60 points).
*
* Query the user for the name of a file. Open and process that file, reporting
* the number of words in the file and the number of words that begin with
* the letter d, irrespective of case. The input file for testing this assignment
* is posted on Blackboard.
*
* 1. Introduce the program to the user
* 2. query user for the name of a file
* 3. open the file
* 4. check to see if file is successfully opened
* 5. read file in to string
* 6. check to see if word begins with an alphabetical character, if so, check to see if the first character is d or D
* 7. if first character is not alpha, check to see if 2nd character begins with D or d
* 8. report to user the number of words beginning with D or d.
* 9. terminate program
*
* Written by Sean Patterson, including code adaptation from class handout read_string.cpp
* Using Code::Blocks IDE with G++ compiler on Windows 10
* 10-8-2019 (fixed and submitted on 11-20-19)
*
****************/



#include <string>
#include <iostream>
#include <fstream>
#include <cassert>
#include <cstring>
using namespace std;

int main(void)
{
    int dCtr = 0,           //declare and initialize: dword counter
        wCtr = 0;           //and word counter
    string inputFileName;   //Declare variables
    string s;               //for storage
    ifstream fileIn;        //and file handling



// Introduce the program to the user

    cout << "This program will query the user for a file name.  The program will then open the file and count"<<endl;
    cout << "the words beginning with D or d, reporting the total count of words and the words beginning with "<< endl;
    cout << "d or D to the user.\n" << endl;

// query user for the name of a file

    cout << "Please enter the name of the file to open: ";
    cin >> inputFileName;

// open the file

    fileIn.open(inputFileName.data());

// check to see if file is successfully opened

    assert(fileIn.is_open() );
    cout<<"\nFile "<<inputFileName<<" successfully opened.\n"<<endl;

// read file in to string

    while((fileIn.good()))
    {

                fileIn >> s;
                if(fileIn.eof()) break;

                wCtr++;

//check to see if word begins with an alphabetical character, if so, check to see if the first character is d or D

            if(isalpha(s[0]))
            {
            if((s[0]=='d') || (s[0]=='D'))
                {
                dCtr++;
                }
            }

//if first character is not alpha, check to see if 2nd character begins with D or d

            else if((s[1]=='d') || (s[1]=='D'))
                {
                    dCtr++;
                }

    }
//report to user the number of words beginning with D or d.

    cout<<"\nThere are a total of "<< wCtr <<" words."<<endl;
    cout<<"\nThere are "<<dCtr<<" words beginning with D or d."<<endl;

//terminate program

    return 0;
}


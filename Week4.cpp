// Week4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Week 4 focused on a deeper dive into loops in c++. This program in particular counts...
//...the amount of vowels in a file passed through the command line.

//update: github submission requires 3 more letters to be added

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>   //these are the only header files needed for this program

using namespace std; 

int main(int argc, char* argv[])  //#of parameters, array this is for command line
{

    if (argc < 2) // make sure at least 1 argument is passed through, 
                  //the 2 is so name included. set parameters
    {
        cout << "Arguments must be passed through. Error." << endl;

        return 0;
    }

    //for statment used i as variable because it is easy to rememberfor me right now
    for (int i = 0; i < argc; i++)
    {
        cout << i << "\n" << argv[i] << endl;
    }

    ifstream inFile; //take a file in to analyze

    inFile.open(argv[1]); //pass through the first argument

    if (!inFile) // make sure file doesnt fail
    {
     
        cout << "File failed to run. Error." << endl;

        return 0;
    }

    // print out initial welcome 
    
    cout << "*********************************************************\n"
        << "********** Welcome to my Letter Count Program! **********\n"
        << "*********************************************************\n" << endl;


    cout << "\n\nAnalyzing file '" << argv[1] << "'" << endl;  //inserts name of file into this
     

    //set up variables. Most should be int

    int Aa = 0, //all vowels and vowel count start at zero because at the beginning of... 
        Ee = 0, // ...a file, everything will be zero to be initalized
        Ii = 0,
        Oo = 0,
        Uu = 0,
        vowelCount = 0,
        
        Yy = 0,
        Rr = 0,
        Pp = 0;

    string c; // string used for work part of the program named c so it is easy to remember


    //I will be trying this with the while function
    //so while it is not end of file, the program will continue to run through each line

    while (!inFile.eof())
    {
        inFile >> c; //run argument through the string
        int i = 0;

        //for statement to get everything set up

        for (size_t i = 0 ; i < c.size(); i++)   //size_t is a custom data type that works in this instance
        {

            char ch = c[i];
            ch = toupper(ch);



            //for A both lowercase and uppercase
            if (ch == 'A' || ch == 'a')
            {
                Aa++;
                vowelCount++;
            }

            //for E both lowercase and uppercase
            else if ( ch == 'E' || ch == 'e')
            {
                Ee++;
                vowelCount++;
            }

            //for I both lowercase and uppercase
            else if (ch == 'I' || ch == 'i')
            {
                Ii++;
                vowelCount++;
            }

            //for O both lowercase and uppercase
            else if (ch == 'O' || ch == 'o')
            {
                Oo++;
                vowelCount++;
            }

            //for U both lowercase and uppercase
            else if (ch == 'U' || ch == 'u')
            {
                Uu++;
                vowelCount++;
            }

            //added for github submission. adding 3 more letters but will not be adding to vowel count

            else if (ch == 'Y' || ch == 'y')
            {
                Yy++;
            }

            else if (ch == 'R' || ch == 'r')
            {
                Rr++;
            }

            else if (ch == 'P' || ch == 'p')
            {
                Pp++;
            }




        }
   
    }

    //output the data

    const int FILL = 30;   //set these to constants for cleaner output when printing next statements
    const char CHAR = '.';

    cout << endl << endl; // creates two spaces for the info to print instead of \n
    cout << left << setw(FILL) << setfill(CHAR) << "The number of A's: " << Aa << endl;
    cout << left << setw(FILL) << setfill(CHAR) << "The number of E's: " << Ee << endl;
    cout << left << setw(FILL) << setfill(CHAR) << "The number of I's: " << Ii << endl;
    cout << left << setw(FILL) << setfill(CHAR) << "The number of O's: " << Oo << endl;
    cout << left << setw(FILL) << setfill(CHAR) << "The number of U's: " << Uu << endl;
    cout << left << setw(FILL) << setfill(CHAR) << vowelCount << endl;

    cout << left << setw(FILL) << setfill(CHAR) << "The number of Y's: " << Yy << endl;
    cout << left << setw(FILL) << setfill(CHAR) << "The number of R's: " << Rr << endl;
    cout << left << setw(FILL) << setfill(CHAR) << "The number of P's: " << Pp << endl;

    //initially had this set up with "right" instead of "left" worksbetter with left in this case


    system("pause");

  
    return vowelCount;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

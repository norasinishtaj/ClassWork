// Week6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Week 6 program is the first in which we work with arrays. The program shows the names of the bowling...
//...player and the scores they recieved. It will calculate the average and print out the results ...
//...in an organized fashion.

#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <fstream>

using namespace std;

//usually don't use global varibles but these will stay constant for everything
const int columns = 4,
rows = 10;

//input the file that gives the name of the player, and the score
//as well as a seperate variable for working with the data
//this is a bool, it will return either true or false
//this case will be true because if false, it didn't run properly

bool GetBowlingData(string filename,string playerName[rows], int playerScore[rows][columns])
{
   // read in file and make sure it opens
    
    ifstream newFile;

    newFile.open("BowlingScores.txt");
    if (newFile.fail())
    {
        cout << "File failed to open." << endl;

        return 0;
    }

    //read in file data for rows
    for (int i = 0; i < rows; i++)
    {

       newFile >> playerName[i];

    // read in data for columns
       for (int x = 0; x < columns; x++)
     {

           newFile >> playerScore[i][x];
       }
    }

    //good practice to make sure the file is closed
    newFile.close();

    return true;
}


//pretty print function to organize results
//can be void because no reutrn needed
void PrettyPrintResults(string playerName[rows], int playerScore[rows][columns], double average[])
{
    cout << "*************************************\n"
        << "Welcome to my Bowling League Program!\n"
        << "*************************************\n\n" << endl;

    int i,
        x;

    for (i = 0; i < rows; i++)
    {
        cout << playerName[i] << "\t"
            << "\n";

        for (x = 0; x < 4; x++)
        {
            cout << "" << playerScore[i][x] << endl;

        }

        cout << "\t" << average[i] << "\n\n";
    }

}

//function for finding average
//is a double because it will return a double
double GetAverageScore(int playerScore[rows][columns], double *avg)
{
    //set up variables
    int i,  // i is for rows
        x;  // x is for column
    double total = 0,
        average[rows];


    for (int i = 0; i < rows; i++)
    {
        total = 0;

        for (int x = 0; x < columns; x++)
        {
            total = total + playerScore[i][x];
        }

        *avg = total/4.0;
    }

    return 0;
}

int main()
{
    //set up variables
    string filename,
        playerName[rows];

    int playerScore[rows][columns] = { 0 };
    
    double average[rows] = { 0 };

    //main will print out all of these for each player.

    if (GetBowlingData(filename, playerName, playerScore))
    {
      
        GetAverageScore(playerScore, average);

        PrettyPrintResults(playerName, playerScore, average);


        return 0;
   }


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to adplayd existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


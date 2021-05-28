// WeekOne.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> //I know there is not string variable in this program but I do want to get in the habit 
//of including this, if this isn't a good idea let me know so I can adjust accordingly

using namespace std; //I put this up here because it helps me to visualize the code set up better

int main()
{
   cout << "******************************************************************\n"
     << "*******************Welcome to my first program!*******************\n" 
     << "Convert a large number of seconds into hours, minutes, and seconds.\n"
     << "******************************************************************\n" << endl;
   //all variables will be ints so it is okay to list them together and not rewrite int 

   int inputSecs, //user input seconds. represents large amount of seconds but could be any number
       minutes,
       seconds, //the output seconds
       hours;

   cout << "Please enter a large number of seconds: " << endl;

   cin >> inputSecs ; //user input is taken here

   //user input is 'maniputated' and put into math expressions below
   //Iused parenthesis in my work because that helps me to keep everything cleaner
   //Again if this is not advised, I take critique happily :) 

   hours = (inputSecs / 3600); //the amount of seconds in an hour

   minutes = (inputSecs - (3600 * hours)) / 60; //amount of secs in an hour divided by 60

   seconds = (inputSecs - (3600 * hours) - (minutes * 60)); //math to get seconds

   //equations and input are done
   //now have program output the math done 

   cout << "The number of hours in the number is: " << hours
       << "\nThe number of minutes in the number is: " << minutes
       << "\nThe number of seconds in the number is : " << seconds << endl;

   return 0; //always have a return in main 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 'or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// Week2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> 
#include <iomanip>

using namespace std;


int main()
{
    cout << "**********************************************************************\n"
        <<"********************Welcome to my Week 2 Assignment********************\n"
        <<"***********************************************************************\n\n" << endl;
    // This program is not vegan or lactose intolerant friendly
    // not all variables will be int this time so all variables and their types will be provided below

    int containers, 
        amountCheese; //cheese coontainers and amount cant be a float 
    
    double totalCost,
        totalProfit; //these need to be a double so decimals can be shown

    //declare constants, which in this case are 
    //the amount of cheese in container, cost, and profit

    const double cheesePerContainer = 2.76,
        costContainer = 4.12,
        profitContainer = 1.45;

    cout << "Please enter the total number of kilograms of cheese produced : ";
    cin >> amountCheese; //provides input from user to get kilos of cheese

    //calculations for the output
    containers = amountCheese / cheesePerContainer + 1;
    totalCost = (containers * costContainer);
    totalProfit = (containers * profitContainer);


    //delevop string for outputs so can properly fit into columns


    string sNumContainers = "The number of containers to hold the cheese is: " ;
    string sCost = "The cost of producing ";
    string sCost2 = " container(s) of cheese is: ";
    string sProfit = "The profit from producing ";

    //outputs, include columns test to see how it works
    //set the width to get it all in the correct positon, set fill with aspace
        cout << sNumContainers << right << setw(25) << setfill(' ') << containers << endl;

        cout << sCost << containers << sCost2 
            << right << '$' << setw(19) << setfill(' ') << totalCost << endl;
       
        cout << sProfit << containers << sCost2 
            << right << '$' << setw(15) << setfill(' ') <<totalProfit <<endl;
         
//I messed with the setprecision option for quite a while trying to get the output of 191.40 
// to not be "191.4" but I couldn't figure it out.
        //I removed it in my working code but will provide what I have below commented out
        //I would appreciate some tips on how to go about this better next time
        //Thanks in advance!!!
     /*   cout << sCost << containers << sCost2
            << right << '$' << setw(19) << setfill(' ') << setprecision(5) << totalCost << endl;

        cout << sProfit << containers << sCost2
            << right << '$' << setw(15) << setfill(' ') << setprecision(5) << totalProfit << endl;*/

        return 0;

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

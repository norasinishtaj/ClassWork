// Week5.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
// This week we are working with adding functions to the program outside of main. 
// The program is directing us through a surf shop menu, allowing for different selections for...
// ...different requests of the user.
//

//xxxsmall added for github submission

#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

//insert functions.
// it is best if the functions go before main
// void functions don't have a return
//a function to show the user how to use the program
void ShowUsage()
{
    //this is just to output text, not "real work" will be done in this function
    cout << "To show program useage press 'S'\n"
        << "To purchase a surfboard press 'P'\n"
        << "To display current purchase press 'C'\n"
        << "To display total amount due press 'T'\n"
        << "To quit the program press 'Q'\n" << endl;

}

//function to sell surfboards
void MakePurchase(int& iTotalSmall, int& iTotalMedium, int& iTotalLarge, int& iTotalXXXSmall)
{
    //using local variables to this functions
    //set up variables
    int quantity;
    char size;

    //initalize
    quantity = 0;
    size = '0'; //this is the character 0 not the number because it is char
    iTotalSmall = 0;
    iTotalMedium = 0;
    iTotalLarge = 0;
    iTotalXXXSmall = 0;

    cout << "Please enter the quantity of the surfboard you would like to purchase: " << endl;
     
    cin >> quantity;

    cout << "Please enter the type(S = small, M = medium, L = large) of surfboard you would like to purchase: ";

    cin >> size;


    if (size == 's' 
        || size == 'S')
    {

        iTotalSmall = iTotalSmall + quantity; //get total number of small
    }
    else if (size == 'm'
        || size == 'M')
    {

        iTotalMedium = iTotalMedium + quantity;

    }
    else if (size == 'l' 
        || size == 'L')
    {

        iTotalLarge = iTotalLarge + quantity;

    }
    else if (size == 'xxxs'
        || size == 'xxxs')
    {
       
        iTotalXXXSmall = iTotalXXXSmall + quantity;

    }
//void function no return needed
}

//function to show the number of surfboards of each size sold
void DisplayPurchase(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalXXXSmall)
{
    if (iTotalSmall != 0)
    {
        cout << "The total number of small surfboards is "
            << iTotalSmall << endl;
    }

    //no else if this time because can be multiple

    if (iTotalMedium != 0)
    {
        cout << "The total number of medium surfboards is "
            << iTotalMedium << endl;
    }


    if (iTotalLarge != 0)
    {
        cout << "The total number of large surfboards is "
            << iTotalLarge << endl;
    }

    if (iTotalXXXSmall != 0)
    {
        cout << "The total number of xxx small surfboards is "
            << iTotalXXXSmall << endl;

    }
    //void so no return needed
}

//function to show the total amount of money made
void DisplayTotal(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalXXXSmall)
{
    //same if structure as above function
    //set up variables for this function
    double totalSmall,
        totalMedium,
        totalLarge,

        totalXXXSmall,

        totalCost1,
        totalCost2,
        totalCost3,
        totalCost4;
    
    //learned from last week how useful const values were
    //cost of sizes wont change so use const
    const double costSmall = 175.00;
    const double costMedium = 190.00;
    const double costLarge = 200.00;
    const double costXXXSmall = 30.00;

    //initalize rest of the variables
    totalSmall = 0;
    totalMedium = 0;
    totalLarge = 0;

    totalXXXSmall = 0;

    totalCost1 = 0;
    totalCost2 = 0;
    totalCost3 = 0;
    totalCost4 = 0;

    if (iTotalSmall != 0)
    {
        //math needed
        totalSmall = iTotalSmall * costSmall;

        cout << "The total number of small surfboards is " << iTotalSmall
            << " at a total of $ " << fixed << setprecision(2) << totalSmall << endl;

        totalCost1 = totalCost1 + totalSmall;
    }

    if (iTotalMedium != 0)
    {
        //math needed
        totalMedium = iTotalMedium * costMedium;

        cout << "The total number of medium surfboards is " << iTotalMedium
            << " at a total of $ " << fixed << setprecision(2) << totalMedium << endl;

        totalCost2 = totalCost2 + totalMedium;
    }

    if (iTotalLarge != 0)
    {
        //math needed
        totalLarge = iTotalLarge * costLarge;

        cout << "The total number of large surfboards is " << iTotalLarge
            << " at a total of $ " << fixed << setprecision(2) << totalLarge << endl;

        totalCost3 = totalCost3 + totalLarge;
    }

    if (iTotalXXXSmall != 0)
    {
        //math needed
        totalXXXSmall = iTotalXXXSmall * costXXXSmall;

        cout << "The total number of xxx small surfboards is " << iTotalXXXSmall
            << " at a total of $ " << fixed << setprecision(2) << totalXXXSmall << endl;

        totalCost4 = totalCost4 + totalXXXSmall;
    }


    //print out total amount due after all of the math from three if statments above
    double finalTotal = totalCost1 + totalCost2 + totalCost3 + totalCost4;
    cout << "Amount due: $ " << fixed << setprecision(2) << finalTotal << endl;
}


//MAIN STARTS

int main() //not messing with main this time. MOST of the work should be carried through with functions
{
    //set up variables needed
    const double costSmall = 175.00; 
    const double costMedium = 190.00;
    const double costLarge = 200.00;
    const double costXXXSmall = 30.00;

    int quantity, // local variable from functions above must be brought down into main
        totalSmallQuantity,
        totalMediumQuantity,
        totalLargeQuantity,
        totalXXXSmallQuantity;
    char userAction,
        size; // local variables from functions above must be brough down into main

    //intialize totalSizeQuatities
    totalSmallQuantity = 0;
    totalMediumQuantity = 0;
    totalLargeQuantity = 0;

    //output welcome to 
    cout << "************************************************************\n"
         << "***** Welcome to my Johnny Utah's PointBreak Surf Shop *****\n"
         << "************************************************************\n\n" << endl;

    //void function from up top will display here
    ShowUsage();
   
    //request input from user
    cout << "Please enter selection: " << endl;
    
    cin >> userAction;

    //while loop to push out requests that arent quit
    while(userAction != 'q' 
        && userAction != 'Q')
    {
        if (userAction == 's'
            || userAction == 'S')
        {
            ShowUsage();
        }
        
        else if (userAction == 'p'
               || userAction == 'P')
        {
            MakePurchase(totalSmallQuantity,
                totalMediumQuantity,
                totalLargeQuantity,
                totalXXXSmallQuantity);
            // we will be using the variables from in the main to fit into the parameters of the function
        }

        else if (userAction == 'c'
                || userAction == 'C')
        {
            //ensure a purchase is made with this nested loop
            if (totalSmallQuantity == 0
                && totalMediumQuantity == 0
                && totalLargeQuantity == 0
                && totalXXXSmallQuantity== 0)
            {
                cout << "Purchase not made. Return to menu." << endl;
            }
            else
            {
                DisplayPurchase(totalSmallQuantity,
                    totalMediumQuantity,
                    totalLargeQuantity,
                    totalXXXSmallQuantity);
            }

        }

        else if (userAction == 't'
                  || userAction == 'T')
        {
            //ensure a purchase is made
            if (totalSmallQuantity == 0
                && totalMediumQuantity == 0
                && totalLargeQuantity == 0
                && totalXXXSmallQuantity == 0)
            {
                cout << "Purchase not made. Return to menu." << endl;
            }
            else
            {
                DisplayTotal(totalSmallQuantity,
                    totalMediumQuantity,
                    totalLargeQuantity,
                    totalXXXSmallQuantity);
            }

        }
   
        else
        {
            cout << "Invalid entry. Try again." << endl;
        }


        system("pause");


        //continue to make this loop through until user enters q to quit

        cout << "Please enter selection: " << endl;

        cin >> userAction;

    }

    //exit text
    cout << "\nThank you!" << endl;

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

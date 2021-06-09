// Week3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <cassert>
#include <cmath> //not sure if these two are needed for code yet but I'm including it...
//.. for now just incase I use it and forget to include this here

#include <fstream> //use for creating and reading files for order.txt at end

using namespace std;


int main()
{
    //set up variables and data types to work with 
    //item name, if fragile, order total, destination to start with, may add more later

    string itemName,
        destination,
        fragile;

    double orderTotal,
        itemCost,   //itemCost and shipCost added as doubles because needed for output and calculations
        shipCost;

    //set up initial output for the program to instruct user to put in inputs

    cout << "..............................................\n"
        << "ITCS 2530 - Programming Assignment for Week 3\n"
        << "..............................................\n\n" << endl;

    //ask for input on name and if fragile
    cout << "Please enter the item name (no spaces)........:";

    cin >> itemName;

    cout << "Is the item fragile? ( y=yes / n=no)..........:";

    cin >> fragile;

    //make sure user types in y or n or code invalid

    if (fragile != "n" 
        && fragile != "y"  //lowercase if fragile not n or y
        && fragile != "N" 
        && fragile != "Y") //uppercase if fragile not N or Y
    {
        cout << "Sorry, that entry is invalid! Exiting the program.\n" << endl;

        return 0;
    }
    //first if statement done, move on to recieving the rest of the inputs

    //inputs cont. order total and detination

    cout << "Please enter your order total.................:";

    cin >> orderTotal;

    cout << "Please enter destination. (usa/can/aus/mars)..:";

    cin >> destination;

    //again make sure entry is valid

    if (destination != "usa" 
        && destination != "can" 
        && destination != "aus"
        && destination != "USA" // include all capitals as well
        && destination != "CAN" 
        && destination != "AUS"
        && destination != "mars" //added for github assignment
        && destination != "MARS"
        )
    {
        cout << "Sorry, that entry is invalid! Exiting the program.\n" << endl;

        return 0;
    }

    // all inputs are gathered, time for executions 
    // use chart provided by professor for values and prices

    itemCost = orderTotal; 

    shipCost = 0.00; //inital shipping is 0

    if (fragile == "y"
        || fragile == "Y")
    {
        shipCost = 2.00; //+2 if item is fragile
    }

    //start nested with order prices and different destinations

    if (orderTotal <= 50.00) //under 50.00
    {
       //for USA
        if (destination == "usa"
            || destination == "USA")
        {
            destination = "USA";
            shipCost = (shipCost + 6.00);
            itemCost = (itemCost + shipCost);
        }
        
        //canada
        if (destination == "can"
            || destination == "CAN")
        {
            destination = "CAN";
            shipCost = (shipCost + 8.00);
            itemCost = (itemCost + shipCost);
        }

        //aussie aussie aussie oi oi oi
        if (destination == "aus"
            || destination == "AUS")
        {
            destination = "AUS";
            shipCost = (shipCost + 10.00);
            itemCost = (itemCost + shipCost);
        }


        //if mars
        if (destination == "mars"
            || destination == "MARS")
        {
            destination = "Mars";
            shipCost = (shipCost + 50.00);
            itemCost = (itemCost + shipCost);
        }
    
    }

    // for 50-100
    else if (orderTotal > 50.00
        && orderTotal <= 100.00)
    {
        //for USA
        if (destination == "usa"
            || destination == "USA")
        {
            destination = "USA";
            shipCost = (shipCost + 9.00);
            itemCost = (itemCost + shipCost);
        }

        //canada
        if (destination == "can"
            || destination == "CAN")
        {
            destination = "CAN";
            shipCost = (shipCost + 12.00);
            itemCost = (itemCost + shipCost);
        }

        //aussie aussie aussie oi oi oi
        if (destination == "aus"
            || destination == "AUS")
        {
            destination = "AUS";
            shipCost = (shipCost + 14.00);
            itemCost = (itemCost + shipCost);
        }
        //if mars
        if (destination == "mars"
            || destination == "MARS")
        {
            destination = "Mars";
            shipCost = (shipCost + 100.00);
            itemCost = (itemCost + shipCost);
        }
    }
    // for 100-150
    else if (orderTotal > 100.00
        && orderTotal <= 150.00)
    {
        //for USA
        if (destination == "usa"
            || destination == "USA")
        {
            destination = "USA";
            shipCost = (shipCost + 12.00);
            itemCost = (itemCost + shipCost);
        }

        //canada
        if (destination == "can"
            || destination == "CAN")
        {
            destination = "CAN";
            shipCost = (shipCost + 15.00);
            itemCost = (itemCost + shipCost);
        }

        //aussie aussie aussie oi oi oi
        if (destination == "aus"
            || destination == "AUS")
        {
            destination = "AUS";
            shipCost = (shipCost + 17.00);
            itemCost = (itemCost + shipCost);
        }

        //if mars
        if (destination == "mars"
            || destination == "MARS")
        {
            destination = "Mars";
            shipCost = (shipCost + 150.00);
            itemCost = (itemCost + shipCost);
        }
    }
    
    // for 150+
    else if (orderTotal > 150.00)
    {
        //for USA
        if (destination == "usa"
            || destination == "USA")
        {
            destination = "USA";
            shipCost = 0.00;
            itemCost = (itemCost + shipCost);
        }

        //canada
        if (destination == "can"
            || destination == "CAN")
        {
            destination = "CAN";
            shipCost = 0.00;
            itemCost = (itemCost + shipCost);
        }

        //aussie aussie aussie oi oi oi
        if (destination == "aus"
            || destination == "AUS")
        {
            destination = "AUS";
            shipCost = 0.00;
            itemCost = (itemCost + shipCost);
        }

        //if mars
        if (destination == "mars"
            || destination == "MARS")
        {
            destination = "Mars";
            shipCost = 0.00;
            itemCost = (itemCost + shipCost);
        }
    }

    //return outputs and calculations
    //this section will output to the console 

     
    cout << "\n\nYour item is......................:" << itemName << endl;
    cout << "\nYour shipping cost is.............:" << fixed << setprecision(2) << shipCost << endl;
    cout << "\nYou are shipping to...............:" << destination << endl;
    cout << "\nYour total shipping costs are.....:" << fixed << setprecision(2) << itemCost << endl;
    cout << "\n\n----------------------------------Thank You!\n" << endl;
    ;
    

    // get c++ to also create a txt file of output
    // doing this seperate to the console output because I was struggling to have it output to both correctly
    // only way it printed correctly was this way
    // used these websites as reference as well as the week 2 videos
    // tutorialspoint.com/how-to-read-a-text-file-with-cplusplus
    // w3schools.com/cpp/cpp_files.asp#:~:text=Create%20and%20Write%20To%20a,insertion%20operation%20(%20<<%20).

  
    ofstream newfile; //create and open txt file
    newfile.open("Order.txt");
    if (newfile.fail()) //attempt to open output file
    {
        return 0;
    }

    //write the file
   newfile << "\n\nYour item is......................:" << itemName << endl;
   newfile << "\nYour shipping cost is.............:" << fixed << setprecision(2) << shipCost << endl;
   newfile << "\nYou are shipping to...............:" << destination << endl;
   newfile << "\nYour total shipping costs are.....:" << fixed << setprecision(2) << itemCost << endl;
   newfile << "\n\n----------------------------------Thank You!\n" << endl;
    ;
    //close the file
   newfile.close();


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

/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on July 4, 2017, 6:45 PM
 * Purpose:  Magic Month
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int month, day, year, magic;
    
    //Map inputs to outputs or process the data
    
    cout << "Please enter a month in numeric form" << endl;
    cin >> month;

    cout << "Please enter a day" << endl;
    cin >> day;

    cout << "Please enter a year" << endl;
    cin >> year;

    magic = (month * day);//month and day must equal to year
    
    //Output the transformed data
    
    if (magic == year)
{
    cout << "It's magic!! :) " << endl;;
}
    else
    cout << "It's not magic :( " << endl;
    
    //Exit stage right!
    return 0;
}


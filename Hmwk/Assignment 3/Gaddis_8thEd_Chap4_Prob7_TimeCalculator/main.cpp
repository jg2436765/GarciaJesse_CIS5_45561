/* 
   File:   main
   Author: Jesse Garcia
   Created on July 2, 20167 9:27 PM
   Purpose:  Time Calculator
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int numSec = 0;
    int numMin = 0;
    int numHrs = 0;
    int numDays = 0;
    float tempSec;
    
    //Input values
    cout << "Enter the number of seconds " <<endl;
    cin >> numSec;
    
    numDays = numSec / 86400;//calculate days
    
    tempSec = numSec % 86400;//how many seconds are left
    
    numHrs = tempSec / 3600;//calculate hours
    
    tempSec = numSec % 3600;//how many seconds are left
    
    numMin = tempSec / 60;//calculate minutes
    
    tempSec = numSec % 60;//left over seconds
    
    
    
    //Process values -> Map inputs to Outputs
    
    //Display Output
    cout<<numSec<<" seconds = " << numDays << " days, " << numHrs << " hours, "
            << numMin << " minutes, and " << tempSec << "seconds.\n";

    //Exit Program
    return 0;
}
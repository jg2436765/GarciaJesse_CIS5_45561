/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on July 9, 2017, 11:29 PM
 * Purpose:  Calories Burned
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
    int min;//minutes
    const float CAL = 3.6;//calories per minute
    
    //Initialize variables
    
    //Input data
    cout<<"Calculate how many calories you will burn";
    cout<<" while running on a treadmill."<<endl;
    cout<<"This program will display calories burned per every 5 minutes"<<endl;
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    for ( min = 5; min <= 30; min += 5 )
    {
        cout<<"In the first 5 minutes "<<CAL*min<<" were burned."<<endl;
        min += 5;
        cout<<"In 10 minutes "<<CAL*min<<" were burned."<<endl;
        min += 5;
        cout<<"In 15 minutes "<<CAL*min<<" were burned."<<endl;
        min += 5;
        cout<<"In 20 minutes "<<CAL*min<<" were burned."<<endl;
        min += 5;
        cout<<"In 25 minutes "<<CAL*min<<" were burned."<<endl;
        min += 5;
        cout<<"In 30 minutes "<<CAL*min<<" were burned."<<endl;
        min += 5;
    }
    
    //Exit stage right!
    return 0;
}


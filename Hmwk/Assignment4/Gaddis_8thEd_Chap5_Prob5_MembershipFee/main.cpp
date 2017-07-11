/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on July 9, 2017, 11:52 PM
 * Purpose:  Country Club Membership
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
    int years;
    float totFee = 2500.0;//membership fee plus the rate added on
    int membshp = 2500.0;//membership fee
    const float RATE = 0.04;//interest rate

    //Initialize variables
    
    cout<<"The annual membership fee $ "<<membshp<<" will increase 4 percent for";
    cout<<" the following 6 years."<<endl;
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    for (years=1;years<=6;years++)
    {
        float FEE = 2500.0;//membership fee
        
        totFee += (FEE * 0.04);
        cout<<"The membership fee is "<<totFee;
        cout<<" Year = "<<years<<endl;
        
        
    }
    
    //Exit stage right!
    return 0;
}


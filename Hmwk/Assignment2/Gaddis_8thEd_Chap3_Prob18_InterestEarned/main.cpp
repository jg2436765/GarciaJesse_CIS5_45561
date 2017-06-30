
/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 *
 * Created on June 29, 2017, 3:44 PM
 * Purpose: Interest Earned
 * 
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <cmath>
#include <iomanip>
using namespace std; //Libraries using namespace standard

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float Rate;//Interest rate
    float TmsCmpd;//Times compounded = 12
    float Prcpl;//Balance in the bank
    float Int;//Interest earned
    float AmtSvng;//Total amount gained after interest
    
    //Input data values
    Rate = 0.0425;
    TmsCmpd = 12.0f;
    Prcpl = 1000.0f;
    
    //Process the inputs
    float temp = pow(1 + Rate/TmsCmpd, 12);
    
    AmtSvng = Prcpl * temp;
    
    Int =static_cast<int>(AmtSvng) - Prcpl;
    
    
    //Output the results
    cout<<"Interest rate: "<<Rate<<"%"<<endl;
    cout<<"Times Compounded: "<<TmsCmpd<<endl;
    cout<<"Principal: $ "<<Prcpl<<endl;
    cout<<"Interest: $"<<Int<<endl;
    cout<<"Amount in Savings: $"<<AmtSvng<<endl;
    
    //Exit stage right
    return 0;
}


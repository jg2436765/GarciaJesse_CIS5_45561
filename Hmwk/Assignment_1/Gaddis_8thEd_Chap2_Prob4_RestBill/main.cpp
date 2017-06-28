
/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 *
 * Created on June 25, 2017, 7:19 PM
 * Purpose: Restaurant Bill
 * 
 */

//System Libraries
#include <iostream>  //Input/output Library
using namespace std; //Libraries using namespace standard

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float MlCost;//Meal cost
    float TaxAmt;//Tax Amount
    float TipAmt;//Tip Amount
    float TtlBill;//Total Bill
    float Tax;//Total amount of tax
    float Tip;//In percent
    
    //Input data values
    MlCost=88.67f;
    Tax=0.0675f;
    Tip=0.20f;
    
    //Process the inputs
    TaxAmt=MlCost*Tax;
    TipAmt=(TaxAmt+MlCost)*Tip;
    TtlBill=TipAmt+TaxAmt+MlCost;
    
    //Output the results
    cout<<"The tax amount is = $"<<TaxAmt<<endl;
    cout<<"The tip amount is = $"<<TipAmt<<endl;
    cout<<"The total bill after taxes and tip is = $"<<TtlBill<<endl;
    
    //Exit stage right
    return 0;
}


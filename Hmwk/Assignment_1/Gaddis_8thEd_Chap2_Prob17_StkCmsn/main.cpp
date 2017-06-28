
/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 *
 * Created on June 25, 2017, 8:12 PM
 * Purpose: Stock Commission
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
    float AmtStck;//Amount for stock
    float CmsnChg;//Commission charged
    float TtlPaid;//Total amount paid for stock plus commission
    float Cmsn;
    
    //Input data values
    AmtStck=26250.00f;
    Cmsn=0.20f;
    
    //Process the inputs
    CmsnChg=AmtStck*Cmsn;
    TtlPaid=AmtStck+CmsnChg;
    
    //Output the results
    cout<<"Amount paid for the shares alone = $ "<<AmtStck<<endl;
    cout<<"Amount paid for the commission = $ "<<CmsnChg<<endl;
    cout<<"The total amount paid = $ "<<TtlPaid<<endl;
    
    //Exit stage right
    return 0;
}


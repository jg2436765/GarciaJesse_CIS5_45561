/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on June 27, 2017, 12:16 PM
 * Purpose:  Monthly Payments
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float r;//Interest Rate
    float N;//Number of compounding periods
    float L;//Loan amount
    float P;//Monthly payments
    
    //Input or initialize values Here
    r=0.01f;//Interest rate in a year
    N=36;//In months
    L=10000.00f;//Total loan amount
    
    //Process/Calculations Here
    float temp=pow(1+r,N);//(1+r)^N
    P=r*temp*L/(temp-1);//((r*(1+r)^N)*L)/((1+r)^N-1)
    P=static_cast<int>(P*100)/100.0f;
   
    //Output Located Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The monthly payments of this loan";
    cout<<" are going to be = $ "<<P<<endl;

    //Exit
    return 0;
}


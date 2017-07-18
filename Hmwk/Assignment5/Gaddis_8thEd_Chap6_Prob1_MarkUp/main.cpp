/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on July 16, 2017, 10:24 PM
 * Purpose:  Retail Price
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void calculateRetail(float,float,float);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float whlsale;
    float mrkup;
    float pRetail;
    
    //Initialize variables
    cout<<"Enter the items whole sale price: ";
    cin>>whlsale;
    cout<<"Enter the items mark up % : ";
    cin>>mrkup;
    
    //Call calculateRetail function
    calculateRetail(whlsale,mrkup,pRetail);
    
    //Exit stage right!
    return 0;
}
void calculateRetail(float whlsale,float mrkup,float pRetail){
    //Calculations
    pRetail = whlsale * (mrkup/100) + whlsale;
    
    //Retail price 
    cout<<"The Retail Price of this item is $ "<<pRetail<<endl;
}
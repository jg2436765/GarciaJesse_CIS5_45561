/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on June 21, 2017, 6:11 PM
 * Purpose: Total Purchase 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float FstItm=15.95f;//$15.95 for the first item
    float ScndItm=24.95f;//$24.95 for the second item
    float ThrdItm=6.95f;//$6.95 for the third item
    float FrthItm=12.95f;//$12.95 for the fourth item
    float FthItm=3.95f;//$3.95 for the fifth item 
    float SbtSle=64.75;//Subtotal of purchase in $'s
    float totTax;//Total amount of sales tax
    float totAmt;//Total amount of purchase with sales tax included
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    totAmt=SbtSle+totTax;
    totTax=4.53;
    
    //Output the transformed data
    cout<<"The sales tax is 7%"<<endl;
    cout<<"Subtotal of sale = $"<<SbtSle<<endl;
    cout<<"Total amount of sales tax = $"<<totTax<<endl;
    
    //Exit stage right!
    return 0;
}


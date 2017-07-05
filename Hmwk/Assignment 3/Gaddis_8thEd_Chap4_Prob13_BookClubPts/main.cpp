/* 
   File:   main
   Author: Jesse Garcia
   Created on July 2, 2017, 11:52 AM
   Purpose:  Club Book Points
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
    int pBooks;//books purchased
    
    //Input values
    cout<<"Enter the amount of books purchased within a month "
            <<"to determine the points awarded. ";
    cin>>pBooks;
    
    //Process values -> Map inputs to Outputs
    if (pBooks == 0)
        cout<<"Zero books purchased, zero points earned. ";
    else if (pBooks == 1)
        cout<<"One book purchased earns 5 pts reward. ";
    else if (pBooks == 2)
        cout<<"Two books purchased earns 15 pts reward. ";
    else if (pBooks == 3)
        cout<<"Three books purchased earns 30 pts reward. ";
    else if (pBooks >= 4)
        cout<<"Four books or more purchased earns 60 pts reward. ";
    
    
    //Display Output

    //Exit Program
    return 0;
}
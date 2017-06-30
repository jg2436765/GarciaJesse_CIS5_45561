
/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 *
 * Created on June 28, 2017, 11:00 PM
 * Purpose: Stadium Seating
 * 
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <iomanip>
using namespace std; //Libraries using namespace standard

//User Libraries

//Global Constant

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables,
    float ClassA, ClassB, ClassC, total;
    int ticketA, ticketB, ticketC;
    
    ClassA = 15.00;//Seat cost $15
    ClassB = 12.00;//Seat cost $12
    ClassC = 9.00;//Seat cost $9
    
    //Input data values
    
    //Process the inputs
    cout<<"Enter the number of tickets was sold for Class A: ";
    cin>>ticketA;
    cout<<endl;
    cout<<"Enter the number of tickets was sold for Class B: ";
    cin>>ticketB;
    cout<<endl;
    cout<<"Enter the number of tickets was sold for Class C: ";
    cin>>ticketC;
    cout<<endl;
    
    //Output the results
    total = ticketA * ClassA;
    cout<<setprecision(2)<<fixed;
    cout<<"Total profit of tickets for Class A is = $ "<<total<<endl;
    
     total = ticketB * ClassB;
    cout<<setprecision(2)<<fixed;
    cout<<"Total profit of tickets for Class B is = $ "<<total<<endl;
    
     total = ticketC * ClassC;
    cout<<setprecision(2)<<fixed;
    cout<<"Total profit of tickets for Class C is = $ "<<total<<endl;
    
    //Exit stage right
    return 0;
}


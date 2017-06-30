
/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 *
 * Created on June 19, 2017, 11:21 AM
 * Purpose: Ingredient Adjuster
 * 
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <iomanip>
using namespace std; //Libraries using namespace standard

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float CS;//cups of sugar
    float CB;//cups of butter
    float CF;//cups of flower
    float nCD;//number of cookies desired
    
    //Input data values
    cout<<"Enter the Number of Cookies desired: ";
    cin>>nCD;
    
    //Process the inputs
    CS = nCD * 1.5/48;
    
    CB = nCD * 1/48;
    
    CF = nCD * 2.75/48;
    
    //Output the results
    cout<<setprecision(3)<<endl;
    cout<<"Cups of Sugar needed = "<<CS<<setprecision(3)<<endl;
    cout<<"Cups of Butter needed = "<<CB<<setprecision(3)<<endl;
    cout<<"Cups of Flower needed = "<<CF<<setprecision(3)<<endl;
    
    //Exit stage right
    return 0;
}


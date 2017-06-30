
/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 *
 * Created on June 29, 2017, 8:11 PM
 * Purpose: Calculate the average test score
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
    int Avrg;
    float Test1,Test2,Test3,Test4,Test5;
    
    //Input data values
    cout << "Enter the first test score: ";
    cin >> Test1;
    cout<<endl;
    cout << "Enter the second test score: ";
    cin >> Test2;
    cout<<endl;
    cout << "Enter the third test score: ";
    cin >> Test3;
    cout<<endl;
    cout << "Enter the fourth test score: ";
    cin >> Test4;
    cout<<endl;
    cout << "Enter the fifth test score: ";
    cin >> Test5;
    cout<<endl;
    
    //Process the inputs
    Avrg = (Test1 + Test2 + Test3 + Test4 + Test5) / 5.0;
    
    //Output the results
    cout<<"The average test score is "<<setprecision(1)<<Avrg<<endl;
    
    //Exit stage right
    return 0;
}


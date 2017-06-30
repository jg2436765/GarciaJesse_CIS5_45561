
/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 *
 * Created on June 29, 2017, 5:21 PM
 * Purpose: Random Number
 * 
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std; //Libraries using namespace standard

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
int A, B, C;
unsigned seed = time(0);
srand(seed);

//Display the output
cout << "Hello, Welcome to Math Tutor " << endl;
cout << "I will be helping you learn addition today." << endl;
cout << "I will display two random numbers,";
cout << "try and solve for the answer."<<endl;

A = 1 + rand() % 150;
B = 1 + rand() % 150;
C = A + B;

cout << "\n";
cout << A << " + " << B << " = " << endl;
cin.get();
cout << A << " + " << B << " = " << C << endl;
    //Exit stage right
    return 0;
}



/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 *
 * Created on July 1, 2017, 9:35 PM
 * Purpose: Math Tutor
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
cin>>C;
cout << A << " + " << B << " = " << C << endl;

if (C == A + B)
{    
    cout<<" Congratulations! You got the correct answer! ";
}    
else 
{    
    cout<<" You got the wrong answer. ";
}
    //Exit stage right
    return 0;
}


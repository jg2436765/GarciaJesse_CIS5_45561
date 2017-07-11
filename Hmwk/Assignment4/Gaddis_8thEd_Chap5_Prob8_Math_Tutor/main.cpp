
/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 *
 * Created on July 10, 2017, 1:20 PM
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
int A, B, C, D, E;
unsigned seed = time(0);
srand(seed);
char problem;

//Display the output

cout << "Hello, Welcome to Math Tutor " << endl;
cout << "I will be helping you learn Addition A: "<<endl;
cout << "Subtraction B: "<<endl;
cout << "Multiplication C: "<<endl;
cout << "Division D: "<<endl;
cout << "Or end program with E. "<<endl;
cout << "I will display two random numbers,";
cout << "try and solve for the answer."<<endl;
cout << "Input the type of problem you want to solve. ";
        cin>>problem;        
        
//Addition
           //Initialize variables
              A = 1 + rand() % 150;
              B = 1 + rand() % 150;
              C = A + B;
switch (problem)
{     
    
    case 'A':cout<< A << " + " << B << " = " << endl;
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
             
}

//Subtraction
           //Initialize variables
              A = 1 + rand() % 150;
              B = 1 + rand() % 150;
              C = A - B;
switch (problem)
{     
    
    case 'B':cout<< A << " - " << B << " = " << endl;
        cin>>C;
             cout << A << " - " << B << " = " << C << endl;

 if (C == A - B)
 {    
    cout<<" Congratulations! You got the correct answer! ";
 }    
   else 
  {    
    cout<<" You got the wrong answer. ";
  }
             
}

//Multiplication
           //Initialize variables
              A = 1 + rand() % 150;
              B = 1 + rand() % 150;
              C = A * B;
switch (problem)
{     
    
    case 'C':cout<< A << " * " << B << " = " << endl;
        cin>>C;
             cout << A << " * " << B << " = " << C << endl;

 if (C == A * B)
 {    
    cout<<" Congratulations! You got the correct answer! ";
 }    
   else 
  {    
    cout<<" You got the wrong answer. ";
  }
             
}

//Division
           //Initialize variables
              A = 1 + rand() % 150;
              B = 1 + rand() % 50;
              C = A / B;
switch (problem)
{     
    
    case 'D':cout<< A << " / " << B << " = " << endl;
        cin>>C;
             cout << A << " / " << B << " = " << C << endl;

 if (C == A / B)
 {    
    cout<<" Congratulations! You got the correct answer! ";
 }    
   else 
  {    
    cout<<" You got the wrong answer. ";
  }
             
}
    //Exit stage right
    return 0;
}


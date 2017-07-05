/* 
   File:   main
   Author: Jesse Garcia
   Created on July 2, 2017, 8:37 PM
   Purpose:  Roman Numeral Converter
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
    unsigned short number;
    char n1s;//Increments of 1's
    
    //Input values
    cout << "Input the number to convert to Roman Numerals " << endl;
    cout << "The number must be between 1 and 10 " << endl;
    cin >> number;
    
    //Validation
    if (number <= 0 && number > 10 )
    {    
        cout << "The input is invalid." << endl;
        return 1;
    }
    
    //Map inputs to outputs
    n1s = number;
    cout << "The number you typed in was " << number << endl;
    
    //Roman numeral 1's
    switch (n1s)
    {
        case 10:cout<< "X";break;
        case 9:cout<<"IX";break;
        case 8:cout<<"VIII";break;
        case 7:cout<<"VII";break;
        case 6:cout<<"VI";break;
        case 5:cout<<"V";break;
        case 4:cout<<"IV";break;
        case 3:cout<<"I";break;
        case 2:cout<<"I";break;
        case 1:cout<<"I";break;
        default:cout<<"";
                    
                   
                   
    }        
    
    //Display Output

    //Exit Program
    return 0;
}
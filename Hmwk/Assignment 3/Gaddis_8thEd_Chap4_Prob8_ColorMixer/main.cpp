/* 
   File:   main
   Author: Jesse Garcia
   Created on July 2, 2017, 10:49 PM
   Purpose:  Color Mixer
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
    char blue;
    char yellow;
    char red;
	
    //Input values
    cout << "There are three primary colors: blue, green and red. " << endl;
    cout << "Pick two primary colors to see what new color is made: " << endl;	
    cin >> blue >> yellow >> red;
    
    //Display output
        
    if (blue && yellow)
{
       cout << "The secondary color made is green. " << endl;
}
    else if (red && blue)
{
		
       cout << "The secondary color is purple. " << endl;
}
    else if (red && yellow)
{
	cout << "The secondary color made is orange.  " << endl;
}
	
    //Exit Program
    return 0;
}
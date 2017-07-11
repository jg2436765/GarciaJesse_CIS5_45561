/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on July 9, 2017, 8:39 PM
 * Purpose: Characters for the ASCII codes
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Display to output
    
   cout << "Characters for the ASCII Codes"<<endl;
	
    // Loop through the ASCII codes.
	for(int code = 0; code <= 127; code++)//ASCII codes 0 through 127
            //using for loop to display
	{
		if(code %16 == 0)
		    cout<<endl;
		cout<<(char)code<<"  ";
	}
	cout<<endl;
    //Exit stage right!
    return 0;
}


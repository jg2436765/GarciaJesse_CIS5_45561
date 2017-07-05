/* 
   File:   main
   Author: Jesse Garcia
   Created on July 2, 2017, 7:36 PM
   Purpose:  Areas of Rectangles
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
    int length1;
    int width1;
    int area1;
    int length2;
    int width2;
    int area2;
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    cout << " Enter the length of the first rectangle: ";
    cin >> length1;
    
    cout << " Enter the width of the first rectangle: ";
    cin >> width1;    
    
    area1 = length1 * width1;//area of the first rectangle
    
    cout << " Enter the length of the second rectangle: ";
    cin >> length2;
    
    cout << " Enter the width of the second rectangle: ";
    cin >> width2;    
    
    area2 = length2 * width2;//area of the second rectangle
    
    //Display Output
    if (area1 >= area2)
        cout << "Rectangle 1 has a bigger area = " << area1 << endl;
    else (area2 >= area1);
        cout << "Rectangle 2 has a bigger area = " << area2 << endl;    

    //Exit Program
    return 0;
}
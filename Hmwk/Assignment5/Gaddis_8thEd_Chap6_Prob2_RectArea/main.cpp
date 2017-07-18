/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on July 16, 2017, 10:45 PM
 * Purpose:  Calculating the Area of a Rectangle
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float getLength();
float getWidth();
float getArea( float, float );
void displayData( float, float, float );

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float length;
    float width;
    float area;
    
    //Get the rectangles length
    length = getLength();
    
    //Get the rectangles width
    width = getWidth();
    
    //Get the rectangles area
    area = getArea(length,width);
    
    //Call displayData
    displayData( length, width, area);
    
    //Exit stage right!
    return 0;
}
float getLength(){
    float length;
    cout<<"Enter the length of the rectangle: ";
    cin>>length;
    return length;
}
float getWidth(){
    float width;
    cout<<"Enter the width of the rectangle: ";
    cin>>width;
    return width;
}
float getArea(float l, float w){
    return l * w;
}
void displayData( float l, float w, float a){
   cout<<"Length: "<<l<<" Width: "<<w<<" Area: "<<a<<endl; 
}
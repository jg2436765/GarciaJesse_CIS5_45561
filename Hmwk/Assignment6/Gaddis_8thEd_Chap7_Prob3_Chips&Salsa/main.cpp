/* 
 * File:   main.cpp
 * Author: Jesse Garcia
 * Created on July 24, 2017, 11:32 AM
 * Purpose:  Grade Book
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE=5;
    string name[SIZE]={"mild","medium","sweet","hot","zesty"};
    int sales[SIZE];//Holds jars sold for each salsa types

    //Initialize variables
    for (int count=0;count<SIZE;count++){
        cout<<"Enter number of jars sold of "<<name[count]<<": ";
                cin>>sales[count];
        while(sales[count]<0){
            cout<<"Enter a valid number that is zero or greater. ";
            cin>>sales[count];
        }
    }
    
    cout<<endl;
    
    cout << "Sales Report"<<endl;
	cout << "_____________"<<endl;
        
        cout<<endl;
        
	for (int count = 0; count < SIZE; count++)
	{
		cout << name[count] << ": " << sales[count] << endl;
		
	}
	
	int total = 0;
	for (int count = 0; count < SIZE; count++)
	{
		total+=sales[count];
	}
	
        cout<<endl;
        
	cout<<"Total Sales: "<<total<<endl;
	
	int highest=0;
        // Start with 1 because sales[0] > sales[0] will ever be false
	for (int count = 1; count < SIZE; count++) 
	{
		if (sales[count] > sales[highest])
			highest = count;
	}
	cout<<endl;
	cout << "The highest selling salsa is " << name[highest] << endl;
	
        //Calculation for Lowest
	int lowest=0;
	for (int count = 1; count < SIZE; count++)
	{	
		if (sales[count] < lowest)
			lowest = count;
	}
	
	cout << "The lowest selling salsa is " << name[lowest];
    
    //Exit stage right!
    return 0;
}


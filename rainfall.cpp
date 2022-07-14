// Antonio Gomez Project 2 Rainfall
//   3/30/19
#include<iostream>
#include <iomanip>
#include <string>
using namespace std;
// Decalred varaiables
double months[12];
double total=0;
double avgRain = 0;
double maximumRain=0;
double minimumRain=0;
double Rainplaceholder=0;
// All functions
double LowestRainFall()
{
    return minimumRain;
}

double HighestRainFall()
{
    return maximumRain;
}

double totalRain()
{
    return total;
}

double AverageRain()            // This function gets the average by dividing the total by 12
{
    avgRain=total/12.00;
    return avgRain;
}

int smallmonthNumDetector()   // This function determines which month has the lowest month and compares them to all of the other values untill the statement is true once the if           statment evaluates to true then the loop stops and the month is assigned to month1fleast
{

    int month1ofleast=0;
    bool cont=true;             //cont stands for continue if continue is false then the loop terminates


    for(int counter=0;counter<=12,cont==true;counter++)
    {
        if(minimumRain>=months[counter])
        {
            month1ofleast=counter+1;
            cont=false;                         //this loop will never loop again once cont is false

        }
    }
    return month1ofleast;

}

int BigMonthNumDetector()       // This function determines which month has the highest month and compares them to all of the other values untill the statement is true once the if           statment evaluates to true then the loop stops and the month is assigned to month2oftop
{
    int month2oftop=0;
    bool cont=true;

    for(int counter=0;counter<=12,cont==true ;counter++)
    {
        if(maximumRain==months[counter])
        {
            month2oftop=counter+1;
            cont=false;                     //this loop will never loop again once cont is false

        }
    }

    return month2oftop;
}

int main()
{


    for(int counter=0,counter2=1;counter<12;counter++,counter2++)
    {
        cout << "Enter the rainfall (in inches) for month #"<<counter2<<": ";
        cin>>months[counter];


        while(months[counter]<0)        // the while loop rejects any negative values and reloops until a positive number is enetered
        {

            cout << "Rainfall must be 0 or more.\n";
            cout << "Please re-enter: ";
            cin>>months[counter];



        }
        total+= months[counter];
    }







    maximumRain=months[0];
    minimumRain=months[0];

    for (int counter=1;counter<+12;counter++)           // This for loop compares the values and deterines which month is likely the highest and lowest
    {
        Rainplaceholder=months[counter];
        if(Rainplaceholder<minimumRain)
            minimumRain=Rainplaceholder;
        if(Rainplaceholder>maximumRain)
            maximumRain=Rainplaceholder;
    }


    AverageRain();                                  // Function is called to get the average by dividing the totoal by 12








    cout << fixed << showpoint << setprecision(2) << endl;

    // Display the total amount of rainfall
    cout << "The total rainfall for the year is ";
    cout << totalRain()
    << " inches." << endl;

    // Display the average amount of rainfall
    cout << "The average rainfall for the year is ";
    cout <<  AverageRain()
    << " inches." << endl;
    // Display the largest amount of rainfall
    cout << "The largest amount of rainfall was ";
    cout << HighestRainFall()
    << " inches in month ";
    cout << BigMonthNumDetector() << "." << endl;
    // Display the smallest amount of rainfall
    cout << "The smallest amount of rainfall was ";
    cout <<  LowestRainFall()
    << " inches in month ";
    cout << smallmonthNumDetector()<< "." << endl << endl;



}

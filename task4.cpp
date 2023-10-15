#include<iostream>
using namespace std;
int hours,days,workers,totalhours;
string result;
string projectTimeCalculation();
main()
{
cout<<"Enter the needed hours: ";
cin>>hours;
cout<<"Enter the days that the firm has: ";
cin>>days;
cout<<"Enter the number of all workers: ";
cin>>workers;
result=projectTimeCalculation();
cout<<"Yes! "<<totalhours<<" hours left.";  
}
string projectTimeCalculation()
     {
         float workingdays=days-days*0.10;
         float extrahours=hours+2;
         float workerstime=workers*extrahours;
         totalhours=workerstime*workingdays;
     
         return result;


     }
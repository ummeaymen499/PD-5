#include<iostream>
using namespace std;
string pyramidvolume(int length,int width,int height,string des_units);
main()
{
int length,width,height;
string des_units,result;
cout<<"Enter the length of the pyramid (in meters): ";
cin>>length;
cout<<"Enter the height of the pyramid (in meters): ";
cin>>height;
cout<<"Enter the width of the pyramid (in meters): ";
cin>>width;
cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
cin>> des_units;
result=pyramidvolume(length,width,height,des_units);
}
string pyramidvolume(int length,int width,int height,string des_units)
{
int V;
string result;
V=(length*width*height)/3;
if(des_units == "meters" )
{
cout<<"The volume of the pyramid is: "<<V<<" cubic meters";
}
if(des_units == "kilometers" )
{
cout<<"The volume of the pyramid is: "<<V<<" cubic kilometers";
}
if(des_units == "centimeters" )
{
cout<<"The volume of the pyramid is: "<<V<<" cubic centimeters";
}
if(des_units == "millimeters" )
{
cout<<"The volume of the pyramid is: "<<V<<" cubic millimeters";
}
}


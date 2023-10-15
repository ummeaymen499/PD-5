#include<iostream>
using namespace std;
void finalprice(char vehicletype,float price);
main()
{
char vehicletype;
float price;
cout<<"Enter the vehicle type code (M, E, S, V, T): ";
cin>>vehicletype;
cout<<"Enter the price of the vehicle: $";
cin>>price;
finalprice(vehicletype,price);
}
void finalprice(char vehicletype,float price)
{
cout<<vehicletype;
if(vehicletype=='E')
{
float taxamount;
taxamount=price*0.08;
float finalprice=price + taxamount;
cout<<"The final price of a vehicle of type E after adding the tax is $"<<finalprice;
}
if(vehicletype=='M')
{
float taxamount;
taxamount=price*0.06;
float finalprice=price + taxamount;
cout<<"The final price of a vehicle of type M after adding the tax is $"<<finalprice;
}
if(vehicletype=='S')
{
float taxamount;
taxamount=price*0.1;
float finalprice=price + taxamount;
cout<<"The final price of a vehicle of type S after adding the tax is $"<<finalprice;
}
if(vehicletype=='T')
{
float taxamount;
taxamount=price*0.15;
float finalprice=price + taxamount;
cout<<"The final price of a vehicle of type T after adding the tax is $"<<finalprice;
}
if(vehicletype=='V')
{
float taxamount;
taxamount=price*0.12;
float finalprice=price + taxamount;
cout<<"The final price of a vehicle of type V after adding the tax is $"<<finalprice;
}
}
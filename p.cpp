#include<iostream>
#include<windows.h>
using namespace std;
void printheader();
void printmenu();
void options1selection();
void options2selection();
void maineng();
void maintech();
void mainsuper();
void cat();
void MTM();
void PTM();
void selectoption();
void further();
void loginpage();
int option;
string username;
string password;
main()
{
system("cls");
printheader();
printmenu();

}
void printheader()
{

cout<<"                                                                                                                                  "<<endl;
cout<<"----------------------------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"**********************************************************************************************************************************"<<endl;
cout<<"**********************************************************************************************************************************"<<endl;
cout<<"**                                          Production Plant Management System                                                  **"<<endl;                                              
cout<<"**                                                                                                                              **"<<endl;
cout<<"**********************************************************************************************************************************"<<endl;
cout<<"**********************************************************************************************************************************"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"                                                                                                                                  "<<endl;
cout<<"                                                                                                                                  "<<endl;


}
void printmenu()
{
cout<<"---------------------------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"*********************************************************************************************************************************"<<endl;
cout<<"*                                                      Menu                                                                     *"<<endl;
cout<<"*********************************************************************************************************************************"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------------------------"<<endl;
cout<<""<<endl;
cout<<"Select any one of the option:"<<endl;
cout<<"1. Maintenance Team Members"<<endl;
cout<<"2. Process Team Members"<<endl;
selectoption();
options1selection();
options2selection();
}
void selectoption()
{

cout<<"Enter option: ";
cin>>option;
}
void options1selection()
{
if(option==1)
MTM();
}
void options2selection()
{
if(option==2)
PTM();
}
void MTM()
    {
    system("cls");
    cout<<"---------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"*********************************************************************************************************************************"<<endl;
    cout<<"*                                              Maintenance Team Members                                                         *"<<endl;
    cout<<"*********************************************************************************************************************************"<<endl;
    cout<<"---------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<""<<endl;
    cout<<"Select any one of the options:"<<endl;
    cout<<"1.Engineers"<<endl;
    cout<<"2.Supervisors"<<endl;
    cout<<"3.Technicians"<<endl;
    selectoption();
    cat();
       }
void cat(){
    if(option==1)
    { maineng();}
    if(option==2)
    {mainsuper();}
    if(option==3)
    {maintech();}
}
void maineng()

    {system("cls");
    cout<<"Select any one of the options: "<<endl;
    cout<<"i.Mechanical Engineers"<<endl;
    cout<<"ii.Electrical Engineers"<<endl;
    cout<<"iii.Instrumentation and Control Engineers"<<endl;
    selectoption();
       further();
    }     

void mainsuper()
{

    system("cls");
    cout<<"Select any one of the options: "<<endl;
    cout<<"i.Mechanical Supervisors"<<endl;
    cout<<"ii.Electrical Supervisors"<<endl;
    cout<<"iii.Instrumentation and Control Supervisors"<<endl;
    selectoption();
    further();
     
}
void maintech()
{
     system("cls");
    cout<<"Select any one of the options: "<<endl;
    cout<<"i.Mechanical Technicians"<<endl;
    cout<<"ii.Electrical Technicians"<<endl;
    cout<<"iii.Instrumentation and Control Technicians"<<endl;
    selectoption();
        further();
     }

void further()
{

      system("cls");
      loginpage();
             
}
 
  

void PTM()
{
    system("cls");
    cout<<"---------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"*********************************************************************************************************************************"<<endl;
    cout<<"*                                              Process Team Members                                                         *"<<endl;
    cout<<"*********************************************************************************************************************************"<<endl;
    cout<<"---------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<""<<endl;
    cout<<"Select any one of the options:"<<endl;
    cout<<"1.Process Engineers"<<endl;
    cout<<"2.Senior Operators"<<endl;
    cout<<"3.Junior Operators"<<endl;
    selectoption();
    further();
}

void loginpage()
{
    cout<<"---------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"*********************************************************************************************************************************"<<endl;
    cout<<"*                                                  Login Page                                                                   *"<<endl;            
    cout<<"*********************************************************************************************************************************"<<endl;
    cout<<"---------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<""<<endl;
    cout<<"Enter Employe ID: ";
    cin>>username;
    cout<<"Enter Password: ";
    cin>>password;
}    

 















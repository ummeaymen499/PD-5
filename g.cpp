#include<iostream>
#include<windows.h>
using namespace std;
int x1=3,y1=1,x2=58,y2=1,x3=3,y3=9,x=48,y=21;

void gotoxy(int x,int y);
void printmaze();
void printplayer();
void eraseplayer();
void printenemy1();
void eraseenemy1();
void printenemy2();
void eraseenemy2();
void printenemy3();
void eraseenemy3();
void moveenemy1();
void moveenemy2();
void moveenemy3();
void moveplayerleft();
void moveplayerright();
void moveplayerUp();
void moveplayerDown();
char getCharAtxy(short int x, short int y);
main()
{
system("cls");
printmaze();
printplayer();
printenemy1();
printenemy2();
printenemy3();
while(true)
{
if(GetAsyncKeyState(VK_LEFT))
 {
 moveplayerleft();
 }
if(GetAsyncKeyState(VK_RIGHT))
 {
 moveplayerright();
 }
 if(GetAsyncKeyState(VK_UP))
 {
 moveplayerUp();
 }
 if(GetAsyncKeyState(VK_DOWN))
 {
 moveplayerDown();
 }

moveenemy1();
moveenemy2();
moveenemy3();
Sleep(100);
}
    

}
void printmaze()
{
system("cls");
cout<<"#############################################################################################"<<endl;
cout<<"||                                              %%%%                                       ||"<<endl;
cout<<"||                                              %%%%                                 %%%%%%||"<<endl;
cout<<"||                                              %%%%                                 %%%%%%||"<<endl;
cout<<"||                                              %%%%                                       ||"<<endl;
cout<<"||%%%%%%%%%%%%%%%%%%                            %%%%                                       ||"<<endl;
cout<<"||%%%%%%%%%%%%%%%%%%                            %%%%                                       ||"<<endl;
cout<<"||                                              %%%%                                       ||"<<endl;
cout<<"||                                                                                         ||"<<endl;
cout<<"||                                                                                         ||"<<endl;
cout<<"||                                                                                         ||"<<endl;
cout<<"||                                                                                         ||"<<endl;
cout<<"||                                                                       %%%%%%%%%%%%%%%%%%||"<<endl;
cout<<"||                                                                       %%%%%%%%%%%%%%%%%%||"<<endl;
cout<<"||                                                                                         ||"<<endl;
cout<<"||                                                                                         ||"<<endl;
cout<<"||                                                                                         ||"<<endl;
cout<<"||                                                                                         ||"<<endl;
cout<<"||                                                                                         ||"<<endl;
cout<<"||                                                                                         ||"<<endl;
cout<<"||                                                                                         ||"<<endl;
cout<<"||                                                                                         ||"<<endl;
cout<<"||                                                                                         ||"<<endl;
cout<<"||                                                                                         ||"<<endl;
cout<<"||                                                                                         ||"<<endl;
cout<<"||                                                                                         ||"<<endl;                                                                                                                                                                               
cout<<"#############################################################################################"<<endl;


}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x, short int y)
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}
void moveplayerleft()
{  
  if((getCharAtxy(x-1,y) == ' '))
  {
  eraseplayer();
  x=x-1;
  printplayer();
  }
}
void moveplayerright()
{  
  if((getCharAtxy(x+11,y) == ' '))
  {
  eraseplayer();
  x=x+1;
  printplayer();
  }
}
void moveplayerUp()
{  
  if((getCharAtxy(x,y-1) == ' '))
  {
  eraseplayer();
  y=y-1;
  printplayer();
  }
}
void moveplayerDown()
{  
  if((getCharAtxy(x,y+6) == ' '))
  {
  eraseplayer();
  y=y+1;
  printplayer();
  }
}

void printenemy1()
{
  gotoxy(x1,y1);
  cout<<" ^ ^ "<<endl;
  gotoxy(x1,y1+1);
  cout<<" * * "<<endl;
  gotoxy(x1,y1+2);
  cout<<"@@@@@"<<endl;
}
void eraseenemy1()
{
  gotoxy(x1,y1);
  cout<<"     "<<endl;
  gotoxy(x1,y1+1);
  cout<<"     "<<endl;
  gotoxy(x1,y1+2);
  cout<<"     "<<endl;
}
void printenemy2()
{
  gotoxy(x2,y2);
  cout<<" ^ ^ "<<endl;
  gotoxy(x2,y2+1);
  cout<<" * * "<<endl;
  gotoxy(x2,y2+2);
  cout<<"@@@@@"<<endl;
}
void eraseenemy2()
{
  gotoxy(x2,y2);
  cout<<"     "<<endl;
  gotoxy(x2,y2+1);
  cout<<"     "<<endl;
  gotoxy(x2,y2+2);
  cout<<"     "<<endl;
}
void printenemy3()
{
  gotoxy(x3,y3);
  cout<<" ^ ^ "<<endl;
  gotoxy(x3,y3+1);
  cout<<" * * "<<endl;
  gotoxy(x3,y3+2);
  cout<<"@@@@@"<<endl;
}
void eraseenemy3()
{
  gotoxy(x3,y3);
  cout<<"     "<<endl;
  gotoxy(x3,y3+1);
  cout<<"     "<<endl;
  gotoxy(x3,y3+2);
  cout<<"     "<<endl;
}
void printplayer()
{
  gotoxy(x,y);
  cout<<"    /\\    "<<endl;
  gotoxy(x,y+1);
  cout<<"   |$$|    "<<endl;
  gotoxy(x,y+2);
  cout<<" ^^^^^^^^  "<<endl;
  gotoxy(x,y+3);
  cout<<"   |$$|    "<<endl;
  gotoxy(x,y+4);
  cout<<"    !!     "<<endl;
}
void eraseplayer()
{
  gotoxy(x,y);
  cout<<"           "<<endl;
  gotoxy(x,y+1);
  cout<<"           "<<endl;
  gotoxy(x,y+2);
  cout<<"           "<<endl;
  gotoxy(x,y+3);
  cout<<"           "<<endl;
  gotoxy(x,y+4);
  cout<<"           "<<endl;
}
void moveenemy1()
{
    eraseenemy1();
    x1=x1+1;
    if(x1==44)
    {
        x1=3;
    }
    printenemy1();

}
void moveenemy2()
{
    eraseenemy2();
    y2=y2+1;
    if(y2==21)
    {
        y2=1;
    }
    printenemy2();

}
void moveenemy3()
{
    eraseenemy3();
    x3=x3+1;
    y3=y3+1;
    if((x3==15)&&(y3==21))
    {  
         x3=3;
         y3=9;
    }
    printenemy3();

}



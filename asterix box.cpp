#include <iostream>
#include <conio.h>
#include <windows.h>

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;
using namespace std;
 
void gotoxy(int x,int y)
{
	CursorPosition.X = x; //locate column
    CursorPosition.Y = y; //locate row
	SetConsoleCursorPosition(console,CursorPosition); //set position for next thing to be printed
			
}

int main()
	{
		int x = 2;
		int y = 5;
	
      system("cls");
      gotoxy(10,0);
      cout<<"hello";
	  
      for(x=2;x<30;x++)
        {
        gotoxy(x,1);//top row	
       	cout<<"*"; 
		   cout<<"\n";	}
		   
       for (y=2;y<15;y++)  
       {
       	gotoxy(29,y);//right side column
       	cout<<"*\n";
		   }
		   
		 for (y=2;y<15;y++)  
       {
       	gotoxy(2,y);//left side column
       	cout<<"*\n";
		   }
        for(x=2;x<30;x++)
        {
        gotoxy(x,y);//bottom row	
       	cout<<"* ";
        	}
        	
        	//right side box
        	gotoxy(46,0);
      cout<<"hello";
      for(x=35;x<63;x++)
        {
        gotoxy(x,1);//top row	
       	cout<<"*"; 
		   	}
		   
       for (y=2;y<15;y++)  
       {
       	gotoxy(62,y);//right side column
       	cout<<"*\n";
		   }
		   
		 for (y=2;y<15;y++)  
       {
       	gotoxy(35,y);//left side column
       	cout<<"*\n";
		   }
        for(x=35;x<63;x++)
        {
        gotoxy(x,y);//bottom row	
       	cout<<"* ";
        	}
        	

}	
